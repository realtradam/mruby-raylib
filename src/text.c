/**
 * @author      : tradam (tradam@skyx4c-artix)
 * @file        : text
 * @created     : Wednesday Feb 09, 2022 07:30:48 EST
 */

#include "mruby-raylib/text.h"
#include "mruby-raylib/types.h"
#include <raylib.h>
#include <mruby/class.h>


/* Create a new texture.
 * @overload initialize(path:)
 *   @param path [String] File path to the texture to be loaded
 * @return [Texture]
 */
static mrb_value
mrb_Font_initialize(mrb_state* mrb, mrb_value self) {
	char* path;

	uint32_t kw_num = 2;
	const mrb_sym kw_names[] = { 
		mrb_intern_lit(mrb, "path"),
		mrb_intern_lit(mrb, "font_size"),
	};
	mrb_value kw_values[kw_num];
	const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
	mrb_get_args(mrb, "|:", &kwargs);

	printf("wrapping struct");
	fflush(stdout);
	Font *font;
	WRAPSTRUCT(Font, Font_type, self, font);

	if(mrb_undef_p(kw_values[0])) {
		*font = GetFontDefault();
	} else {
		path = mrb_str_to_cstr(mrb, kw_values[0]);
		if(mrb_undef_p(kw_values[1])) {
			printf("default size");
			fflush(stdout);
			*font = LoadFont(path);
		} else {
			printf("custom size");
			fflush(stdout);
			*font = LoadFontEx(path, mrb_as_int(mrb, kw_values[1]), NULL, 95);
		}
	}

	mrb_data_init(self, font, &Font_type);
	return self;
}

/*
 * Draw the string as text on the screen.
 * @overload draw(x: 0, y: 0, origin: Rl::Vector2.default, rotation: 0, font_size: 20, spacing: font_size/10, font: Rl::Font.default)
 *   @param x [Integer] x position
 *   @param y [Integer] y position
 *   @param origin [Vector2] Offset
 *   @param rotation [Float] How much to rotate the text in radians
 *   @param font_size [Integer]
 *   @param spacing [Float] Spacing between letters
 *   @param font [Font] What font to render the text with
 * @return [Nil]
 */
static mrb_value
mrb_String_draw_text(mrb_state* mrb, mrb_value self) {
	int x = 0;
	int y = 0;
	float rotation = 0;
	float font_size = 20.0;
	float spacing = 10.0;
	Font default_font = GetFontDefault();

	uint32_t kw_num = 8;
	const mrb_sym kw_names[] = {
		mrb_intern_lit(mrb, "font"),
		mrb_intern_lit(mrb, "x"),
		mrb_intern_lit(mrb, "y"),
		mrb_intern_lit(mrb, "origin"),
		mrb_intern_lit(mrb, "rotation"),
		mrb_intern_lit(mrb, "font_size"),
		mrb_intern_lit(mrb, "spacing"),
		mrb_intern_lit(mrb, "color"),
	};
	mrb_value kw_values[kw_num];
	const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
	mrb_get_args(mrb, "|:", &kwargs);

	if (!mrb_undef_p(kw_values[0])){

		Font *tmp_font;
		UNWRAPSTRUCT(Font, Font_type, kw_values[0], tmp_font);

		default_font = *tmp_font;
	}

	// x
	if (!mrb_undef_p(kw_values[1])) {
		x = mrb_as_int(mrb, kw_values[1]);
	}

	// y
	if (!mrb_undef_p(kw_values[2])) {
		y = mrb_as_int(mrb, kw_values[2]);
	}

	// origin
	if (mrb_undef_p(kw_values[3])) {
		struct RClass *raylib = mrb_module_get(mrb, "Raylib");
		struct RClass *vector2 = mrb_class_get_under(mrb, raylib, Vector2_type.struct_name);
		kw_values[3] = mrb_funcall(mrb, mrb_obj_value(vector2), "default", 0);
	}

	// rotation
	if (!mrb_undef_p(kw_values[4])) {
		rotation = mrb_as_float(mrb, kw_values[4]) / 0.017453;
	}

	// font_size
	if (!mrb_undef_p(kw_values[5])) {
		font_size = mrb_as_float(mrb, kw_values[5]);
	}

	// spacing
	if (!mrb_undef_p(kw_values[6])) {
		spacing = mrb_as_float(mrb, kw_values[6]);
	} else {
		spacing = font_size/10.0;
	}

	// color
	if (mrb_undef_p(kw_values[7])) {
		struct RClass *raylib = mrb_module_get(mrb, "Raylib");
		struct RClass *color = mrb_class_get_under(mrb, raylib, Color_type.struct_name);
		kw_values[7] = mrb_funcall(mrb, mrb_obj_value(color), "blue", 0);
	}

	Color *tint_data;
	UNWRAPSTRUCT(Color, Color_type, kw_values[7], tint_data);

	Vector2 *vector2_data;
	UNWRAPSTRUCT(Vector2, Vector2_type, kw_values[3], vector2_data);

	Vector2 position = { x, y };

	DrawTextPro(default_font, mrb_str_to_cstr(mrb, self), position, *vector2_data, rotation, font_size, spacing, *tint_data);

	return mrb_nil_value();
}

/*
 * Draw the fps with a color depending on how high the fps is(30+ is green, 15-30 is orange, <15 is red).
 * @return [Nil]
 */
static mrb_value
mrb_Raylib_draw_fps(mrb_state* mrb, mrb_value self) {
	int x = 10;
	int y = 10;

	uint32_t kw_num = 2;
	const mrb_sym kw_names[] = {
		mrb_intern_lit(mrb, "x"),
		mrb_intern_lit(mrb, "y"),
	};
	mrb_value kw_values[kw_num];
	const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
	mrb_get_args(mrb, "|:", &kwargs);

	// x
	if (!mrb_undef_p(kw_values[0])) {
		x = mrb_as_int(mrb, kw_values[0]);
	}

	// y
	if (!mrb_undef_p(kw_values[1])) {
		y = mrb_as_int(mrb, kw_values[1]);
	}

	DrawFPS(x, y);
	return mrb_nil_value();
}


void
mrb_init_raylib_text(mrb_state* mrb) {
	struct RClass *raylib = mrb_define_module(mrb, "Raylib");
	struct RClass *string_extension = mrb_define_module_under(mrb, raylib, "StringExtension");
	struct RClass *font_class = mrb_define_class_under(mrb, raylib, "Font", mrb->object_class);
	MRB_SET_INSTANCE_TT(font_class, MRB_TT_DATA);
	mrb_define_method(mrb, font_class, "initialize", mrb_Font_initialize, MRB_ARGS_OPT(1));
	mrb_define_method(mrb, string_extension, "draw", mrb_String_draw_text, MRB_ARGS_OPT(1));
	mrb_define_module_function(mrb, raylib, "draw_fps", mrb_Raylib_draw_fps, MRB_ARGS_OPT(1));
}

