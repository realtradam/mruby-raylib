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


#define PREWRAPSTRUCT(var_name, type, target) var_name = (type *)DATA_PTR(target)

#define WRAPSTRUCT(type, mrb_type, target, var_name) \
	PREWRAPSTRUCT(var_name, type, target);\
	if(var_name) { mrb_free(mrb, var_name); }\
	mrb_data_init(target, NULL, &mrb_type);\
	var_name = (type *)mrb_malloc(mrb, sizeof(type));\

#define UNWRAPSTRUCT(type, mrb_type, target, var_name) var_name = DATA_GET_PTR(mrb, target, &mrb_type, type)



extern const struct mrb_data_type Color_type;
extern const struct mrb_data_type Rectangle_type;

void mrb_init_raylib_core(mrb_state*);

#endif /* end of include guard MRUBY_RAYLIB_CORE_H */

