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
void execute_emscripten_block(void*);
#endif

static const struct mrb_data_type Color_type = {
	"Color", mrb_free
};

static const struct mrb_data_type Texture_type = {
	"Texture", mrb_free
};

static mrb_value
mrb_Texture_initialize(mrb_state* mrb, mrb_value self) {
	char* path = NULL;
	mrb_get_args(mrb, "z", &path);

	struct Texture *texture = (struct Texture *)DATA_PTR(self);
	if(texture) { mrb_free(mrb, texture); }
	mrb_data_init(self, NULL, &Texture_type);
	texture = (struct Texture *)mrb_malloc(mrb, sizeof(struct Texture));

	*texture = LoadTexture(path);

	mrb_data_init(self, texture, &Texture_type);
	return self;
}

static mrb_value
mrb_draw_texture(mrb_state* mrb, mrb_value self) {
	mrb_value texture;
	mrb_int x;
	mrb_int y;
	mrb_value color;
	mrb_get_args(mrb, "oiio", &texture, &x, &y, &color);

	Texture *texture_data = DATA_GET_PTR(mrb, texture, &Texture_type, Texture);
	struct Color *color_data;
	color_data = DATA_GET_PTR(mrb, color, &Color_type, Color);

	DrawTexture(*texture_data, x, y, *color_data);

	return mrb_nil_value();
}



static mrb_value
mrb_Color_initialize(mrb_state* mrb, mrb_value self) {
	mrb_int r = 255;
	mrb_int g = 0;
	mrb_int b = 0;
	mrb_int a = 255;
	mrb_get_args(mrb, "|iiii", &r, &g, &b, &a);

	struct Color *color = (struct Color *)DATA_PTR(self);
	if(color) { mrb_free(mrb, color); }
	mrb_data_init(self, NULL, &Color_type);
	color = (struct Color *)mrb_malloc(mrb, sizeof(struct Color));

	color->r = r;
	color->g = g;
	color->b = b;
	color->a = a;

	mrb_data_init(self, color, &Color_type);
	return self;
}

static mrb_value
mrb_Color_get_red(mrb_state* mrb, mrb_value self) {
	struct Color *color = NULL;
	color = DATA_GET_PTR(mrb, self, &Color_type, Color);
	return mrb_fixnum_value(color->r);
}

static mrb_value
mrb_Color_set_red(mrb_state* mrb, mrb_value self) {
	struct Color *color = NULL;
	color = DATA_GET_PTR(mrb, self, &Color_type, Color);
	mrb_int r;
	mrb_get_args(mrb, "i", &r);
	color->r = r;

	return mrb_fixnum_value(color->r);
}

static mrb_value
mrb_Color_get_green(mrb_state* mrb, mrb_value self) {
	struct Color *color = NULL;
	color = DATA_GET_PTR(mrb, self, &Color_type, Color);
	return mrb_fixnum_value(color->g);
}

static mrb_value
mrb_Color_set_green(mrb_state* mrb, mrb_value self) {
	struct Color *color = NULL;
	color = DATA_GET_PTR(mrb, self, &Color_type, Color);
	mrb_int g;
	mrb_get_args(mrb, "i", &g);
	color->g = g;

	return mrb_fixnum_value(color->g);
}

static mrb_value
mrb_Color_get_blue(mrb_state* mrb, mrb_value self) {
	struct Color *color = NULL;
	color = DATA_GET_PTR(mrb, self, &Color_type, Color);

	return mrb_fixnum_value(color->b);
}

static mrb_value
mrb_Color_set_blue(mrb_state* mrb, mrb_value self) {
	struct Color *color = NULL;
	color = DATA_GET_PTR(mrb, self, &Color_type, Color);
	mrb_int b;
	mrb_get_args(mrb, "i", &b);
	color->b = b;

	return mrb_fixnum_value(color->b);
}

static mrb_value
mrb_Color_get_alpha(mrb_state* mrb, mrb_value self) {
	struct Color *color = NULL;
	color = DATA_GET_PTR(mrb, self, &Color_type, Color);
	return mrb_fixnum_value(color->a);
}

static mrb_value
mrb_Color_set_alpha(mrb_state* mrb, mrb_value self) {
	struct Color *color = NULL;
	color = DATA_GET_PTR(mrb, self, &Color_type, Color);
	mrb_int a;
	mrb_get_args(mrb, "i", &a);
	color->a = a;

	return mrb_fixnum_value(color->a);
}

static mrb_value
mrb_is_key_pressed(mrb_state* mrb, mrb_value self) {
	mrb_int key;
	mrb_get_args(mrb, "i", &key);

	return mrb_bool_value(IsKeyPressed(key));
}

static mrb_value
mrb_is_key_down(mrb_state* mrb, mrb_value self) {
	mrb_int key;
	mrb_get_args(mrb, "i", &key);

	return mrb_bool_value(IsKeyDown(key));
}


static mrb_value
mrb_is_key_released(mrb_state* mrb, mrb_value self) {
	mrb_int key;
	mrb_get_args(mrb, "i", &key);

	return mrb_bool_value(IsKeyReleased(key));
}

static mrb_value
mrb_is_key_up(mrb_state* mrb, mrb_value self) {
	mrb_int key;
	mrb_get_args(mrb, "i", &key);

	return mrb_bool_value(IsKeyUp(key));
}

static mrb_value
mrb_get_key_pressed(mrb_state* mrb, mrb_value self) {
	return mrb_fixnum_value(GetKeyPressed());
}

static mrb_value
mrb_get_mouse_x(mrb_state* mrb, mrb_value self) {
	return mrb_fixnum_value(GetMouseX());
}

static mrb_value
mrb_get_mouse_y(mrb_state* mrb, mrb_value self) {
	return mrb_fixnum_value(GetMouseY());
}

static mrb_value
mrb_get_mouse_wheel_move(mrb_state* mrb, mrb_value self) {
	return mrb_float_value(mrb, GetMouseWheelMove());
}

static mrb_value
mrb_init_window(mrb_state* mrb, mrb_value self) {
	mrb_int screenWidth = 800;
	mrb_int screenHeight = 600;
	char* title = "Hello World from FelFlame!";
	mrb_get_args(mrb, "|iiz", &screenWidth, &screenHeight, &title);

	InitWindow(screenWidth, screenHeight, title);

	return mrb_nil_value();
}

static mrb_value
mrb_platform(mrb_state* mrb, mrb_value self) {
#if defined(PLATFORM_WEB)
	return mrb_str_new_lit(mrb, "web");
#else
	return mrb_str_new_lit(mrb, "desktop");
#endif
}

//void DrawText(const char *text, int posX, int posY, int fontSize, Color color);
static mrb_value
mrb_draw_text(mrb_state* mrb, mrb_value self) {
	char* text = "Default Text";
	mrb_int x = 0;
	mrb_int y = 0;
	mrb_int fontSize = 16;
	mrb_value color_obj;

	struct Color *color = NULL;

	mrb_get_args(mrb, "|ziiio", &text, &x, &y, &fontSize, &color_obj);
	color = DATA_GET_PTR(mrb, color_obj, &Color_type, Color);
	DrawText(text, x, y, fontSize, *color);
	return mrb_nil_value();
}

static mrb_value
mrb_begin_drawing(mrb_state* mrb, mrb_value self) {
	BeginDrawing();
	return mrb_nil_value();
}

static mrb_value
mrb_end_drawing(mrb_state* mrb, mrb_value self) {
	EndDrawing();
	return mrb_nil_value();
}

static mrb_value
mrb_clear_background(mrb_state* mrb, mrb_value self) {
	ClearBackground(RAYWHITE);
	return mrb_nil_value();
}

static mrb_value 
mrb_call_main_loop(mrb_state* mrb, mrb_value self) {
	struct RClass *c = mrb_module_get(mrb, "Raylib");
	return mrb_funcall(mrb, mrb_obj_value(c), "main_loop", 0);
}

static mrb_value 
mrb_window_should_close(mrb_state* mrb, mrb_value self) {
	return mrb_bool_value(WindowShouldClose());
}

#if defined(PLATFORM_WEB)
static mrb_value 
mrb_emscripten_set_main_loop(mrb_state* mrb, mrb_value self) {
	emscripten_set_main_loop_arg(execute_emscripten_block, mrb, 0, 1);
	return mrb_nil_value();
}

void
execute_emscripten_block(void* mrb) {
	struct RClass *c = mrb_module_get(mrb, "Raylib");
	mrb_funcall(mrb, mrb_obj_value(c), "main_loop", 0);
}
#endif

static mrb_value
mrb_target_fps(mrb_state* mrb, mrb_value self) {
	mrb_int fps = 60;
	mrb_get_args(mrb, "i", &fps);
	SetTargetFPS(fps);
	return mrb_nil_value();
}

static mrb_value
mrb_fps(mrb_state* mrb, mrb_value self) {
	return mrb_fixnum_value(GetFPS());
}

static mrb_value
mrb_frame_time(mrb_state* mrb, mrb_value self) {
	return mrb_float_value(mrb, GetFrameTime());
}

static mrb_value
mrb_time(mrb_state* mrb, mrb_value self) {
	return mrb_float_value(mrb, GetTime());
}

void
mrb_mruby_raylib_gem_init(mrb_state* mrb) {
	struct RClass *raylib = mrb_define_module(mrb, "Raylib");
	mrb_define_class_method(mrb, raylib, "init_window", mrb_init_window, MRB_ARGS_REQ(3));
	mrb_define_class_method(mrb, raylib, "platform", mrb_platform, MRB_ARGS_NONE());
	mrb_define_class_method(mrb, raylib, "_draw_text", mrb_draw_text, MRB_ARGS_REQ(5));
	mrb_define_class_method(mrb, raylib, "begin_drawing", mrb_begin_drawing, MRB_ARGS_NONE());
	mrb_define_class_method(mrb, raylib, "end_drawing", mrb_end_drawing, MRB_ARGS_NONE());
	mrb_define_class_method(mrb, raylib, "clear_background", mrb_clear_background, MRB_ARGS_NONE());
	mrb_define_class_method(mrb, raylib, "call_main_loop", mrb_call_main_loop, MRB_ARGS_NONE());
	mrb_define_class_method(mrb, raylib, "window_should_close?", mrb_window_should_close, MRB_ARGS_NONE());
	mrb_define_class_method(mrb, raylib, "target_fps=", mrb_target_fps, MRB_ARGS_REQ(1));
	mrb_define_class_method(mrb, raylib, "fps", mrb_fps, MRB_ARGS_NONE());
	mrb_define_class_method(mrb, raylib, "frame_time", mrb_frame_time, MRB_ARGS_NONE());
	mrb_define_class_method(mrb, raylib, "time", mrb_time, MRB_ARGS_NONE());
	mrb_define_class_method(mrb, raylib, "_draw_texture", mrb_draw_texture, MRB_ARGS_REQ(4));
	mrb_define_class_method(mrb, raylib, "is_key_pressed?", mrb_is_key_pressed, MRB_ARGS_REQ(1));
	mrb_define_class_method(mrb, raylib, "is_key_down?", mrb_is_key_down, MRB_ARGS_REQ(1));
	mrb_define_class_method(mrb, raylib, "is_key_released?", mrb_is_key_released, MRB_ARGS_REQ(1));
	mrb_define_class_method(mrb, raylib, "is_key_up?", mrb_is_key_up, MRB_ARGS_REQ(1));
	mrb_define_class_method(mrb, raylib, "_key_pressed", mrb_get_key_pressed, MRB_ARGS_NONE());
	mrb_define_class_method(mrb, raylib, "mouse_x", mrb_get_mouse_x, MRB_ARGS_NONE());
	mrb_define_class_method(mrb, raylib, "mouse_y", mrb_get_mouse_y, MRB_ARGS_NONE());
	mrb_define_class_method(mrb,raylib, "mouse_wheel", mrb_get_mouse_wheel_move, MRB_ARGS_NONE());

	struct RClass *color_class = mrb_define_class_under(mrb, raylib, "Color", mrb->object_class);
	MRB_SET_INSTANCE_TT(color_class, MRB_TT_DATA);
	mrb_define_method(mrb, color_class, "initialize", mrb_Color_initialize, MRB_ARGS_REQ(4));
	mrb_define_method(mrb, color_class, "r", mrb_Color_get_red, MRB_ARGS_NONE());
	mrb_define_method(mrb, color_class, "r=", mrb_Color_set_red, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, color_class, "g", mrb_Color_get_green, MRB_ARGS_NONE());
	mrb_define_method(mrb, color_class, "g=", mrb_Color_set_green, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, color_class, "b", mrb_Color_get_blue, MRB_ARGS_NONE());
	mrb_define_method(mrb, color_class, "b=", mrb_Color_set_blue, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, color_class, "a", mrb_Color_get_alpha, MRB_ARGS_NONE());
	mrb_define_method(mrb, color_class, "a=", mrb_Color_set_alpha, MRB_ARGS_REQ(1));


	struct RClass *texture_class = mrb_define_class_under(mrb, raylib, "Texture", mrb->object_class);
	MRB_SET_INSTANCE_TT(texture_class, MRB_TT_DATA);
	mrb_define_method(mrb, texture_class, "initialize", mrb_Texture_initialize, MRB_ARGS_REQ(1));

#if defined(PLATFORM_WEB)
	mrb_define_class_method(mrb, raylib, "emscripten_set_main_loop", mrb_emscripten_set_main_loop, MRB_ARGS_NONE());
#endif
}

void
mrb_mruby_raylib_gem_final(mrb_state* mrb) {
	/* finalizer */
}
