#include <raylib.h>
#include <mruby.h>
#if defined(PLATFORM_WEB)
#include <emscripten/emscripten.h>
#endif

	static mrb_value
mrb_init_window(mrb_state *mrb, mrb_value self)
{
	mrb_int screenWidth = 800;
	mrb_int screenHeight = 600;
	char* title = "Hello World from FelFlame!";
	mrb_get_args(mrb, "|iiz", &screenWidth, &screenHeight, &title);

	InitWindow(screenWidth, screenHeight, title);

	return mrb_nil_value();
}

	static mrb_value
mrb_platform(mrb_state *mrb, mrb_value self)
{
#ifdef defined(PLATFORM_WEB)
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
	int x = 0;
	int y = 0;
	int fontSize = 16;
	mrb_get_args(mrb, "|ziii", &text, &x, &y, &fontSize);
	DrawText(text, x, y, fontSize, LIGHTGRAY);
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

void
mrb_mruby_raylib_gem_init(mrb_state* mrb) {
	struct RClass *raylib = mrb_define_module(mrb, "Raylib");
	mrb_define_class_method(mrb, raylib, "init_window", mrb_init_window, MRB_ARGS_REQ(3));
	mrb_define_class_method(mrb, raylib, "platform", mrb_platform, MRB_ARGS_NONE());
	mrb_define_class_method(mrb, raylib, "draw_text", mrb_draw_text, MRB_ARGS_REQ(4));
	mrb_define_class_method(mrb, raylib, "begin_drawing", mrb_begin_drawing, MRB_ARGS_NONE());
	mrb_define_class_method(mrb, raylib, "end_drawing", mrb_end_drawing, MRB_ARGS_NONE());
	mrb_define_class_method(mrb, raylib, "clear_background", mrb_clear_background, MRB_ARGS_NONE());
}

void
mrb_mruby_raylib_gem_final(mrb_state* mrb) {
	/* finalizer */
}
