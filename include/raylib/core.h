#ifndef MRUBY_RAYLIB_CORE_H
#define MRUBY_RAYLIB_CORE_H
#include <raylib.h>
#include <mruby.h>
#include <mruby/string.h>
#include <mruby/data.h>
#include <mruby/numeric.h>
#include <stdlib.h>
#if defined(PLATFORM_WEB)
#include <emscripten/emscripten.h>
#endif


static const struct mrb_data_type Color_type = {
	"Color", mrb_free
};

void mrb_init_raylib_core(mrb_state*);

#endif /* end of include guard MRUBY_RAYLIB_CORE_H */

