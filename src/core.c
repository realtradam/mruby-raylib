#include "raylib/core.h"


/*
 * @overload init_window(width: 800, height: 600, title: "Hello World from Raylib!")
 *   @param width [Integer]
 *   @param height [Integer]
 *   @param title [String]
 */
static mrb_value
mrb_init_window(mrb_state* mrb, mrb_value self) {
	mrb_int screenWidth = 800;
	mrb_int screenHeight = 600;
	char* title = "Hello World from Raylib!";

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


/* 
 * Check if KEY_ESCAPE pressed or Close icon pressed
 * @overload should_window_close?()
 */
static mrb_value 
mrb_window_should_close(mrb_state* mrb, mrb_value self) {
	return mrb_bool_value(WindowShouldClose());
}

/*
 * Set background color *(framebuffer clear color)*
 * @overload clear_background(color: Rl:Color.raywhite)
 *   @param color [Rl::Color]
 * @return [Nil]
 */
static mrb_value
mrb_clear_background(mrb_state* mrb, mrb_value self) {
	struct RClass *raylib = mrb_module_get(mrb, "Raylib");
	struct RClass *color = mrb_class_get_under(mrb, raylib, Color_type.struct_name);
	mrb_value color_obj = mrb_funcall(mrb, mrb_obj_value(color), "raywhite", 0);

	uint32_t kw_num = 1;
	const mrb_sym kw_names[] = { 
		mrb_intern_lit(mrb, "color"),
	};
	mrb_value kw_values[kw_num];
	const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
	mrb_get_args(mrb, "|o:", &color_obj, &kwargs);


	Color *color_data = DATA_GET_PTR(mrb, color_obj, &Color_type, Color);
	ClearBackground(*color_data);
	return mrb_nil_value();
}


void
mrb_init_raylib_core(mrb_state* mrb) {
	struct RClass *raylib = mrb_define_module(mrb, "Raylib");
	mrb_define_module_function(mrb, raylib, "init_window", mrb_init_window, MRB_ARGS_OPT(3));
	mrb_define_module_function(mrb, raylib, "window_should_close?", mrb_window_should_close, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, raylib, "clear_background", mrb_clear_background, MRB_ARGS_REQ(1));
}
