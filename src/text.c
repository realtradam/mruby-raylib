/**
 * @author      : tradam (tradam@skyx4c-artix)
 * @file        : text
 * @created     : Wednesday Feb 09, 2022 07:30:48 EST
 */

#include "mruby-raylib/text.h"
#include "mruby-raylib/types.h"
#include <raylib.h>

//Font font,
//const char *text,
//Vector2 position, # replace with x/y?
//Vector2 origin,
//float rotation,
//float fontSize,
//float spacing,
//Color tint
static mrb_value
mrb_String_draw_text(mrb_state* mrb, mrb_value self) {
	int x = 0;
	int y = 0;
	float rotation = 0;
	float font_size = 10.0;
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
	if (!mrb_undef_p(kw_values[5])) {
		spacing = mrb_as_float(mrb, kw_values[5]);
	} else {
		spacing = font_size/10.0;
	}

	// color
	if (mrb_undef_p(kw_values[6])) {
		struct RClass *raylib = mrb_module_get(mrb, "Raylib");
		struct RClass *color = mrb_class_get_under(mrb, raylib, Color_type.struct_name);
		kw_values[6] = mrb_funcall(mrb, mrb_obj_value(color), "black", 0);
	}

	Color *tint_data;
	UNWRAPSTRUCT(Color, Color_type, kw_values[6], tint_data);

	Vector2 *vector2_data;
	UNWRAPSTRUCT(Vector2, Vector2_type, kw_values[3], vector2_data);

	Vector2 position = { x, y };

	printf("TEST: ");
	printf(mrb_str_to_cstr(mrb, self));
	DrawTextPro(default_font, mrb_str_to_cstr(mrb, self), position, *vector2_data, rotation, font_size, spacing, *tint_data);
	DrawText(x, y, mrb_str_to_cstr(mrb, self), font_size, *tint_data);

	return mrb_nil_value();
}

void
mrb_init_raylib_text(mrb_state* mrb) {
	//struct RClass *string_class = mrb->string_class;//mrb_define_class(mrb, "String"); // built in string class
	struct RClass *raylib = mrb_define_module(mrb, "Raylib");
	struct RClass *font_class = mrb_define_class_under(mrb, raylib, "Font", mrb->object_class);
	mrb_define_method(mrb, mrb->string_class, "draw", mrb_String_draw_text, MRB_ARGS_OPT(1));
}

