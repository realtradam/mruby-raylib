#include <raylib.h>
#include <mruby.h>
#include <mruby/array.h>
#include <mruby/data.h>
#include <mruby/class.h>
#include <stdlib.h>
#if defined(PLATFORM_WEB)
#include <emscripten/emscripten.h>
#endif

#if defined(PLATFORM_WEB)
void Execute_Emscripten_Block(void*);
#endif

static const struct mrb_data_type Color_type = {
  "Color", mrb_free
};

static mrb_value
Color_initialize(mrb_state* state, mrb_value self) {
  mrb_int r = 255;
  mrb_int g = 0;
  mrb_int b = 0;
  mrb_int a = 255;
  mrb_get_args(state, "|iiii", &r, &g, &b, &a);

  struct Color *color = (struct Color *)DATA_PTR(self);
  if(color) { mrb_free(state, color); }
  mrb_data_init(self, NULL, &Color_type);
  color = (struct Color *)mrb_malloc(state, sizeof(struct Color));

  color->r = r;
  color->g = g;
  color->b = b;
  color->a = a;

  mrb_data_init(self, color, &Color_type);
  return self;
}

    static mrb_value
mrb_init_window(mrb_state *mrb, mrb_value self) {
    printf("1\n");
    mrb_int screenWidth = 800;
    printf("2\n");
    mrb_int screenHeight = 600;
    printf("3\n");
    char* title = "Hello World from FelFlame!";
    printf("4\n");
    mrb_get_args(mrb, "|iiz", &screenWidth, &screenHeight, &title);
    printf("5\n");

    InitWindow(screenWidth, screenHeight, title);
    printf("6\n");

    return mrb_nil_value();
}

    static mrb_value
mrb_platform(mrb_state *mrb, mrb_value self) {
#if defined(PLATFORM_WEB)
    return mrb_str_new_lit(mrb, "web");
#else
    return mrb_str_new_lit(mrb, "desktop");
#endif
}

//void DrawText(const char *text, int posX, int posY, int fontSize, Color color);
    static mrb_value
mrb_draw_text(mrb_state *mrb, mrb_value self) {
    char* text = "Default Text";
    mrb_int x = 0;
    mrb_int y = 0;
    mrb_int fontSize = 16;
    mrb_value color_obj;

    struct Color *color = NULL;

    mrb_get_args(mrb, "|ziiio", &text, &x, &y, &fontSize, &color_obj);
    Data_Get_Struct(mrb, color_obj, &Color_type, color);
    DrawText(text, x, y, fontSize, *color);
    return mrb_nil_value();
}

    static mrb_value
mrb_begin_drawing(mrb_state *mrb, mrb_value self) {
    BeginDrawing();
    return mrb_nil_value();
}

    static mrb_value
mrb_end_drawing(mrb_state *mrb, mrb_value self) {
    EndDrawing();
    return mrb_nil_value();
}

    static mrb_value
mrb_clear_background(mrb_state *mrb, mrb_value self) {
    ClearBackground(RAYWHITE);
    return mrb_nil_value();
}

    static mrb_value 
mrb_call_main_loop(mrb_state *mrb, mrb_value self) {
    struct RClass *c = mrb_module_get(mrb, "Raylib");
    mrb_value ml = mrb_funcall(mrb, mrb_obj_value(c), "main_loop", 0);
    return mrb_funcall(mrb, ml, "call", 0);
}

static mrb_value 
mrb_window_should_close(mrb_state *mrb, mrb_value self) {
    return mrb_obj_value(WindowShouldClose());
}

#if defined(PLATFORM_WEB)
static mrb_value 
mrb_emscripten_set_main_loop(mrb_state *mrb, mrb_value self) {
    emscripten_set_main_loop_arg(Execute_Emscripten_Block, mrb, 0, 1);
    return mrb_nil_value();
}

    void
Execute_Emscripten_Block(void *mrb) {
    struct RClass *c = mrb_module_get(mrb, "Raylib");
    mrb_value ml = mrb_funcall(mrb, mrb_obj_value(c), "main_loop", 0);
    mrb_funcall(mrb, ml, "call", 0);
}
#endif

static mrb_value
mrb_target_fps(mrb_state *mrb, mrb_value self) {
    mrb_int fps = 60;
    mrb_get_args(mrb, "i", &fps);
    SetTargetFPS(fps);
    return mrb_nil_value();
}

static mrb_value
mrb_fps(mrb_state *mrb, mrb_value self) {
    return mrb_fixnum_value(GetFPS());
}

static mrb_value
mrb_frame_time(mrb_state *mrb, mrb_value self) {
    return mrb_float_value(mrb, GetFrameTime());
}

static mrb_value
mrb_time(mrb_state *mrb, mrb_value self) {
    return mrb_float_value(mrb, GetTime());
}

void
mrb_mruby_raylib_gem_init(mrb_state* mrb) {
    struct RClass *raylib = mrb_define_module(mrb, "Raylib");
    //struct RClass *color_class = mrb_define_class(mrb, "Color", mrb->object_class);
    struct RClass *color_class = mrb_define_class_under(mrb, raylib, "Color", mrb->object_class);
    MRB_SET_INSTANCE_TT(color_class, MRB_TT_DATA);
    mrb_define_class_method(mrb, raylib, "init_window", mrb_init_window, MRB_ARGS_REQ(3));
    mrb_define_class_method(mrb, raylib, "platform", mrb_platform, MRB_ARGS_NONE());
    mrb_define_class_method(mrb, raylib, "draw_text", mrb_draw_text, MRB_ARGS_REQ(5));
    mrb_define_class_method(mrb, raylib, "begin_drawing", mrb_begin_drawing, MRB_ARGS_NONE());
    mrb_define_class_method(mrb, raylib, "end_drawing", mrb_end_drawing, MRB_ARGS_NONE());
    mrb_define_class_method(mrb, raylib, "clear_background", mrb_clear_background, MRB_ARGS_NONE());
    mrb_define_class_method(mrb, raylib, "call_main_loop", mrb_call_main_loop, MRB_ARGS_NONE());
    mrb_define_class_method(mrb, raylib, "window_should_close?", mrb_window_should_close, MRB_ARGS_NONE());
    mrb_define_class_method(mrb, raylib, "target_fps=", mrb_target_fps, MRB_ARGS_REQ(1));
    mrb_define_class_method(mrb, raylib, "fps", mrb_fps, MRB_ARGS_NONE());
    mrb_define_class_method(mrb, raylib, "frame_time", mrb_frame_time, MRB_ARGS_NONE());
    mrb_define_class_method(mrb, raylib, "time", mrb_time, MRB_ARGS_NONE());
    mrb_define_method(mrb, color_class, "initialize", Color_initialize, MRB_ARGS_REQ(4));
#if defined(PLATFORM_WEB)
    mrb_define_class_method(mrb, raylib, "emscripten_set_main_loop", mrb_emscripten_set_main_loop, MRB_ARGS_NONE());
#endif
}

void
mrb_mruby_raylib_gem_final(mrb_state* mrb) {
    /* finalizer */
}
