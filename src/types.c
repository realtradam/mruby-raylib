#include "mruby-raylib/types.h"
#include <raylib.h>

const struct mrb_data_type Color_type = {
	"Color", mrb_free
};

const struct mrb_data_type Rectangle_type = {
	"Rectangle", mrb_free
};

const struct mrb_data_type Texture_type = {
	"Texture", helper_texture_free
};

void
helper_texture_free(mrb_state* mrb, void*ptr) {
	Texture *texture = (Texture*)ptr;
	UnloadTexture(*texture);
	mrb_free(mrb, ptr);
}

const struct mrb_data_type Sound_type = {
	"Sound", helper_sound_free
};

void
helper_sound_free(mrb_state* mrb, void*ptr) {
	Sound *sound = (Sound*)ptr;
	UnloadSound(*sound);
	mrb_free(mrb, ptr);
}

const struct mrb_data_type Music_type = {
	"Music", helper_music_free
};

void
helper_music_free(mrb_state* mrb, void*ptr) {
	Music *music = (Music*)ptr;
	UnloadMusicStream(*music);
	mrb_free(mrb, ptr);
}

const struct mrb_data_type Vector2_type = {
	"Vector2", mrb_free
};

const struct mrb_data_type NPatchInfo_type = {
	"NPatchInfo", mrb_free
};

const struct mrb_data_type Font_type = {
	"Font", helper_font_free
};

void
helper_font_free(mrb_state* mrb, void*ptr) {
	Font *font = (Font*)ptr;
	UnloadFont(*font);
	mrb_free(mrb, ptr);
}
