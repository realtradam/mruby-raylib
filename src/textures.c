#include "mruby-raylib/textures.h"
#include "mruby-raylib/types.h"
#include <raylib.h>
#include <mruby/class.h>

/* Create a new texture.
 * @overload initialize(path:)
 *   @param path [String] File path to the texture to be loaded
 * @return [Texture]
 */
static mrb_value
mrb_Texture_initialize(mrb_state* mrb, mrb_value self) {
	char* path;

	uint32_t kw_num = 1;
	const mrb_sym kw_names[] = { 
		mrb_intern_lit(mrb, "path"),
	};
	mrb_value kw_values[kw_num];
	const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
	mrb_get_args(mrb, "|z:", &path, &kwargs);

	if(!mrb_undef_p(kw_values[0])) {
		path = mrb_str_to_cstr(mrb, kw_values[0]);
	}

	Texture *texture;
	WRAPSTRUCT(Texture, Texture_type, self, texture);

	*texture = LoadTexture(path);

	mrb_data_init(self, texture, &Texture_type);
	return self;
}

/*
 * Get the width of a texture.
 * @overload width
 * @overload w
 * @return [Integer]
 */
static mrb_value
mrb_Texture_get_width(mrb_state* mrb, mrb_value self) {
	Texture *texture;
	UNWRAPSTRUCT(Texture, Texture_type, self, texture);
	return mrb_fixnum_value(texture->width);
}

/*
 * Set the width of a texture.
 * @overload width=(width)
 *   @param width [Integer] The new width
 * @overload w=(width)
 *   @param w [Integer] The new width
 */
static mrb_value
mrb_Texture_set_width(mrb_state* mrb, mrb_value self) {
	Texture *texture;
	UNWRAPSTRUCT(Texture, Texture_type, self, texture);
	mrb_int width;
	mrb_get_args(mrb, "i", &width);
	texture->width = width;
	return mrb_fixnum_value(texture->width);
}

/*
 * Get the height of a texture.
 * @overload height
 * @overload h
 * @return [Integer]
 */
static mrb_value
mrb_Texture_get_height(mrb_state* mrb, mrb_value self) {
	Texture *texture;
	UNWRAPSTRUCT(Texture, Texture_type, self, texture);
	return mrb_fixnum_value(texture->height);
}

/*
 * Set the height of a texture.
 * @overload height=(height)
 *   @param height [Integer] The new height
 * @overload h=(height)
 *   @param h [Integer] The new height
 */
static mrb_value
mrb_Texture_set_height(mrb_state* mrb, mrb_value self) {
	Texture *texture;
	UNWRAPSTRUCT(Texture, Texture_type, self, texture);
	mrb_int height;
	mrb_get_args(mrb, "i", &height);
	texture->height = height;
	return mrb_fixnum_value(texture->height);
}

/*
 * Get the id of a texture.
 * @overload id
 * @return [Integer]
 */
static mrb_value
mrb_Texture_get_id(mrb_state* mrb, mrb_value self) {
	Texture *texture = DATA_GET_PTR(mrb, self, &Texture_type, Texture);
	return mrb_fixnum_value(texture->id);
}

/*
 * Get the mipmaps of a texture.
 * @overload mipmaps
 * @return [Integer]
 */
/*
   static mrb_value
   mrb_Texture_get_mipmaps(mrb_state* mrb, mrb_value self) {
   Texture *texture = DATA_GET_PTR(mrb, self, &Texture_type, Texture);
   return mrb_fixnum_value(texture->mipmaps);
   }
   */

/*
 * Get the format of a texture.
 * @overload format
 * @return [Integer]
 */
/*
   static mrb_value
   mrb_Texture_get_format(mrb_state* mrb, mrb_value self) {
   Texture *texture = DATA_GET_PTR(mrb, self, &Texture_type, Texture);
   return mrb_fixnum_value(texture->format);
   }
   */

/*
 * Draw the texture
 *   @overload draw(x: 0, y: 0, tint: Rl::Color.white)
 *     @param x [Integer] x position of the drawn texture.
 *     @param y [Integer] y position of the drawn texture.
 *     @param tint [Integer] The color the drawn texture is tinted(white is no tint).
 *   @overload draw(source: Rl::Rectangle.new(0, 0, texture.width, texture.height), x: 0, y: 0, origin: Rl::Vector2.new(0,0), rotation: 0, tint: Rl::Color.white)
 *     @param source [Rectangle] Which section of the texture is to be drawn, the default is the entire texture.
 *     @param origin [Vector2] Offset of the drawn texture.
 *     @param rotation [Float] How much the texture is rotated when drawn(In radians).
 *   @overload draw(source: Rl::Rectangle.new(0,0,texture.width,texture.height), dest: Rl::Rectangle.new(0,0,texture.width,texture.height), origin: Rl::Vector2.new(0,0), rotation: 0, tint: Rl::Color.white)
 *     @param dest [Rectangle] Where the texture is to be drawn on the screen(This can scale the texture)
 * @return [Nil]
 */
static mrb_value
mrb_draw_texture(mrb_state* mrb, mrb_value self) {
	mrb_int x = 0;
	mrb_int y = 0;
	struct RClass *raylib = mrb_module_get(mrb, "Raylib");
	struct RClass *color = mrb_class_get_under(mrb, raylib, Color_type.struct_name);
	mrb_value tint_obj = mrb_funcall(mrb, mrb_obj_value(color), "white", 0);
	//Texture2D texture, Rectangle source, Rectangle dest, Vector2 origin, float rotation, Color tint
	uint32_t kw_num = 7;
	const mrb_sym kw_names[] = { 
		mrb_intern_lit(mrb, "source"),
		mrb_intern_lit(mrb, "x"),
		mrb_intern_lit(mrb, "y"),
		mrb_intern_lit(mrb, "dest"),
		mrb_intern_lit(mrb, "origin"),
		mrb_intern_lit(mrb, "rotation"),
		mrb_intern_lit(mrb, "tint"),

	};
	mrb_value kw_values[kw_num];
	const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
	mrb_get_args(mrb, "|iio:", &x, &y, &tint_obj, &kwargs);

	// if dest exists
	if (!(mrb_undef_p(kw_values[3]))) {
		//x = mrb_fixnum(mrb_ensure_int_type(mrb, kw_values[3]));
	}
	//	use it
	// else check if x/y exist
	if (!(mrb_undef_p(kw_values[1]) && mrb_undef_p(kw_values[2]))) {
		//x = mrb_fixnum(mrb_ensure_int_type(mrb, kw_values[1]));
	}
	//	use them
	// else
	//	use arg x/y
	// end
	// if source
	if (!(mrb_undef_p(kw_values[0]))) {
		//x = mrb_fixnum(mrb_ensure_int_type(mrb, kw_values[0]));
	}
	//  use it
	// elsea
	//  use texture values
	// end
	// if tint exists
	if (!(mrb_undef_p(kw_values[6]))) {
		//x = mrb_fixnum(mrb_ensure_int_type(mrb, kw_values[6]));
	}
	//  use it
	// else
	//  use arg
	// end
	// if origin etc.
	if (!(mrb_undef_p(kw_values[4]))) {
		//x = mrb_fixnum(mrb_ensure_int_type(mrb, kw_values[0]));
	}
	// if rotation etc.
	if (!(mrb_undef_p(kw_values[5]))) {
		//x = mrb_fixnum(mrb_ensure_int_type(mrb, kw_values[0]));
	}

	if (!(mrb_undef_p(kw_values[0]))) {
		x = mrb_fixnum(mrb_ensure_int_type(mrb, kw_values[0]));
	}
	if (!(mrb_undef_p(kw_values[1]))) {
		y = mrb_fixnum(mrb_ensure_int_type(mrb, kw_values[1]));
	}
	if (!(mrb_undef_p(kw_values[2]))) {
		tint_obj = kw_values[2];
	}


	Texture *texture_data;
	UNWRAPSTRUCT(Texture, Texture_type, self, texture_data);

	Color *tint_data;
	UNWRAPSTRUCT(Color, Color_type, tint_obj, tint_data);

	DrawTexture(*texture_data, x, y, *tint_data);

	return mrb_nil_value();
}

static mrb_value
mrb_draw_texture_ex(mrb_state* mrb, mrb_value self) {
	mrb_value texture_obj;
	mrb_value pos_obj;
	mrb_float rotation;
	mrb_float scale;
	mrb_value tint_obj;
	mrb_get_args(mrb, "ooffo", &texture_obj, &pos_obj, &rotation, &scale, &tint_obj);

	Texture *texture_data = DATA_GET_PTR(mrb, texture_obj, &Texture_type, Texture);
	Vector2 *pos_data = DATA_GET_PTR(mrb, pos_obj, &Vector2_type, Vector2);
	Color *tint_data = DATA_GET_PTR(mrb, tint_obj, &Color_type, Color);

	DrawTextureEx(*texture_data, *pos_data, rotation, scale, *tint_data);

	return mrb_nil_value();
}

static mrb_value
mrb_draw_texture_pro(mrb_state* mrb, mrb_value self) {
	mrb_value texture_obj;
	mrb_value pos_obj;
	mrb_value source_rec_obj;
	mrb_value dest_rec_obj;
	mrb_float rotation;
	mrb_value tint_obj;
	mrb_get_args(mrb, "oooofo", &texture_obj, &source_rec_obj, &dest_rec_obj, &pos_obj, &rotation, &tint_obj);

	Texture *texture_data = DATA_GET_PTR(mrb, texture_obj, &Texture_type, Texture);
	Vector2 *pos_data = DATA_GET_PTR(mrb, pos_obj, &Vector2_type, Vector2);
	Rectangle *source_rec_data = DATA_GET_PTR(mrb, source_rec_obj, &Rectangle_type, Rectangle);
	Rectangle *dest_rec_data = DATA_GET_PTR(mrb, dest_rec_obj, &Rectangle_type, Rectangle);
	Color *tint_data = DATA_GET_PTR(mrb, tint_obj, &Color_type, Color);

	DrawTexturePro(*texture_data, *source_rec_data, *dest_rec_data, *pos_data, rotation, *tint_data);

	return mrb_nil_value();
}


void
mrb_init_raylib_textures(mrb_state* mrb) {
	struct RClass *raylib = mrb_define_module(mrb, "Raylib");
	struct RClass *texture_class = mrb_define_class_under(mrb, raylib, "Texture", mrb->object_class);
	MRB_SET_INSTANCE_TT(texture_class, MRB_TT_DATA);
	mrb_define_method(mrb, texture_class, "initialize", mrb_Texture_initialize, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, texture_class, "width", mrb_Texture_get_width, MRB_ARGS_NONE());
	mrb_define_method(mrb, texture_class, "width=", mrb_Texture_set_width, MRB_ARGS_REQ(1));
	//mrb_define_method(mrb, texture_class, "w", mrb_Texture_get_width, MRB_ARGS_NONE());
	//mrb_define_method(mrb, texture_class, "w=", mrb_Texture_set_width, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, texture_class, "height", mrb_Texture_get_height, MRB_ARGS_NONE());
	mrb_define_method(mrb, texture_class, "height=", mrb_Texture_set_height, MRB_ARGS_REQ(1));
	//mrb_define_method(mrb, texture_class, "h", mrb_Texture_get_height, MRB_ARGS_NONE());
	//mrb_define_method(mrb, texture_class, "h=", mrb_Texture_set_height, MRB_ARGS_REQ(1));
	mrb_define_method(mrb, texture_class, "id", mrb_Texture_get_id, MRB_ARGS_NONE());
	//mrb_define_method(mrb, texture_class, "mipmaps", mrb_Texture_get_mipmaps, MRB_ARGS_NONE());
	//mrb_define_method(mrb, texture_class, "format", mrb_Texture_get_format, MRB_ARGS_NONE());
	mrb_define_module_function(mrb, texture_class, "draw", mrb_draw_texture, MRB_ARGS_OPT(3));
	mrb_define_module_function(mrb, raylib, "_draw_texture_ex", mrb_draw_texture_ex, MRB_ARGS_OPT(4));
	mrb_define_module_function(mrb, raylib, "_draw_texture_pro", mrb_draw_texture_pro, MRB_ARGS_OPT(5));

}
