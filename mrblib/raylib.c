#include <raylib.h>
#include <mruby.h>
#if defined(PLATFORM_WEB)
#include <emscripten/emscripten.h>
#endif

	static mrb_value
mrb_init_window(mrb_state, *mrb, mrb_value self)
{
	mrb_int screenWidth = 800;
	mrb_int screenHeight = 600;
	char* title = "Hello World from FelFlame!";
	mrb_get_args(mrb, "|iiz", &screenWidth, &screenHeight, &title);

	InitWindow(screenWidth, screenHeight, title);

	return mrb_nil_value();
}

void
mrb_mruby_raylib_gem_init(mrb_state* mrb) {
	struct RClass *class_cextension = mrb_define_module(mrb, "Raylib");
	mrb_define_class_method(mrb, class_cextension, "init_window", mrb_init_window, MRB_ARGS_REQ(2));
}

void
mrb_mruby_raylib_gem_final(mrb_state* mrb) {
	/* finalizer */
}
