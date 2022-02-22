#ifndef MRUBY_RAYLIB_TYPES_H
#define MRUBY_RAYLIB_TYPES_H
#include <mruby.h>
#include <mruby/data.h>

#define PREWRAPSTRUCT(var_name, type, target) var_name = (type *)DATA_PTR(target)

#define WRAPSTRUCT(type, mrb_type, target, var_name) \
	PREWRAPSTRUCT(var_name, type, target);\
	if(var_name) { mrb_free(mrb, var_name); }\
	mrb_data_init(target, NULL, &mrb_type);\
	var_name = (type *)mrb_malloc(mrb, sizeof(type));\

#define UNWRAPSTRUCT(type, mrb_type, target, var_name) var_name = DATA_GET_PTR(mrb, target, &mrb_type, type)

extern const struct mrb_data_type Color_type;
extern const struct mrb_data_type Rectangle_type;
extern const struct mrb_data_type Texture_type;
extern const struct mrb_data_type Sound_type;
extern const struct mrb_data_type Music_type;
extern const struct mrb_data_type Vector2_type;
extern const struct mrb_data_type NPatchInfo_type;
extern const struct mrb_data_type Font_type;

void helper_texture_free(mrb_state*, void*);
void helper_sound_free(mrb_state*, void*);
void helper_music_free(mrb_state*, void*);
void helper_font_free(mrb_state*, void*);

#endif /* end of include guard MRUBY_RAYLIB_TYPES_H */

