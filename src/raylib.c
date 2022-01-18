#include <raylib.h>
#include <mruby.h>
#include <mruby/array.h>
#if defined(PLATFORM_WEB)
#include <emscripten/emscripten.h>
#endif

#if defined(PLATFORM_WEB)
void Execute_Emscripten_Block(void*);
#endif

    static mrb_value
mrb_init_window(mrb_state *mrb, mrb_value self)
{
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
mrb_platform(mrb_state *mrb, mrb_value self)
{
#if defined(PLATFORM_WEB)
    return mrb_str_new_lit(mrb, "web");
#else
    return mrb_str_new_lit(mrb, "desktop");
#endif
}

//void DrawText(const char *text, int posX, int posY, int fontSize, Color color);
    static mrb_value
mrb_draw_text(mrb_state *mrb, mrb_value self)
{
    char* text = "Default Text";
    mrb_int x = 0;
    mrb_int y = 0;
    mrb_int fontSize = 16;
    //mrb_value color = mrb_ary_new(mrb);
    //mrb_int temp = 200;
    //mrb_int temp2 = 255;
    //mrb_ary_push(mrb, color, temp);
    //mrb_ary_push(mrb, color, temp);
    //mrb_ary_push(mrb, color, temp);
    //mrb_ary_push(mrb, color, temp2);
    mrb_get_args(mrb, "|ziii", &text, &x, &y, &fontSize);
    //mrb_value mrb_ary_ref(mrb_state *, mrb_value, mrb_int)
    //Color result_color = (Color){mrb_ary_ref(mrb,color,0),mrb_ary_ref(mrb,color,1),mrb_ary_ref(mrb,color,2),mrb_ary_ref(mrb,color,3),};
    DrawText(text, x, y, fontSize, RED);
    return mrb_nil_value();
}

    static mrb_value
mrb_begin_drawing(mrb_state *mrb, mrb_value self)
{
    BeginDrawing();
    return mrb_nil_value();
}

    static mrb_value
mrb_end_drawing(mrb_state *mrb, mrb_value self)
{
    EndDrawing();
    return mrb_nil_value();
}

    static mrb_value
mrb_clear_background(mrb_state *mrb, mrb_value self)
{
    ClearBackground(RAYWHITE);
    return mrb_nil_value();
}

    static mrb_value 
mrb_call_main_loop(mrb_state *mrb, mrb_value self)
{
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
}

    void
Execute_Emscripten_Block(void *mrb)
{
    struct RClass *c = mrb_module_get(mrb, "Raylib");
    mrb_value ml = mrb_funcall(mrb, mrb_obj_value(c), "main_loop", 0);
    mrb_funcall(mrb, ml, "call", 0);
}
#endif

void
mrb_mruby_raylib_gem_init(mrb_state* mrb) {
    struct RClass *raylib = mrb_define_module(mrb, "Raylib");
    mrb_define_class_method(mrb, raylib, "init_window", mrb_init_window, MRB_ARGS_REQ(3));
    mrb_define_class_method(mrb, raylib, "platform", mrb_platform, MRB_ARGS_NONE());
    mrb_define_class_method(mrb, raylib, "draw_text", mrb_draw_text, MRB_ARGS_REQ(4));
    mrb_define_class_method(mrb, raylib, "begin_drawing", mrb_begin_drawing, MRB_ARGS_NONE());
    mrb_define_class_method(mrb, raylib, "end_drawing", mrb_end_drawing, MRB_ARGS_NONE());
    mrb_define_class_method(mrb, raylib, "clear_background", mrb_clear_background, MRB_ARGS_NONE());
    //mrb_define_class_method(mrb, raylib, "execute_main_loop", mrb_execute_main_loop, MRB_ARGS_NONE());
    mrb_define_class_method(mrb, raylib, "call_main_loop", mrb_call_main_loop, MRB_ARGS_NONE());
    mrb_define_class_method(mrb, raylib, "window_should_close?", mrb_window_should_close, MRB_ARGS_NONE());
#if defined(PLATFORM_WEB)
    mrb_define_class_method(mrb, raylib, "emscripten_set_main_loop", mrb_emscripten_set_main_loop, MRB_ARGS_NONE());
#endif
}

void
mrb_mruby_raylib_gem_final(mrb_state* mrb) {
    /* finalizer */
}
