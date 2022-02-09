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
 * @return [Integer]
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
 * @return [Integer]
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
 * @overload draw(source: Rl::Rectangle.new(0,0,texture.width,texture.height), dest: Rl::Rectangle.new(0,0,texture.width,texture.height), origin: Rl::Vector2.default, rotation: 0, tint: Rl::Color.white)
 *     @param tint [Color] The color the drawn texture is tinted(white is 'no tint').
 *     @param source [Rectangle] Which section of the texture is to be drawn, the default is the entire texture.
 *     @param origin [Vector2] Offset of the drawn texture. Default is no offset.
 *     @param rotation [Float] How much the texture is rotated when drawn(In radians).
 *     @param dest [Rectangle] Where the texture is to be drawn on the screen(This can scale the texture). Default is the size of the texture.
 * @return [Nil]
 */
static mrb_value
mrb_Texture_draw_texture(mrb_state* mrb, mrb_value self) {
	struct RClass *raylib;// = mrb_module_get(mrb, "Raylib");
	Rectangle source = {0};
	Rectangle dest = {0};
	float rotation = 0.0;
	Texture *texture_data;
	UNWRAPSTRUCT(Texture, Texture_type, self, texture_data);
	//mrb_value tint_obj = mrb_funcall(mrb, mrb_obj_value(color), "white", 0);
	//Texture2D texture, Rectangle source, Rectangle dest, Vector2 origin, float rotation, Color tint
	uint32_t kw_num = 5;
	const mrb_sym kw_names[] = {
		mrb_intern_lit(mrb, "source"),
		mrb_intern_lit(mrb, "dest"),
		mrb_intern_lit(mrb, "origin"),
		mrb_intern_lit(mrb, "rotation"),
		mrb_intern_lit(mrb, "tint"),
	};
	mrb_value kw_values[kw_num];
	const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
	mrb_get_args(mrb, "|:", &kwargs);

	// if source defined
	if (!(mrb_undef_p(kw_values[0]))) {
		Rectangle *temp_rec;
		UNWRAPSTRUCT(Rectangle, Rectangle_type, kw_values[0], temp_rec);
		source = *temp_rec;
	} else {
		source = (struct Rectangle){ 0, 0, texture_data->width, texture_data->height };
	}

	// if dest defined
	if (!(mrb_undef_p(kw_values[1]))) {
		Rectangle *temp_rec;
		UNWRAPSTRUCT(Rectangle, Rectangle_type, kw_values[1], temp_rec);
		dest = *temp_rec;
	} else {
		dest = (struct Rectangle){ 0, 0, texture_data->width, texture_data->height };
	}

	// if origin undefined
	if ((mrb_undef_p(kw_values[2]))) {
		raylib = mrb_module_get(mrb, "Raylib");
		struct RClass *vector2 = mrb_class_get_under(mrb, raylib, Vector2_type.struct_name);
		kw_values[2] = mrb_funcall(mrb, mrb_obj_value(vector2), "default", 0);
	}

	// if rotation defined
	if (!(mrb_undef_p(kw_values[3]))) {
		rotation = mrb_as_float(mrb, kw_values[3]) / 0.017453;
	}

	// if color undefined
	if ((mrb_undef_p(kw_values[4]))) {
		raylib = mrb_module_get(mrb, "Raylib"); // needs to be called again or else segfault
		struct RClass *color = mrb_class_get_under(mrb, raylib, Color_type.struct_name);
		kw_values[4] = mrb_funcall(mrb, mrb_obj_value(color), "white", 0);
	}



	Color *tint_data;
	UNWRAPSTRUCT(Color, Color_type, kw_values[4], tint_data);

	Vector2 *vector2_data;
	UNWRAPSTRUCT(Vector2, Vector2_type, kw_values[2], vector2_data);

	//Texture2D texture, Rectangle source, Rectangle dest, Vector2 origin, float rotation, Color tint
	DrawTexturePro(*texture_data, source, dest, *vector2_data, rotation, *tint_data);

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
	mrb_define_method(mrb, texture_class, "draw", mrb_Texture_draw_texture, MRB_ARGS_OPT(3));

}
