#include "raylib/core.h"

/*
 * @overload init_window(screen_width, screen_height, title)
 *
 * Initialize window and OpenGL context.
 *
 * *Parameters:*
 *
 * * *screen_width* (+Integer+)
 *
 * * *screen_height* (+Integer+)
 *
 * * *title* (+String+)
 */
static mrb_value
mrb_init_window(mrb_state* mrb, mrb_value self) {
	mrb_int screenWidth = 800;
	mrb_int screenHeight = 600;
	char* title = "Hello World from FelFlame!";

	uint32_t kw_num = 3;
	const mrb_sym kw_names[] = { 
		mrb_intern_lit(mrb, "width"), 
		mrb_intern_lit(mrb, "height"),
		mrb_intern_lit(mrb, "title"),
	};
	mrb_value kw_values[kw_num];
	const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
	mrb_get_args(mrb, "|iiz:", &screenWidth, &screenHeight, &title, &kwargs);

	if (mrb_undef_p(kw_values[0])) {
		kw_values[0] = mrb_fixnum_value(screenWidth);
	}
	if (mrb_undef_p(kw_values[1])) {
		kw_values[1] = mrb_fixnum_value(screenHeight);
	}
	if (mrb_undef_p(kw_values[2])) {
		kw_values[2] = mrb_str_new_cstr(mrb, title);
	}

	InitWindow(mrb_fixnum(kw_values[0]), mrb_fixnum(kw_values[1]), mrb_str_to_cstr(mrb, kw_values[2]));

	return mrb_nil_value();
}

void
mrb_raylib_core_init(mrb_state* mrb) {
	struct RClass *raylib = mrb_define_module(mrb, "Raylib");
	mrb_define_module_function(mrb, raylib, "init_window", mrb_init_window, MRB_ARGS_OPT(3));
}
