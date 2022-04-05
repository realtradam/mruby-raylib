// "char **" is not a function return datatype that can be currently autobound. From function: "GetDirectoryFiles"

// "char **" is not a function return datatype that can be currently autobound. From function: "GetDroppedFiles"

// "TextureCubemap" is not a function return datatype that can be currently autobound. From function: "LoadTextureCubemap"



#include <raylib.h>
#include <mruby.h>
#include <mruby/array.h>
#include <mruby/data.h>
#include <mruby/class.h>
#include <mruby/numeric.h>
#include <mruby/string.h>
#include <mruby/compile.h>
#include <stdlib.h>


      

        static const struct mrb_data_type mrb_Color_struct = { 
        "Color", 
          mrb_free
        };
        
      
static mrb_value
mrb_Color_get_a(mrb_state* mrb, mrb_value self) {
Color *struct_color = DATA_GET_PTR(mrb, self, &mrb_Color_struct, Color);
return mrb_fixnum_value(struct_color->a);

}
      
static mrb_value
mrb_Color_set_a(mrb_state* mrb, mrb_value self) {
int parameter_a;

mrb_get_args(mrb, "i", &parameter_a);
Color *struct_color = DATA_GET_PTR(mrb, self, &mrb_Color_struct, Color);
struct_color->a = parameter_a;
return mrb_fixnum_value(parameter_a);

}
      
static mrb_value
mrb_Color_get_b(mrb_state* mrb, mrb_value self) {
Color *struct_color = DATA_GET_PTR(mrb, self, &mrb_Color_struct, Color);
return mrb_fixnum_value(struct_color->b);

}
      
static mrb_value
mrb_Color_set_b(mrb_state* mrb, mrb_value self) {
int parameter_b;

mrb_get_args(mrb, "i", &parameter_b);
Color *struct_color = DATA_GET_PTR(mrb, self, &mrb_Color_struct, Color);
struct_color->b = parameter_b;
return mrb_fixnum_value(parameter_b);

}
      
static mrb_value
mrb_Color_get_g(mrb_state* mrb, mrb_value self) {
Color *struct_color = DATA_GET_PTR(mrb, self, &mrb_Color_struct, Color);
return mrb_fixnum_value(struct_color->g);

}
      
static mrb_value
mrb_Color_set_g(mrb_state* mrb, mrb_value self) {
int parameter_g;

mrb_get_args(mrb, "i", &parameter_g);
Color *struct_color = DATA_GET_PTR(mrb, self, &mrb_Color_struct, Color);
struct_color->g = parameter_g;
return mrb_fixnum_value(parameter_g);

}
      
static mrb_value
mrb_Color_get_r(mrb_state* mrb, mrb_value self) {
Color *struct_color = DATA_GET_PTR(mrb, self, &mrb_Color_struct, Color);
return mrb_fixnum_value(struct_color->r);

}
      
static mrb_value
mrb_Color_set_r(mrb_state* mrb, mrb_value self) {
int parameter_r;

mrb_get_args(mrb, "i", &parameter_r);
Color *struct_color = DATA_GET_PTR(mrb, self, &mrb_Color_struct, Color);
struct_color->r = parameter_r;
return mrb_fixnum_value(parameter_r);

}
      
static mrb_value
mrb_Color_initialize(mrb_state* mrb, mrb_value self) {
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *color_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Color_struct.struct_name);
Color *wrapped_value = (Color *)mrb_malloc(mrb, sizeof(Color));
uint32_t kw_num = 4;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "a"),
mrb_intern_lit(mrb, "b"),
mrb_intern_lit(mrb, "g"),
mrb_intern_lit(mrb, "r")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->a = mrb_as_int(mrb, kw_values[0]);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->b = mrb_as_int(mrb, kw_values[1]);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->g = mrb_as_int(mrb, kw_values[2]);

}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->r = mrb_as_int(mrb, kw_values[3]);

}
        mrb_data_init(self, wrapped_value, &mrb_Color_struct);
return self;
}
      
      

        static const struct mrb_data_type mrb_GlyphInfo_struct = { 
        "GlyphInfo", 
          mrb_free
        };
        
      
static mrb_value
mrb_GlyphInfo_get_advanceX(mrb_state* mrb, mrb_value self) {
GlyphInfo *struct_glyphinfo = DATA_GET_PTR(mrb, self, &mrb_GlyphInfo_struct, GlyphInfo);
return mrb_fixnum_value(struct_glyphinfo->advanceX);

}
      
static mrb_value
mrb_GlyphInfo_set_advanceX(mrb_state* mrb, mrb_value self) {
int parameter_advanceX;

mrb_get_args(mrb, "i", &parameter_advanceX);
GlyphInfo *struct_glyphinfo = DATA_GET_PTR(mrb, self, &mrb_GlyphInfo_struct, GlyphInfo);
struct_glyphinfo->advanceX = parameter_advanceX;
return mrb_fixnum_value(parameter_advanceX);

}
      
static mrb_value
mrb_GlyphInfo_get_offsetX(mrb_state* mrb, mrb_value self) {
GlyphInfo *struct_glyphinfo = DATA_GET_PTR(mrb, self, &mrb_GlyphInfo_struct, GlyphInfo);
return mrb_fixnum_value(struct_glyphinfo->offsetX);

}
      
static mrb_value
mrb_GlyphInfo_set_offsetX(mrb_state* mrb, mrb_value self) {
int parameter_offsetX;

mrb_get_args(mrb, "i", &parameter_offsetX);
GlyphInfo *struct_glyphinfo = DATA_GET_PTR(mrb, self, &mrb_GlyphInfo_struct, GlyphInfo);
struct_glyphinfo->offsetX = parameter_offsetX;
return mrb_fixnum_value(parameter_offsetX);

}
      
static mrb_value
mrb_GlyphInfo_get_offsetY(mrb_state* mrb, mrb_value self) {
GlyphInfo *struct_glyphinfo = DATA_GET_PTR(mrb, self, &mrb_GlyphInfo_struct, GlyphInfo);
return mrb_fixnum_value(struct_glyphinfo->offsetY);

}
      
static mrb_value
mrb_GlyphInfo_set_offsetY(mrb_state* mrb, mrb_value self) {
int parameter_offsetY;

mrb_get_args(mrb, "i", &parameter_offsetY);
GlyphInfo *struct_glyphinfo = DATA_GET_PTR(mrb, self, &mrb_GlyphInfo_struct, GlyphInfo);
struct_glyphinfo->offsetY = parameter_offsetY;
return mrb_fixnum_value(parameter_offsetY);

}
      
static mrb_value
mrb_GlyphInfo_get_value(mrb_state* mrb, mrb_value self) {
GlyphInfo *struct_glyphinfo = DATA_GET_PTR(mrb, self, &mrb_GlyphInfo_struct, GlyphInfo);
return mrb_fixnum_value(struct_glyphinfo->value);

}
      
static mrb_value
mrb_GlyphInfo_set_value(mrb_state* mrb, mrb_value self) {
int parameter_value;

mrb_get_args(mrb, "i", &parameter_value);
GlyphInfo *struct_glyphinfo = DATA_GET_PTR(mrb, self, &mrb_GlyphInfo_struct, GlyphInfo);
struct_glyphinfo->value = parameter_value;
return mrb_fixnum_value(parameter_value);

}
      
static mrb_value
mrb_GlyphInfo_initialize(mrb_state* mrb, mrb_value self) {
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *glyphinfo_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_GlyphInfo_struct.struct_name);
GlyphInfo *wrapped_value = (GlyphInfo *)mrb_malloc(mrb, sizeof(GlyphInfo));
uint32_t kw_num = 5;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "advanceX"),
mrb_intern_lit(mrb, "image"),
mrb_intern_lit(mrb, "offsetX"),
mrb_intern_lit(mrb, "offsetY"),
mrb_intern_lit(mrb, "value")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->advanceX = mrb_as_int(mrb, kw_values[0]);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->offsetX = mrb_as_int(mrb, kw_values[2]);

}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->offsetY = mrb_as_int(mrb, kw_values[3]);

}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->value = mrb_as_int(mrb, kw_values[4]);

}
        mrb_data_init(self, wrapped_value, &mrb_GlyphInfo_struct);
return self;
}
      
      

        static const struct mrb_data_type mrb_Mesh_struct = { 
        "Mesh", 
          mrb_free
        };
        
      
static mrb_value
mrb_Mesh_get_triangleCount(mrb_state* mrb, mrb_value self) {
Mesh *struct_mesh = DATA_GET_PTR(mrb, self, &mrb_Mesh_struct, Mesh);
return mrb_fixnum_value(struct_mesh->triangleCount);

}
      
static mrb_value
mrb_Mesh_set_triangleCount(mrb_state* mrb, mrb_value self) {
int parameter_triangleCount;

mrb_get_args(mrb, "i", &parameter_triangleCount);
Mesh *struct_mesh = DATA_GET_PTR(mrb, self, &mrb_Mesh_struct, Mesh);
struct_mesh->triangleCount = parameter_triangleCount;
return mrb_fixnum_value(parameter_triangleCount);

}
      
static mrb_value
mrb_Mesh_get_vaoId(mrb_state* mrb, mrb_value self) {
Mesh *struct_mesh = DATA_GET_PTR(mrb, self, &mrb_Mesh_struct, Mesh);
return mrb_fixnum_value(struct_mesh->vaoId);

}
      
static mrb_value
mrb_Mesh_set_vaoId(mrb_state* mrb, mrb_value self) {
int parameter_vaoId;

mrb_get_args(mrb, "i", &parameter_vaoId);
Mesh *struct_mesh = DATA_GET_PTR(mrb, self, &mrb_Mesh_struct, Mesh);
struct_mesh->vaoId = parameter_vaoId;
return mrb_fixnum_value(parameter_vaoId);

}
      
static mrb_value
mrb_Mesh_get_vertexCount(mrb_state* mrb, mrb_value self) {
Mesh *struct_mesh = DATA_GET_PTR(mrb, self, &mrb_Mesh_struct, Mesh);
return mrb_fixnum_value(struct_mesh->vertexCount);

}
      
static mrb_value
mrb_Mesh_set_vertexCount(mrb_state* mrb, mrb_value self) {
int parameter_vertexCount;

mrb_get_args(mrb, "i", &parameter_vertexCount);
Mesh *struct_mesh = DATA_GET_PTR(mrb, self, &mrb_Mesh_struct, Mesh);
struct_mesh->vertexCount = parameter_vertexCount;
return mrb_fixnum_value(parameter_vertexCount);

}
      
static mrb_value
mrb_Mesh_initialize(mrb_state* mrb, mrb_value self) {
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *mesh_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Mesh_struct.struct_name);
Mesh *wrapped_value = (Mesh *)mrb_malloc(mrb, sizeof(Mesh));
uint32_t kw_num = 15;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "animNormals"),
mrb_intern_lit(mrb, "animVertices"),
mrb_intern_lit(mrb, "boneIds"),
mrb_intern_lit(mrb, "boneWeights"),
mrb_intern_lit(mrb, "colors"),
mrb_intern_lit(mrb, "indices"),
mrb_intern_lit(mrb, "normals"),
mrb_intern_lit(mrb, "tangents"),
mrb_intern_lit(mrb, "texcoords"),
mrb_intern_lit(mrb, "texcoords2"),
mrb_intern_lit(mrb, "triangleCount"),
mrb_intern_lit(mrb, "vaoId"),
mrb_intern_lit(mrb, "vboId"),
mrb_intern_lit(mrb, "vertexCount"),
mrb_intern_lit(mrb, "vertices")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[10])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->triangleCount = mrb_as_int(mrb, kw_values[10]);

}
        
if (mrb_undef_p(kw_values[11])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->vaoId = mrb_as_int(mrb, kw_values[11]);

}
        
if (mrb_undef_p(kw_values[13])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->vertexCount = mrb_as_int(mrb, kw_values[13]);

}
        mrb_data_init(self, wrapped_value, &mrb_Mesh_struct);
return self;
}
      
      

        static const struct mrb_data_type mrb_Font_struct = { 
        "Font", 
          mrb_free
        };
        
      
static mrb_value
mrb_Font_get_baseSize(mrb_state* mrb, mrb_value self) {
Font *struct_font = DATA_GET_PTR(mrb, self, &mrb_Font_struct, Font);
return mrb_fixnum_value(struct_font->baseSize);

}
      
static mrb_value
mrb_Font_set_baseSize(mrb_state* mrb, mrb_value self) {
int parameter_baseSize;

mrb_get_args(mrb, "i", &parameter_baseSize);
Font *struct_font = DATA_GET_PTR(mrb, self, &mrb_Font_struct, Font);
struct_font->baseSize = parameter_baseSize;
return mrb_fixnum_value(parameter_baseSize);

}
      
static mrb_value
mrb_Font_get_glyphCount(mrb_state* mrb, mrb_value self) {
Font *struct_font = DATA_GET_PTR(mrb, self, &mrb_Font_struct, Font);
return mrb_fixnum_value(struct_font->glyphCount);

}
      
static mrb_value
mrb_Font_set_glyphCount(mrb_state* mrb, mrb_value self) {
int parameter_glyphCount;

mrb_get_args(mrb, "i", &parameter_glyphCount);
Font *struct_font = DATA_GET_PTR(mrb, self, &mrb_Font_struct, Font);
struct_font->glyphCount = parameter_glyphCount;
return mrb_fixnum_value(parameter_glyphCount);

}
      
static mrb_value
mrb_Font_get_glyphPadding(mrb_state* mrb, mrb_value self) {
Font *struct_font = DATA_GET_PTR(mrb, self, &mrb_Font_struct, Font);
return mrb_fixnum_value(struct_font->glyphPadding);

}
      
static mrb_value
mrb_Font_set_glyphPadding(mrb_state* mrb, mrb_value self) {
int parameter_glyphPadding;

mrb_get_args(mrb, "i", &parameter_glyphPadding);
Font *struct_font = DATA_GET_PTR(mrb, self, &mrb_Font_struct, Font);
struct_font->glyphPadding = parameter_glyphPadding;
return mrb_fixnum_value(parameter_glyphPadding);

}
      
static mrb_value
mrb_Font_initialize(mrb_state* mrb, mrb_value self) {
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *font_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Font_struct.struct_name);
Font *wrapped_value = (Font *)mrb_malloc(mrb, sizeof(Font));
uint32_t kw_num = 6;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "baseSize"),
mrb_intern_lit(mrb, "glyphCount"),
mrb_intern_lit(mrb, "glyphPadding"),
mrb_intern_lit(mrb, "glyphs"),
mrb_intern_lit(mrb, "recs"),
mrb_intern_lit(mrb, "texture")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->baseSize = mrb_as_int(mrb, kw_values[0]);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->glyphCount = mrb_as_int(mrb, kw_values[1]);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->glyphPadding = mrb_as_int(mrb, kw_values[2]);

}
        mrb_data_init(self, wrapped_value, &mrb_Font_struct);
return self;
}
      
      

        static const struct mrb_data_type mrb_Model_struct = { 
        "Model", 
          mrb_free
        };
        
      
static mrb_value
mrb_Model_get_boneCount(mrb_state* mrb, mrb_value self) {
Model *struct_model = DATA_GET_PTR(mrb, self, &mrb_Model_struct, Model);
return mrb_fixnum_value(struct_model->boneCount);

}
      
static mrb_value
mrb_Model_set_boneCount(mrb_state* mrb, mrb_value self) {
int parameter_boneCount;

mrb_get_args(mrb, "i", &parameter_boneCount);
Model *struct_model = DATA_GET_PTR(mrb, self, &mrb_Model_struct, Model);
struct_model->boneCount = parameter_boneCount;
return mrb_fixnum_value(parameter_boneCount);

}
      
static mrb_value
mrb_Model_get_materialCount(mrb_state* mrb, mrb_value self) {
Model *struct_model = DATA_GET_PTR(mrb, self, &mrb_Model_struct, Model);
return mrb_fixnum_value(struct_model->materialCount);

}
      
static mrb_value
mrb_Model_set_materialCount(mrb_state* mrb, mrb_value self) {
int parameter_materialCount;

mrb_get_args(mrb, "i", &parameter_materialCount);
Model *struct_model = DATA_GET_PTR(mrb, self, &mrb_Model_struct, Model);
struct_model->materialCount = parameter_materialCount;
return mrb_fixnum_value(parameter_materialCount);

}
      
static mrb_value
mrb_Model_get_meshCount(mrb_state* mrb, mrb_value self) {
Model *struct_model = DATA_GET_PTR(mrb, self, &mrb_Model_struct, Model);
return mrb_fixnum_value(struct_model->meshCount);

}
      
static mrb_value
mrb_Model_set_meshCount(mrb_state* mrb, mrb_value self) {
int parameter_meshCount;

mrb_get_args(mrb, "i", &parameter_meshCount);
Model *struct_model = DATA_GET_PTR(mrb, self, &mrb_Model_struct, Model);
struct_model->meshCount = parameter_meshCount;
return mrb_fixnum_value(parameter_meshCount);

}
      
static mrb_value
mrb_Model_initialize(mrb_state* mrb, mrb_value self) {
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *model_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Model_struct.struct_name);
Model *wrapped_value = (Model *)mrb_malloc(mrb, sizeof(Model));
uint32_t kw_num = 9;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "bindPose"),
mrb_intern_lit(mrb, "boneCount"),
mrb_intern_lit(mrb, "bones"),
mrb_intern_lit(mrb, "materialCount"),
mrb_intern_lit(mrb, "materials"),
mrb_intern_lit(mrb, "meshCount"),
mrb_intern_lit(mrb, "meshMaterial"),
mrb_intern_lit(mrb, "meshes"),
mrb_intern_lit(mrb, "transform")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->boneCount = mrb_as_int(mrb, kw_values[1]);

}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->materialCount = mrb_as_int(mrb, kw_values[3]);

}
        
if (mrb_undef_p(kw_values[5])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->meshCount = mrb_as_int(mrb, kw_values[5]);

}
        mrb_data_init(self, wrapped_value, &mrb_Model_struct);
return self;
}
      
      

        static const struct mrb_data_type mrb_ModelAnimation_struct = { 
        "ModelAnimation", 
          mrb_free
        };
        
      
static mrb_value
mrb_ModelAnimation_get_boneCount(mrb_state* mrb, mrb_value self) {
ModelAnimation *struct_modelanimation = DATA_GET_PTR(mrb, self, &mrb_ModelAnimation_struct, ModelAnimation);
return mrb_fixnum_value(struct_modelanimation->boneCount);

}
      
static mrb_value
mrb_ModelAnimation_set_boneCount(mrb_state* mrb, mrb_value self) {
int parameter_boneCount;

mrb_get_args(mrb, "i", &parameter_boneCount);
ModelAnimation *struct_modelanimation = DATA_GET_PTR(mrb, self, &mrb_ModelAnimation_struct, ModelAnimation);
struct_modelanimation->boneCount = parameter_boneCount;
return mrb_fixnum_value(parameter_boneCount);

}
      
static mrb_value
mrb_ModelAnimation_get_frameCount(mrb_state* mrb, mrb_value self) {
ModelAnimation *struct_modelanimation = DATA_GET_PTR(mrb, self, &mrb_ModelAnimation_struct, ModelAnimation);
return mrb_fixnum_value(struct_modelanimation->frameCount);

}
      
static mrb_value
mrb_ModelAnimation_set_frameCount(mrb_state* mrb, mrb_value self) {
int parameter_frameCount;

mrb_get_args(mrb, "i", &parameter_frameCount);
ModelAnimation *struct_modelanimation = DATA_GET_PTR(mrb, self, &mrb_ModelAnimation_struct, ModelAnimation);
struct_modelanimation->frameCount = parameter_frameCount;
return mrb_fixnum_value(parameter_frameCount);

}
      
static mrb_value
mrb_ModelAnimation_initialize(mrb_state* mrb, mrb_value self) {
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *modelanimation_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_ModelAnimation_struct.struct_name);
ModelAnimation *wrapped_value = (ModelAnimation *)mrb_malloc(mrb, sizeof(ModelAnimation));
uint32_t kw_num = 4;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "boneCount"),
mrb_intern_lit(mrb, "bones"),
mrb_intern_lit(mrb, "frameCount"),
mrb_intern_lit(mrb, "framePoses")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->boneCount = mrb_as_int(mrb, kw_values[0]);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->frameCount = mrb_as_int(mrb, kw_values[2]);

}
        mrb_data_init(self, wrapped_value, &mrb_ModelAnimation_struct);
return self;
}
      
      

        static const struct mrb_data_type mrb_NPatchInfo_struct = { 
        "NPatchInfo", 
          mrb_free
        };
        
      
static mrb_value
mrb_NPatchInfo_get_bottom(mrb_state* mrb, mrb_value self) {
NPatchInfo *struct_npatchinfo = DATA_GET_PTR(mrb, self, &mrb_NPatchInfo_struct, NPatchInfo);
return mrb_fixnum_value(struct_npatchinfo->bottom);

}
      
static mrb_value
mrb_NPatchInfo_set_bottom(mrb_state* mrb, mrb_value self) {
int parameter_bottom;

mrb_get_args(mrb, "i", &parameter_bottom);
NPatchInfo *struct_npatchinfo = DATA_GET_PTR(mrb, self, &mrb_NPatchInfo_struct, NPatchInfo);
struct_npatchinfo->bottom = parameter_bottom;
return mrb_fixnum_value(parameter_bottom);

}
      
static mrb_value
mrb_NPatchInfo_get_layout(mrb_state* mrb, mrb_value self) {
NPatchInfo *struct_npatchinfo = DATA_GET_PTR(mrb, self, &mrb_NPatchInfo_struct, NPatchInfo);
return mrb_fixnum_value(struct_npatchinfo->layout);

}
      
static mrb_value
mrb_NPatchInfo_set_layout(mrb_state* mrb, mrb_value self) {
int parameter_layout;

mrb_get_args(mrb, "i", &parameter_layout);
NPatchInfo *struct_npatchinfo = DATA_GET_PTR(mrb, self, &mrb_NPatchInfo_struct, NPatchInfo);
struct_npatchinfo->layout = parameter_layout;
return mrb_fixnum_value(parameter_layout);

}
      
static mrb_value
mrb_NPatchInfo_get_left(mrb_state* mrb, mrb_value self) {
NPatchInfo *struct_npatchinfo = DATA_GET_PTR(mrb, self, &mrb_NPatchInfo_struct, NPatchInfo);
return mrb_fixnum_value(struct_npatchinfo->left);

}
      
static mrb_value
mrb_NPatchInfo_set_left(mrb_state* mrb, mrb_value self) {
int parameter_left;

mrb_get_args(mrb, "i", &parameter_left);
NPatchInfo *struct_npatchinfo = DATA_GET_PTR(mrb, self, &mrb_NPatchInfo_struct, NPatchInfo);
struct_npatchinfo->left = parameter_left;
return mrb_fixnum_value(parameter_left);

}
      
static mrb_value
mrb_NPatchInfo_get_right(mrb_state* mrb, mrb_value self) {
NPatchInfo *struct_npatchinfo = DATA_GET_PTR(mrb, self, &mrb_NPatchInfo_struct, NPatchInfo);
return mrb_fixnum_value(struct_npatchinfo->right);

}
      
static mrb_value
mrb_NPatchInfo_set_right(mrb_state* mrb, mrb_value self) {
int parameter_right;

mrb_get_args(mrb, "i", &parameter_right);
NPatchInfo *struct_npatchinfo = DATA_GET_PTR(mrb, self, &mrb_NPatchInfo_struct, NPatchInfo);
struct_npatchinfo->right = parameter_right;
return mrb_fixnum_value(parameter_right);

}
      
static mrb_value
mrb_NPatchInfo_get_top(mrb_state* mrb, mrb_value self) {
NPatchInfo *struct_npatchinfo = DATA_GET_PTR(mrb, self, &mrb_NPatchInfo_struct, NPatchInfo);
return mrb_fixnum_value(struct_npatchinfo->top);

}
      
static mrb_value
mrb_NPatchInfo_set_top(mrb_state* mrb, mrb_value self) {
int parameter_top;

mrb_get_args(mrb, "i", &parameter_top);
NPatchInfo *struct_npatchinfo = DATA_GET_PTR(mrb, self, &mrb_NPatchInfo_struct, NPatchInfo);
struct_npatchinfo->top = parameter_top;
return mrb_fixnum_value(parameter_top);

}
      
static mrb_value
mrb_NPatchInfo_initialize(mrb_state* mrb, mrb_value self) {
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *npatchinfo_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_NPatchInfo_struct.struct_name);
NPatchInfo *wrapped_value = (NPatchInfo *)mrb_malloc(mrb, sizeof(NPatchInfo));
uint32_t kw_num = 6;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "bottom"),
mrb_intern_lit(mrb, "layout"),
mrb_intern_lit(mrb, "left"),
mrb_intern_lit(mrb, "right"),
mrb_intern_lit(mrb, "source"),
mrb_intern_lit(mrb, "top")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->bottom = mrb_as_int(mrb, kw_values[0]);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->layout = mrb_as_int(mrb, kw_values[1]);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->left = mrb_as_int(mrb, kw_values[2]);

}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->right = mrb_as_int(mrb, kw_values[3]);

}
        
if (mrb_undef_p(kw_values[5])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->top = mrb_as_int(mrb, kw_values[5]);

}
        mrb_data_init(self, wrapped_value, &mrb_NPatchInfo_struct);
return self;
}
      
      

        static const struct mrb_data_type mrb_AudioStream_struct = { 
        "AudioStream", 
          mrb_free
        };
        
      
static mrb_value
mrb_AudioStream_get_channels(mrb_state* mrb, mrb_value self) {
AudioStream *struct_audiostream = DATA_GET_PTR(mrb, self, &mrb_AudioStream_struct, AudioStream);
return mrb_fixnum_value(struct_audiostream->channels);

}
      
static mrb_value
mrb_AudioStream_set_channels(mrb_state* mrb, mrb_value self) {
int parameter_channels;

mrb_get_args(mrb, "i", &parameter_channels);
AudioStream *struct_audiostream = DATA_GET_PTR(mrb, self, &mrb_AudioStream_struct, AudioStream);
struct_audiostream->channels = parameter_channels;
return mrb_fixnum_value(parameter_channels);

}
      
static mrb_value
mrb_AudioStream_get_sampleRate(mrb_state* mrb, mrb_value self) {
AudioStream *struct_audiostream = DATA_GET_PTR(mrb, self, &mrb_AudioStream_struct, AudioStream);
return mrb_fixnum_value(struct_audiostream->sampleRate);

}
      
static mrb_value
mrb_AudioStream_set_sampleRate(mrb_state* mrb, mrb_value self) {
int parameter_sampleRate;

mrb_get_args(mrb, "i", &parameter_sampleRate);
AudioStream *struct_audiostream = DATA_GET_PTR(mrb, self, &mrb_AudioStream_struct, AudioStream);
struct_audiostream->sampleRate = parameter_sampleRate;
return mrb_fixnum_value(parameter_sampleRate);

}
      
static mrb_value
mrb_AudioStream_get_sampleSize(mrb_state* mrb, mrb_value self) {
AudioStream *struct_audiostream = DATA_GET_PTR(mrb, self, &mrb_AudioStream_struct, AudioStream);
return mrb_fixnum_value(struct_audiostream->sampleSize);

}
      
static mrb_value
mrb_AudioStream_set_sampleSize(mrb_state* mrb, mrb_value self) {
int parameter_sampleSize;

mrb_get_args(mrb, "i", &parameter_sampleSize);
AudioStream *struct_audiostream = DATA_GET_PTR(mrb, self, &mrb_AudioStream_struct, AudioStream);
struct_audiostream->sampleSize = parameter_sampleSize;
return mrb_fixnum_value(parameter_sampleSize);

}
      
static mrb_value
mrb_AudioStream_initialize(mrb_state* mrb, mrb_value self) {
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *audiostream_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_AudioStream_struct.struct_name);
AudioStream *wrapped_value = (AudioStream *)mrb_malloc(mrb, sizeof(AudioStream));
uint32_t kw_num = 5;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "buffer"),
mrb_intern_lit(mrb, "channels"),
mrb_intern_lit(mrb, "processor"),
mrb_intern_lit(mrb, "sampleRate"),
mrb_intern_lit(mrb, "sampleSize")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->channels = mrb_as_int(mrb, kw_values[1]);

}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->sampleRate = mrb_as_int(mrb, kw_values[3]);

}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->sampleSize = mrb_as_int(mrb, kw_values[4]);

}
        mrb_data_init(self, wrapped_value, &mrb_AudioStream_struct);
return self;
}
      
      

        static const struct mrb_data_type mrb_Wave_struct = { 
        "Wave", 
          mrb_free
        };
        
      
static mrb_value
mrb_Wave_get_channels(mrb_state* mrb, mrb_value self) {
Wave *struct_wave = DATA_GET_PTR(mrb, self, &mrb_Wave_struct, Wave);
return mrb_fixnum_value(struct_wave->channels);

}
      
static mrb_value
mrb_Wave_set_channels(mrb_state* mrb, mrb_value self) {
int parameter_channels;

mrb_get_args(mrb, "i", &parameter_channels);
Wave *struct_wave = DATA_GET_PTR(mrb, self, &mrb_Wave_struct, Wave);
struct_wave->channels = parameter_channels;
return mrb_fixnum_value(parameter_channels);

}
      
static mrb_value
mrb_Wave_get_frameCount(mrb_state* mrb, mrb_value self) {
Wave *struct_wave = DATA_GET_PTR(mrb, self, &mrb_Wave_struct, Wave);
return mrb_fixnum_value(struct_wave->frameCount);

}
      
static mrb_value
mrb_Wave_set_frameCount(mrb_state* mrb, mrb_value self) {
int parameter_frameCount;

mrb_get_args(mrb, "i", &parameter_frameCount);
Wave *struct_wave = DATA_GET_PTR(mrb, self, &mrb_Wave_struct, Wave);
struct_wave->frameCount = parameter_frameCount;
return mrb_fixnum_value(parameter_frameCount);

}
      
static mrb_value
mrb_Wave_get_sampleRate(mrb_state* mrb, mrb_value self) {
Wave *struct_wave = DATA_GET_PTR(mrb, self, &mrb_Wave_struct, Wave);
return mrb_fixnum_value(struct_wave->sampleRate);

}
      
static mrb_value
mrb_Wave_set_sampleRate(mrb_state* mrb, mrb_value self) {
int parameter_sampleRate;

mrb_get_args(mrb, "i", &parameter_sampleRate);
Wave *struct_wave = DATA_GET_PTR(mrb, self, &mrb_Wave_struct, Wave);
struct_wave->sampleRate = parameter_sampleRate;
return mrb_fixnum_value(parameter_sampleRate);

}
      
static mrb_value
mrb_Wave_get_sampleSize(mrb_state* mrb, mrb_value self) {
Wave *struct_wave = DATA_GET_PTR(mrb, self, &mrb_Wave_struct, Wave);
return mrb_fixnum_value(struct_wave->sampleSize);

}
      
static mrb_value
mrb_Wave_set_sampleSize(mrb_state* mrb, mrb_value self) {
int parameter_sampleSize;

mrb_get_args(mrb, "i", &parameter_sampleSize);
Wave *struct_wave = DATA_GET_PTR(mrb, self, &mrb_Wave_struct, Wave);
struct_wave->sampleSize = parameter_sampleSize;
return mrb_fixnum_value(parameter_sampleSize);

}
      
static mrb_value
mrb_Wave_initialize(mrb_state* mrb, mrb_value self) {
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *wave_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Wave_struct.struct_name);
Wave *wrapped_value = (Wave *)mrb_malloc(mrb, sizeof(Wave));
uint32_t kw_num = 5;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "channels"),
mrb_intern_lit(mrb, "data"),
mrb_intern_lit(mrb, "frameCount"),
mrb_intern_lit(mrb, "sampleRate"),
mrb_intern_lit(mrb, "sampleSize")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->channels = mrb_as_int(mrb, kw_values[0]);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->frameCount = mrb_as_int(mrb, kw_values[2]);

}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->sampleRate = mrb_as_int(mrb, kw_values[3]);

}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->sampleSize = mrb_as_int(mrb, kw_values[4]);

}
        mrb_data_init(self, wrapped_value, &mrb_Wave_struct);
return self;
}
      
      

        static const struct mrb_data_type mrb_VrDeviceInfo_struct = { 
        "VrDeviceInfo", 
          mrb_free
        };
        
      
static mrb_value
mrb_VrDeviceInfo_get_eyeToScreenDistance(mrb_state* mrb, mrb_value self) {
VrDeviceInfo *struct_vrdeviceinfo = DATA_GET_PTR(mrb, self, &mrb_VrDeviceInfo_struct, VrDeviceInfo);
return mrb_float_value(mrb, struct_vrdeviceinfo->eyeToScreenDistance);

}
      
static mrb_value
mrb_VrDeviceInfo_set_eyeToScreenDistance(mrb_state* mrb, mrb_value self) {
float parameter_eyeToScreenDistance;

mrb_get_args(mrb, "f", &parameter_eyeToScreenDistance);
VrDeviceInfo *struct_vrdeviceinfo = DATA_GET_PTR(mrb, self, &mrb_VrDeviceInfo_struct, VrDeviceInfo);
struct_vrdeviceinfo->eyeToScreenDistance = parameter_eyeToScreenDistance;
return mrb_float_value(mrb, parameter_eyeToScreenDistance);

}
      
static mrb_value
mrb_VrDeviceInfo_get_hResolution(mrb_state* mrb, mrb_value self) {
VrDeviceInfo *struct_vrdeviceinfo = DATA_GET_PTR(mrb, self, &mrb_VrDeviceInfo_struct, VrDeviceInfo);
return mrb_fixnum_value(struct_vrdeviceinfo->hResolution);

}
      
static mrb_value
mrb_VrDeviceInfo_set_hResolution(mrb_state* mrb, mrb_value self) {
int parameter_hResolution;

mrb_get_args(mrb, "i", &parameter_hResolution);
VrDeviceInfo *struct_vrdeviceinfo = DATA_GET_PTR(mrb, self, &mrb_VrDeviceInfo_struct, VrDeviceInfo);
struct_vrdeviceinfo->hResolution = parameter_hResolution;
return mrb_fixnum_value(parameter_hResolution);

}
      
static mrb_value
mrb_VrDeviceInfo_get_hScreenSize(mrb_state* mrb, mrb_value self) {
VrDeviceInfo *struct_vrdeviceinfo = DATA_GET_PTR(mrb, self, &mrb_VrDeviceInfo_struct, VrDeviceInfo);
return mrb_float_value(mrb, struct_vrdeviceinfo->hScreenSize);

}
      
static mrb_value
mrb_VrDeviceInfo_set_hScreenSize(mrb_state* mrb, mrb_value self) {
float parameter_hScreenSize;

mrb_get_args(mrb, "f", &parameter_hScreenSize);
VrDeviceInfo *struct_vrdeviceinfo = DATA_GET_PTR(mrb, self, &mrb_VrDeviceInfo_struct, VrDeviceInfo);
struct_vrdeviceinfo->hScreenSize = parameter_hScreenSize;
return mrb_float_value(mrb, parameter_hScreenSize);

}
      
static mrb_value
mrb_VrDeviceInfo_get_interpupillaryDistance(mrb_state* mrb, mrb_value self) {
VrDeviceInfo *struct_vrdeviceinfo = DATA_GET_PTR(mrb, self, &mrb_VrDeviceInfo_struct, VrDeviceInfo);
return mrb_float_value(mrb, struct_vrdeviceinfo->interpupillaryDistance);

}
      
static mrb_value
mrb_VrDeviceInfo_set_interpupillaryDistance(mrb_state* mrb, mrb_value self) {
float parameter_interpupillaryDistance;

mrb_get_args(mrb, "f", &parameter_interpupillaryDistance);
VrDeviceInfo *struct_vrdeviceinfo = DATA_GET_PTR(mrb, self, &mrb_VrDeviceInfo_struct, VrDeviceInfo);
struct_vrdeviceinfo->interpupillaryDistance = parameter_interpupillaryDistance;
return mrb_float_value(mrb, parameter_interpupillaryDistance);

}
      
static mrb_value
mrb_VrDeviceInfo_get_lensSeparationDistance(mrb_state* mrb, mrb_value self) {
VrDeviceInfo *struct_vrdeviceinfo = DATA_GET_PTR(mrb, self, &mrb_VrDeviceInfo_struct, VrDeviceInfo);
return mrb_float_value(mrb, struct_vrdeviceinfo->lensSeparationDistance);

}
      
static mrb_value
mrb_VrDeviceInfo_set_lensSeparationDistance(mrb_state* mrb, mrb_value self) {
float parameter_lensSeparationDistance;

mrb_get_args(mrb, "f", &parameter_lensSeparationDistance);
VrDeviceInfo *struct_vrdeviceinfo = DATA_GET_PTR(mrb, self, &mrb_VrDeviceInfo_struct, VrDeviceInfo);
struct_vrdeviceinfo->lensSeparationDistance = parameter_lensSeparationDistance;
return mrb_float_value(mrb, parameter_lensSeparationDistance);

}
      
static mrb_value
mrb_VrDeviceInfo_get_vResolution(mrb_state* mrb, mrb_value self) {
VrDeviceInfo *struct_vrdeviceinfo = DATA_GET_PTR(mrb, self, &mrb_VrDeviceInfo_struct, VrDeviceInfo);
return mrb_fixnum_value(struct_vrdeviceinfo->vResolution);

}
      
static mrb_value
mrb_VrDeviceInfo_set_vResolution(mrb_state* mrb, mrb_value self) {
int parameter_vResolution;

mrb_get_args(mrb, "i", &parameter_vResolution);
VrDeviceInfo *struct_vrdeviceinfo = DATA_GET_PTR(mrb, self, &mrb_VrDeviceInfo_struct, VrDeviceInfo);
struct_vrdeviceinfo->vResolution = parameter_vResolution;
return mrb_fixnum_value(parameter_vResolution);

}
      
static mrb_value
mrb_VrDeviceInfo_get_vScreenCenter(mrb_state* mrb, mrb_value self) {
VrDeviceInfo *struct_vrdeviceinfo = DATA_GET_PTR(mrb, self, &mrb_VrDeviceInfo_struct, VrDeviceInfo);
return mrb_float_value(mrb, struct_vrdeviceinfo->vScreenCenter);

}
      
static mrb_value
mrb_VrDeviceInfo_set_vScreenCenter(mrb_state* mrb, mrb_value self) {
float parameter_vScreenCenter;

mrb_get_args(mrb, "f", &parameter_vScreenCenter);
VrDeviceInfo *struct_vrdeviceinfo = DATA_GET_PTR(mrb, self, &mrb_VrDeviceInfo_struct, VrDeviceInfo);
struct_vrdeviceinfo->vScreenCenter = parameter_vScreenCenter;
return mrb_float_value(mrb, parameter_vScreenCenter);

}
      
static mrb_value
mrb_VrDeviceInfo_get_vScreenSize(mrb_state* mrb, mrb_value self) {
VrDeviceInfo *struct_vrdeviceinfo = DATA_GET_PTR(mrb, self, &mrb_VrDeviceInfo_struct, VrDeviceInfo);
return mrb_float_value(mrb, struct_vrdeviceinfo->vScreenSize);

}
      
static mrb_value
mrb_VrDeviceInfo_set_vScreenSize(mrb_state* mrb, mrb_value self) {
float parameter_vScreenSize;

mrb_get_args(mrb, "f", &parameter_vScreenSize);
VrDeviceInfo *struct_vrdeviceinfo = DATA_GET_PTR(mrb, self, &mrb_VrDeviceInfo_struct, VrDeviceInfo);
struct_vrdeviceinfo->vScreenSize = parameter_vScreenSize;
return mrb_float_value(mrb, parameter_vScreenSize);

}
      
static mrb_value
mrb_VrDeviceInfo_initialize(mrb_state* mrb, mrb_value self) {
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *vrdeviceinfo_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_VrDeviceInfo_struct.struct_name);
VrDeviceInfo *wrapped_value = (VrDeviceInfo *)mrb_malloc(mrb, sizeof(VrDeviceInfo));
uint32_t kw_num = 10;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "chromaAbCorrection"),
mrb_intern_lit(mrb, "eyeToScreenDistance"),
mrb_intern_lit(mrb, "hResolution"),
mrb_intern_lit(mrb, "hScreenSize"),
mrb_intern_lit(mrb, "interpupillaryDistance"),
mrb_intern_lit(mrb, "lensDistortionValues"),
mrb_intern_lit(mrb, "lensSeparationDistance"),
mrb_intern_lit(mrb, "vResolution"),
mrb_intern_lit(mrb, "vScreenCenter"),
mrb_intern_lit(mrb, "vScreenSize")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->eyeToScreenDistance = mrb_as_float(mrb, kw_values[1]);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->hResolution = mrb_as_int(mrb, kw_values[2]);

}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->hScreenSize = mrb_as_float(mrb, kw_values[3]);

}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->interpupillaryDistance = mrb_as_float(mrb, kw_values[4]);

}
        
if (mrb_undef_p(kw_values[6])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->lensSeparationDistance = mrb_as_float(mrb, kw_values[6]);

}
        
if (mrb_undef_p(kw_values[7])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->vResolution = mrb_as_int(mrb, kw_values[7]);

}
        
if (mrb_undef_p(kw_values[8])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->vScreenCenter = mrb_as_float(mrb, kw_values[8]);

}
        
if (mrb_undef_p(kw_values[9])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->vScreenSize = mrb_as_float(mrb, kw_values[9]);

}
        mrb_data_init(self, wrapped_value, &mrb_VrDeviceInfo_struct);
return self;
}
      
      

        static const struct mrb_data_type mrb_MaterialMap_struct = { 
        "MaterialMap", 
          mrb_free
        };
        
      
static mrb_value
mrb_MaterialMap_get_value(mrb_state* mrb, mrb_value self) {
MaterialMap *struct_materialmap = DATA_GET_PTR(mrb, self, &mrb_MaterialMap_struct, MaterialMap);
return mrb_float_value(mrb, struct_materialmap->value);

}
      
static mrb_value
mrb_MaterialMap_set_value(mrb_state* mrb, mrb_value self) {
float parameter_value;

mrb_get_args(mrb, "f", &parameter_value);
MaterialMap *struct_materialmap = DATA_GET_PTR(mrb, self, &mrb_MaterialMap_struct, MaterialMap);
struct_materialmap->value = parameter_value;
return mrb_float_value(mrb, parameter_value);

}
      
static mrb_value
mrb_MaterialMap_initialize(mrb_state* mrb, mrb_value self) {
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *materialmap_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_MaterialMap_struct.struct_name);
MaterialMap *wrapped_value = (MaterialMap *)mrb_malloc(mrb, sizeof(MaterialMap));
uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "color"),
mrb_intern_lit(mrb, "texture"),
mrb_intern_lit(mrb, "value")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->value = mrb_as_float(mrb, kw_values[2]);

}
        mrb_data_init(self, wrapped_value, &mrb_MaterialMap_struct);
return self;
}
      
      

        static const struct mrb_data_type mrb_Music_struct = { 
        "Music", 
          mrb_free
        };
        
      
static mrb_value
mrb_Music_get_ctxType(mrb_state* mrb, mrb_value self) {
Music *struct_music = DATA_GET_PTR(mrb, self, &mrb_Music_struct, Music);
return mrb_fixnum_value(struct_music->ctxType);

}
      
static mrb_value
mrb_Music_set_ctxType(mrb_state* mrb, mrb_value self) {
int parameter_ctxType;

mrb_get_args(mrb, "i", &parameter_ctxType);
Music *struct_music = DATA_GET_PTR(mrb, self, &mrb_Music_struct, Music);
struct_music->ctxType = parameter_ctxType;
return mrb_fixnum_value(parameter_ctxType);

}
      
static mrb_value
mrb_Music_get_frameCount(mrb_state* mrb, mrb_value self) {
Music *struct_music = DATA_GET_PTR(mrb, self, &mrb_Music_struct, Music);
return mrb_fixnum_value(struct_music->frameCount);

}
      
static mrb_value
mrb_Music_set_frameCount(mrb_state* mrb, mrb_value self) {
int parameter_frameCount;

mrb_get_args(mrb, "i", &parameter_frameCount);
Music *struct_music = DATA_GET_PTR(mrb, self, &mrb_Music_struct, Music);
struct_music->frameCount = parameter_frameCount;
return mrb_fixnum_value(parameter_frameCount);

}
      
static mrb_value
mrb_Music_get_looping(mrb_state* mrb, mrb_value self) {
Music *struct_music = DATA_GET_PTR(mrb, self, &mrb_Music_struct, Music);
return mrb_bool_value(struct_music->looping);

}
      
static mrb_value
mrb_Music_set_looping(mrb_state* mrb, mrb_value self) {
bool parameter_looping;

mrb_get_args(mrb, "b", &parameter_looping);
Music *struct_music = DATA_GET_PTR(mrb, self, &mrb_Music_struct, Music);
struct_music->looping = parameter_looping;
return mrb_bool_value(parameter_looping);

}
      
static mrb_value
mrb_Music_initialize(mrb_state* mrb, mrb_value self) {
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *music_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Music_struct.struct_name);
Music *wrapped_value = (Music *)mrb_malloc(mrb, sizeof(Music));
uint32_t kw_num = 5;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "ctxData"),
mrb_intern_lit(mrb, "ctxType"),
mrb_intern_lit(mrb, "frameCount"),
mrb_intern_lit(mrb, "looping"),
mrb_intern_lit(mrb, "stream")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->ctxType = mrb_as_int(mrb, kw_values[1]);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->frameCount = mrb_as_int(mrb, kw_values[2]);

}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->looping = mrb_as_int(mrb, kw_values[3]);

}
        mrb_data_init(self, wrapped_value, &mrb_Music_struct);
return self;
}
      
      

        static const struct mrb_data_type mrb_Image_struct = { 
        "Image", 
          mrb_free
        };
        
      
static mrb_value
mrb_Image_get_format(mrb_state* mrb, mrb_value self) {
Image *struct_image = DATA_GET_PTR(mrb, self, &mrb_Image_struct, Image);
return mrb_fixnum_value(struct_image->format);

}
      
static mrb_value
mrb_Image_set_format(mrb_state* mrb, mrb_value self) {
int parameter_format;

mrb_get_args(mrb, "i", &parameter_format);
Image *struct_image = DATA_GET_PTR(mrb, self, &mrb_Image_struct, Image);
struct_image->format = parameter_format;
return mrb_fixnum_value(parameter_format);

}
      
static mrb_value
mrb_Image_get_height(mrb_state* mrb, mrb_value self) {
Image *struct_image = DATA_GET_PTR(mrb, self, &mrb_Image_struct, Image);
return mrb_fixnum_value(struct_image->height);

}
      
static mrb_value
mrb_Image_set_height(mrb_state* mrb, mrb_value self) {
int parameter_height;

mrb_get_args(mrb, "i", &parameter_height);
Image *struct_image = DATA_GET_PTR(mrb, self, &mrb_Image_struct, Image);
struct_image->height = parameter_height;
return mrb_fixnum_value(parameter_height);

}
      
static mrb_value
mrb_Image_get_mipmaps(mrb_state* mrb, mrb_value self) {
Image *struct_image = DATA_GET_PTR(mrb, self, &mrb_Image_struct, Image);
return mrb_fixnum_value(struct_image->mipmaps);

}
      
static mrb_value
mrb_Image_set_mipmaps(mrb_state* mrb, mrb_value self) {
int parameter_mipmaps;

mrb_get_args(mrb, "i", &parameter_mipmaps);
Image *struct_image = DATA_GET_PTR(mrb, self, &mrb_Image_struct, Image);
struct_image->mipmaps = parameter_mipmaps;
return mrb_fixnum_value(parameter_mipmaps);

}
      
static mrb_value
mrb_Image_get_width(mrb_state* mrb, mrb_value self) {
Image *struct_image = DATA_GET_PTR(mrb, self, &mrb_Image_struct, Image);
return mrb_fixnum_value(struct_image->width);

}
      
static mrb_value
mrb_Image_set_width(mrb_state* mrb, mrb_value self) {
int parameter_width;

mrb_get_args(mrb, "i", &parameter_width);
Image *struct_image = DATA_GET_PTR(mrb, self, &mrb_Image_struct, Image);
struct_image->width = parameter_width;
return mrb_fixnum_value(parameter_width);

}
      
static mrb_value
mrb_Image_initialize(mrb_state* mrb, mrb_value self) {
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *image_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Image_struct.struct_name);
Image *wrapped_value = (Image *)mrb_malloc(mrb, sizeof(Image));
uint32_t kw_num = 5;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "data"),
mrb_intern_lit(mrb, "format"),
mrb_intern_lit(mrb, "height"),
mrb_intern_lit(mrb, "mipmaps"),
mrb_intern_lit(mrb, "width")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->format = mrb_as_int(mrb, kw_values[1]);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->height = mrb_as_int(mrb, kw_values[2]);

}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->mipmaps = mrb_as_int(mrb, kw_values[3]);

}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->width = mrb_as_int(mrb, kw_values[4]);

}
        mrb_data_init(self, wrapped_value, &mrb_Image_struct);
return self;
}
      
      

        static const struct mrb_data_type mrb_RenderTexture_struct = { 
        "RenderTexture", 
          mrb_free
        };
        
      
static mrb_value
mrb_RenderTexture_get_id(mrb_state* mrb, mrb_value self) {
RenderTexture *struct_rendertexture = DATA_GET_PTR(mrb, self, &mrb_RenderTexture_struct, RenderTexture);
return mrb_fixnum_value(struct_rendertexture->id);

}
      
static mrb_value
mrb_RenderTexture_set_id(mrb_state* mrb, mrb_value self) {
int parameter_id;

mrb_get_args(mrb, "i", &parameter_id);
RenderTexture *struct_rendertexture = DATA_GET_PTR(mrb, self, &mrb_RenderTexture_struct, RenderTexture);
struct_rendertexture->id = parameter_id;
return mrb_fixnum_value(parameter_id);

}
      
static mrb_value
mrb_RenderTexture_initialize(mrb_state* mrb, mrb_value self) {
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *rendertexture_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_RenderTexture_struct.struct_name);
RenderTexture *wrapped_value = (RenderTexture *)mrb_malloc(mrb, sizeof(RenderTexture));
uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "depth"),
mrb_intern_lit(mrb, "id"),
mrb_intern_lit(mrb, "texture")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->id = mrb_as_int(mrb, kw_values[1]);

}
        mrb_data_init(self, wrapped_value, &mrb_RenderTexture_struct);
return self;
}
      
      

        static const struct mrb_data_type mrb_Ray_struct = { 
        "Ray", 
          mrb_free
        };
        
      
static mrb_value
mrb_Ray_initialize(mrb_state* mrb, mrb_value self) {
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *ray_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Ray_struct.struct_name);
Ray *wrapped_value = (Ray *)mrb_malloc(mrb, sizeof(Ray));
uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "direction"),
mrb_intern_lit(mrb, "position")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        mrb_data_init(self, wrapped_value, &mrb_Ray_struct);
return self;
}
      
      

        static const struct mrb_data_type mrb_RayCollision_struct = { 
        "RayCollision", 
          mrb_free
        };
        
      
static mrb_value
mrb_RayCollision_get_distance(mrb_state* mrb, mrb_value self) {
RayCollision *struct_raycollision = DATA_GET_PTR(mrb, self, &mrb_RayCollision_struct, RayCollision);
return mrb_float_value(mrb, struct_raycollision->distance);

}
      
static mrb_value
mrb_RayCollision_set_distance(mrb_state* mrb, mrb_value self) {
float parameter_distance;

mrb_get_args(mrb, "f", &parameter_distance);
RayCollision *struct_raycollision = DATA_GET_PTR(mrb, self, &mrb_RayCollision_struct, RayCollision);
struct_raycollision->distance = parameter_distance;
return mrb_float_value(mrb, parameter_distance);

}
      
static mrb_value
mrb_RayCollision_get_hit(mrb_state* mrb, mrb_value self) {
RayCollision *struct_raycollision = DATA_GET_PTR(mrb, self, &mrb_RayCollision_struct, RayCollision);
return mrb_bool_value(struct_raycollision->hit);

}
      
static mrb_value
mrb_RayCollision_set_hit(mrb_state* mrb, mrb_value self) {
bool parameter_hit;

mrb_get_args(mrb, "b", &parameter_hit);
RayCollision *struct_raycollision = DATA_GET_PTR(mrb, self, &mrb_RayCollision_struct, RayCollision);
struct_raycollision->hit = parameter_hit;
return mrb_bool_value(parameter_hit);

}
      
static mrb_value
mrb_RayCollision_initialize(mrb_state* mrb, mrb_value self) {
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *raycollision_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_RayCollision_struct.struct_name);
RayCollision *wrapped_value = (RayCollision *)mrb_malloc(mrb, sizeof(RayCollision));
uint32_t kw_num = 4;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "distance"),
mrb_intern_lit(mrb, "hit"),
mrb_intern_lit(mrb, "normal"),
mrb_intern_lit(mrb, "point")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->distance = mrb_as_float(mrb, kw_values[0]);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->hit = mrb_as_int(mrb, kw_values[1]);

}
        mrb_data_init(self, wrapped_value, &mrb_RayCollision_struct);
return self;
}
      
      

        static const struct mrb_data_type mrb_Texture_struct = { 
        "Texture", 
          mrb_free
        };
        
      
static mrb_value
mrb_Texture_get_format(mrb_state* mrb, mrb_value self) {
Texture *struct_texture = DATA_GET_PTR(mrb, self, &mrb_Texture_struct, Texture);
return mrb_fixnum_value(struct_texture->format);

}
      
static mrb_value
mrb_Texture_set_format(mrb_state* mrb, mrb_value self) {
int parameter_format;

mrb_get_args(mrb, "i", &parameter_format);
Texture *struct_texture = DATA_GET_PTR(mrb, self, &mrb_Texture_struct, Texture);
struct_texture->format = parameter_format;
return mrb_fixnum_value(parameter_format);

}
      
static mrb_value
mrb_Texture_get_height(mrb_state* mrb, mrb_value self) {
Texture *struct_texture = DATA_GET_PTR(mrb, self, &mrb_Texture_struct, Texture);
return mrb_fixnum_value(struct_texture->height);

}
      
static mrb_value
mrb_Texture_set_height(mrb_state* mrb, mrb_value self) {
int parameter_height;

mrb_get_args(mrb, "i", &parameter_height);
Texture *struct_texture = DATA_GET_PTR(mrb, self, &mrb_Texture_struct, Texture);
struct_texture->height = parameter_height;
return mrb_fixnum_value(parameter_height);

}
      
static mrb_value
mrb_Texture_get_id(mrb_state* mrb, mrb_value self) {
Texture *struct_texture = DATA_GET_PTR(mrb, self, &mrb_Texture_struct, Texture);
return mrb_fixnum_value(struct_texture->id);

}
      
static mrb_value
mrb_Texture_set_id(mrb_state* mrb, mrb_value self) {
int parameter_id;

mrb_get_args(mrb, "i", &parameter_id);
Texture *struct_texture = DATA_GET_PTR(mrb, self, &mrb_Texture_struct, Texture);
struct_texture->id = parameter_id;
return mrb_fixnum_value(parameter_id);

}
      
static mrb_value
mrb_Texture_get_mipmaps(mrb_state* mrb, mrb_value self) {
Texture *struct_texture = DATA_GET_PTR(mrb, self, &mrb_Texture_struct, Texture);
return mrb_fixnum_value(struct_texture->mipmaps);

}
      
static mrb_value
mrb_Texture_set_mipmaps(mrb_state* mrb, mrb_value self) {
int parameter_mipmaps;

mrb_get_args(mrb, "i", &parameter_mipmaps);
Texture *struct_texture = DATA_GET_PTR(mrb, self, &mrb_Texture_struct, Texture);
struct_texture->mipmaps = parameter_mipmaps;
return mrb_fixnum_value(parameter_mipmaps);

}
      
static mrb_value
mrb_Texture_get_width(mrb_state* mrb, mrb_value self) {
Texture *struct_texture = DATA_GET_PTR(mrb, self, &mrb_Texture_struct, Texture);
return mrb_fixnum_value(struct_texture->width);

}
      
static mrb_value
mrb_Texture_set_width(mrb_state* mrb, mrb_value self) {
int parameter_width;

mrb_get_args(mrb, "i", &parameter_width);
Texture *struct_texture = DATA_GET_PTR(mrb, self, &mrb_Texture_struct, Texture);
struct_texture->width = parameter_width;
return mrb_fixnum_value(parameter_width);

}
      
static mrb_value
mrb_Texture_initialize(mrb_state* mrb, mrb_value self) {
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *texture_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Texture_struct.struct_name);
Texture *wrapped_value = (Texture *)mrb_malloc(mrb, sizeof(Texture));
uint32_t kw_num = 5;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "format"),
mrb_intern_lit(mrb, "height"),
mrb_intern_lit(mrb, "id"),
mrb_intern_lit(mrb, "mipmaps"),
mrb_intern_lit(mrb, "width")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->format = mrb_as_int(mrb, kw_values[0]);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->height = mrb_as_int(mrb, kw_values[1]);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->id = mrb_as_int(mrb, kw_values[2]);

}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->mipmaps = mrb_as_int(mrb, kw_values[3]);

}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->width = mrb_as_int(mrb, kw_values[4]);

}
        mrb_data_init(self, wrapped_value, &mrb_Texture_struct);
return self;
}
      
      

        static const struct mrb_data_type mrb_Camera3D_struct = { 
        "Camera3D", 
          mrb_free
        };
        
      
static mrb_value
mrb_Camera3D_get_fovy(mrb_state* mrb, mrb_value self) {
Camera3D *struct_camera3d = DATA_GET_PTR(mrb, self, &mrb_Camera3D_struct, Camera3D);
return mrb_float_value(mrb, struct_camera3d->fovy);

}
      
static mrb_value
mrb_Camera3D_set_fovy(mrb_state* mrb, mrb_value self) {
float parameter_fovy;

mrb_get_args(mrb, "f", &parameter_fovy);
Camera3D *struct_camera3d = DATA_GET_PTR(mrb, self, &mrb_Camera3D_struct, Camera3D);
struct_camera3d->fovy = parameter_fovy;
return mrb_float_value(mrb, parameter_fovy);

}
      
static mrb_value
mrb_Camera3D_get_projection(mrb_state* mrb, mrb_value self) {
Camera3D *struct_camera3d = DATA_GET_PTR(mrb, self, &mrb_Camera3D_struct, Camera3D);
return mrb_fixnum_value(struct_camera3d->projection);

}
      
static mrb_value
mrb_Camera3D_set_projection(mrb_state* mrb, mrb_value self) {
int parameter_projection;

mrb_get_args(mrb, "i", &parameter_projection);
Camera3D *struct_camera3d = DATA_GET_PTR(mrb, self, &mrb_Camera3D_struct, Camera3D);
struct_camera3d->projection = parameter_projection;
return mrb_fixnum_value(parameter_projection);

}
      
static mrb_value
mrb_Camera3D_initialize(mrb_state* mrb, mrb_value self) {
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *camera3d_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Camera3D_struct.struct_name);
Camera3D *wrapped_value = (Camera3D *)mrb_malloc(mrb, sizeof(Camera3D));
uint32_t kw_num = 5;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "fovy"),
mrb_intern_lit(mrb, "position"),
mrb_intern_lit(mrb, "projection"),
mrb_intern_lit(mrb, "target"),
mrb_intern_lit(mrb, "up")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->fovy = mrb_as_float(mrb, kw_values[0]);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->projection = mrb_as_int(mrb, kw_values[2]);

}
        mrb_data_init(self, wrapped_value, &mrb_Camera3D_struct);
return self;
}
      
      

        static const struct mrb_data_type mrb_Sound_struct = { 
        "Sound", 
          mrb_free
        };
        
      
static mrb_value
mrb_Sound_get_frameCount(mrb_state* mrb, mrb_value self) {
Sound *struct_sound = DATA_GET_PTR(mrb, self, &mrb_Sound_struct, Sound);
return mrb_fixnum_value(struct_sound->frameCount);

}
      
static mrb_value
mrb_Sound_set_frameCount(mrb_state* mrb, mrb_value self) {
int parameter_frameCount;

mrb_get_args(mrb, "i", &parameter_frameCount);
Sound *struct_sound = DATA_GET_PTR(mrb, self, &mrb_Sound_struct, Sound);
struct_sound->frameCount = parameter_frameCount;
return mrb_fixnum_value(parameter_frameCount);

}
      
static mrb_value
mrb_Sound_initialize(mrb_state* mrb, mrb_value self) {
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *sound_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Sound_struct.struct_name);
Sound *wrapped_value = (Sound *)mrb_malloc(mrb, sizeof(Sound));
uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "frameCount"),
mrb_intern_lit(mrb, "stream")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->frameCount = mrb_as_int(mrb, kw_values[0]);

}
        mrb_data_init(self, wrapped_value, &mrb_Sound_struct);
return self;
}
      
      

        static const struct mrb_data_type mrb_Rectangle_struct = { 
        "Rectangle", 
          mrb_free
        };
        
      
static mrb_value
mrb_Rectangle_get_height(mrb_state* mrb, mrb_value self) {
Rectangle *struct_rectangle = DATA_GET_PTR(mrb, self, &mrb_Rectangle_struct, Rectangle);
return mrb_float_value(mrb, struct_rectangle->height);

}
      
static mrb_value
mrb_Rectangle_set_height(mrb_state* mrb, mrb_value self) {
float parameter_height;

mrb_get_args(mrb, "f", &parameter_height);
Rectangle *struct_rectangle = DATA_GET_PTR(mrb, self, &mrb_Rectangle_struct, Rectangle);
struct_rectangle->height = parameter_height;
return mrb_float_value(mrb, parameter_height);

}
      
static mrb_value
mrb_Rectangle_get_width(mrb_state* mrb, mrb_value self) {
Rectangle *struct_rectangle = DATA_GET_PTR(mrb, self, &mrb_Rectangle_struct, Rectangle);
return mrb_float_value(mrb, struct_rectangle->width);

}
      
static mrb_value
mrb_Rectangle_set_width(mrb_state* mrb, mrb_value self) {
float parameter_width;

mrb_get_args(mrb, "f", &parameter_width);
Rectangle *struct_rectangle = DATA_GET_PTR(mrb, self, &mrb_Rectangle_struct, Rectangle);
struct_rectangle->width = parameter_width;
return mrb_float_value(mrb, parameter_width);

}
      
static mrb_value
mrb_Rectangle_get_x(mrb_state* mrb, mrb_value self) {
Rectangle *struct_rectangle = DATA_GET_PTR(mrb, self, &mrb_Rectangle_struct, Rectangle);
return mrb_float_value(mrb, struct_rectangle->x);

}
      
static mrb_value
mrb_Rectangle_set_x(mrb_state* mrb, mrb_value self) {
float parameter_x;

mrb_get_args(mrb, "f", &parameter_x);
Rectangle *struct_rectangle = DATA_GET_PTR(mrb, self, &mrb_Rectangle_struct, Rectangle);
struct_rectangle->x = parameter_x;
return mrb_float_value(mrb, parameter_x);

}
      
static mrb_value
mrb_Rectangle_get_y(mrb_state* mrb, mrb_value self) {
Rectangle *struct_rectangle = DATA_GET_PTR(mrb, self, &mrb_Rectangle_struct, Rectangle);
return mrb_float_value(mrb, struct_rectangle->y);

}
      
static mrb_value
mrb_Rectangle_set_y(mrb_state* mrb, mrb_value self) {
float parameter_y;

mrb_get_args(mrb, "f", &parameter_y);
Rectangle *struct_rectangle = DATA_GET_PTR(mrb, self, &mrb_Rectangle_struct, Rectangle);
struct_rectangle->y = parameter_y;
return mrb_float_value(mrb, parameter_y);

}
      
static mrb_value
mrb_Rectangle_initialize(mrb_state* mrb, mrb_value self) {
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *rectangle_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Rectangle_struct.struct_name);
Rectangle *wrapped_value = (Rectangle *)mrb_malloc(mrb, sizeof(Rectangle));
uint32_t kw_num = 4;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "height"),
mrb_intern_lit(mrb, "width"),
mrb_intern_lit(mrb, "x"),
mrb_intern_lit(mrb, "y")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->height = mrb_as_float(mrb, kw_values[0]);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->width = mrb_as_float(mrb, kw_values[1]);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->x = mrb_as_float(mrb, kw_values[2]);

}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->y = mrb_as_float(mrb, kw_values[3]);

}
        mrb_data_init(self, wrapped_value, &mrb_Rectangle_struct);
return self;
}
      
      

        static const struct mrb_data_type mrb_Shader_struct = { 
        "Shader", 
          mrb_free
        };
        
      
static mrb_value
mrb_Shader_get_id(mrb_state* mrb, mrb_value self) {
Shader *struct_shader = DATA_GET_PTR(mrb, self, &mrb_Shader_struct, Shader);
return mrb_fixnum_value(struct_shader->id);

}
      
static mrb_value
mrb_Shader_set_id(mrb_state* mrb, mrb_value self) {
int parameter_id;

mrb_get_args(mrb, "i", &parameter_id);
Shader *struct_shader = DATA_GET_PTR(mrb, self, &mrb_Shader_struct, Shader);
struct_shader->id = parameter_id;
return mrb_fixnum_value(parameter_id);

}
      
static mrb_value
mrb_Shader_initialize(mrb_state* mrb, mrb_value self) {
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *shader_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Shader_struct.struct_name);
Shader *wrapped_value = (Shader *)mrb_malloc(mrb, sizeof(Shader));
uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "id"),
mrb_intern_lit(mrb, "locs")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->id = mrb_as_int(mrb, kw_values[0]);

}
        mrb_data_init(self, wrapped_value, &mrb_Shader_struct);
return self;
}
      
      

        static const struct mrb_data_type mrb_VrStereoConfig_struct = { 
        "VrStereoConfig", 
          mrb_free
        };
        
      
static mrb_value
mrb_VrStereoConfig_initialize(mrb_state* mrb, mrb_value self) {
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *vrstereoconfig_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_VrStereoConfig_struct.struct_name);
VrStereoConfig *wrapped_value = (VrStereoConfig *)mrb_malloc(mrb, sizeof(VrStereoConfig));
uint32_t kw_num = 8;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "leftLensCenter"),
mrb_intern_lit(mrb, "leftScreenCenter"),
mrb_intern_lit(mrb, "projection"),
mrb_intern_lit(mrb, "rightLensCenter"),
mrb_intern_lit(mrb, "rightScreenCenter"),
mrb_intern_lit(mrb, "scale"),
mrb_intern_lit(mrb, "scaleIn"),
mrb_intern_lit(mrb, "viewOffset")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        mrb_data_init(self, wrapped_value, &mrb_VrStereoConfig_struct);
return self;
}
      
      

        static const struct mrb_data_type mrb_Matrix_struct = { 
        "Matrix", 
          mrb_free
        };
        
      
static mrb_value
mrb_Matrix_get_m0(mrb_state* mrb, mrb_value self) {
Matrix *struct_matrix = DATA_GET_PTR(mrb, self, &mrb_Matrix_struct, Matrix);
return mrb_float_value(mrb, struct_matrix->m0);

}
      
static mrb_value
mrb_Matrix_set_m0(mrb_state* mrb, mrb_value self) {
float parameter_m0;

mrb_get_args(mrb, "f", &parameter_m0);
Matrix *struct_matrix = DATA_GET_PTR(mrb, self, &mrb_Matrix_struct, Matrix);
struct_matrix->m0 = parameter_m0;
return mrb_float_value(mrb, parameter_m0);

}
      
static mrb_value
mrb_Matrix_get_m1(mrb_state* mrb, mrb_value self) {
Matrix *struct_matrix = DATA_GET_PTR(mrb, self, &mrb_Matrix_struct, Matrix);
return mrb_float_value(mrb, struct_matrix->m1);

}
      
static mrb_value
mrb_Matrix_set_m1(mrb_state* mrb, mrb_value self) {
float parameter_m1;

mrb_get_args(mrb, "f", &parameter_m1);
Matrix *struct_matrix = DATA_GET_PTR(mrb, self, &mrb_Matrix_struct, Matrix);
struct_matrix->m1 = parameter_m1;
return mrb_float_value(mrb, parameter_m1);

}
      
static mrb_value
mrb_Matrix_get_m10(mrb_state* mrb, mrb_value self) {
Matrix *struct_matrix = DATA_GET_PTR(mrb, self, &mrb_Matrix_struct, Matrix);
return mrb_float_value(mrb, struct_matrix->m10);

}
      
static mrb_value
mrb_Matrix_set_m10(mrb_state* mrb, mrb_value self) {
float parameter_m10;

mrb_get_args(mrb, "f", &parameter_m10);
Matrix *struct_matrix = DATA_GET_PTR(mrb, self, &mrb_Matrix_struct, Matrix);
struct_matrix->m10 = parameter_m10;
return mrb_float_value(mrb, parameter_m10);

}
      
static mrb_value
mrb_Matrix_get_m11(mrb_state* mrb, mrb_value self) {
Matrix *struct_matrix = DATA_GET_PTR(mrb, self, &mrb_Matrix_struct, Matrix);
return mrb_float_value(mrb, struct_matrix->m11);

}
      
static mrb_value
mrb_Matrix_set_m11(mrb_state* mrb, mrb_value self) {
float parameter_m11;

mrb_get_args(mrb, "f", &parameter_m11);
Matrix *struct_matrix = DATA_GET_PTR(mrb, self, &mrb_Matrix_struct, Matrix);
struct_matrix->m11 = parameter_m11;
return mrb_float_value(mrb, parameter_m11);

}
      
static mrb_value
mrb_Matrix_get_m12(mrb_state* mrb, mrb_value self) {
Matrix *struct_matrix = DATA_GET_PTR(mrb, self, &mrb_Matrix_struct, Matrix);
return mrb_float_value(mrb, struct_matrix->m12);

}
      
static mrb_value
mrb_Matrix_set_m12(mrb_state* mrb, mrb_value self) {
float parameter_m12;

mrb_get_args(mrb, "f", &parameter_m12);
Matrix *struct_matrix = DATA_GET_PTR(mrb, self, &mrb_Matrix_struct, Matrix);
struct_matrix->m12 = parameter_m12;
return mrb_float_value(mrb, parameter_m12);

}
      
static mrb_value
mrb_Matrix_get_m13(mrb_state* mrb, mrb_value self) {
Matrix *struct_matrix = DATA_GET_PTR(mrb, self, &mrb_Matrix_struct, Matrix);
return mrb_float_value(mrb, struct_matrix->m13);

}
      
static mrb_value
mrb_Matrix_set_m13(mrb_state* mrb, mrb_value self) {
float parameter_m13;

mrb_get_args(mrb, "f", &parameter_m13);
Matrix *struct_matrix = DATA_GET_PTR(mrb, self, &mrb_Matrix_struct, Matrix);
struct_matrix->m13 = parameter_m13;
return mrb_float_value(mrb, parameter_m13);

}
      
static mrb_value
mrb_Matrix_get_m14(mrb_state* mrb, mrb_value self) {
Matrix *struct_matrix = DATA_GET_PTR(mrb, self, &mrb_Matrix_struct, Matrix);
return mrb_float_value(mrb, struct_matrix->m14);

}
      
static mrb_value
mrb_Matrix_set_m14(mrb_state* mrb, mrb_value self) {
float parameter_m14;

mrb_get_args(mrb, "f", &parameter_m14);
Matrix *struct_matrix = DATA_GET_PTR(mrb, self, &mrb_Matrix_struct, Matrix);
struct_matrix->m14 = parameter_m14;
return mrb_float_value(mrb, parameter_m14);

}
      
static mrb_value
mrb_Matrix_get_m15(mrb_state* mrb, mrb_value self) {
Matrix *struct_matrix = DATA_GET_PTR(mrb, self, &mrb_Matrix_struct, Matrix);
return mrb_float_value(mrb, struct_matrix->m15);

}
      
static mrb_value
mrb_Matrix_set_m15(mrb_state* mrb, mrb_value self) {
float parameter_m15;

mrb_get_args(mrb, "f", &parameter_m15);
Matrix *struct_matrix = DATA_GET_PTR(mrb, self, &mrb_Matrix_struct, Matrix);
struct_matrix->m15 = parameter_m15;
return mrb_float_value(mrb, parameter_m15);

}
      
static mrb_value
mrb_Matrix_get_m2(mrb_state* mrb, mrb_value self) {
Matrix *struct_matrix = DATA_GET_PTR(mrb, self, &mrb_Matrix_struct, Matrix);
return mrb_float_value(mrb, struct_matrix->m2);

}
      
static mrb_value
mrb_Matrix_set_m2(mrb_state* mrb, mrb_value self) {
float parameter_m2;

mrb_get_args(mrb, "f", &parameter_m2);
Matrix *struct_matrix = DATA_GET_PTR(mrb, self, &mrb_Matrix_struct, Matrix);
struct_matrix->m2 = parameter_m2;
return mrb_float_value(mrb, parameter_m2);

}
      
static mrb_value
mrb_Matrix_get_m3(mrb_state* mrb, mrb_value self) {
Matrix *struct_matrix = DATA_GET_PTR(mrb, self, &mrb_Matrix_struct, Matrix);
return mrb_float_value(mrb, struct_matrix->m3);

}
      
static mrb_value
mrb_Matrix_set_m3(mrb_state* mrb, mrb_value self) {
float parameter_m3;

mrb_get_args(mrb, "f", &parameter_m3);
Matrix *struct_matrix = DATA_GET_PTR(mrb, self, &mrb_Matrix_struct, Matrix);
struct_matrix->m3 = parameter_m3;
return mrb_float_value(mrb, parameter_m3);

}
      
static mrb_value
mrb_Matrix_get_m4(mrb_state* mrb, mrb_value self) {
Matrix *struct_matrix = DATA_GET_PTR(mrb, self, &mrb_Matrix_struct, Matrix);
return mrb_float_value(mrb, struct_matrix->m4);

}
      
static mrb_value
mrb_Matrix_set_m4(mrb_state* mrb, mrb_value self) {
float parameter_m4;

mrb_get_args(mrb, "f", &parameter_m4);
Matrix *struct_matrix = DATA_GET_PTR(mrb, self, &mrb_Matrix_struct, Matrix);
struct_matrix->m4 = parameter_m4;
return mrb_float_value(mrb, parameter_m4);

}
      
static mrb_value
mrb_Matrix_get_m5(mrb_state* mrb, mrb_value self) {
Matrix *struct_matrix = DATA_GET_PTR(mrb, self, &mrb_Matrix_struct, Matrix);
return mrb_float_value(mrb, struct_matrix->m5);

}
      
static mrb_value
mrb_Matrix_set_m5(mrb_state* mrb, mrb_value self) {
float parameter_m5;

mrb_get_args(mrb, "f", &parameter_m5);
Matrix *struct_matrix = DATA_GET_PTR(mrb, self, &mrb_Matrix_struct, Matrix);
struct_matrix->m5 = parameter_m5;
return mrb_float_value(mrb, parameter_m5);

}
      
static mrb_value
mrb_Matrix_get_m6(mrb_state* mrb, mrb_value self) {
Matrix *struct_matrix = DATA_GET_PTR(mrb, self, &mrb_Matrix_struct, Matrix);
return mrb_float_value(mrb, struct_matrix->m6);

}
      
static mrb_value
mrb_Matrix_set_m6(mrb_state* mrb, mrb_value self) {
float parameter_m6;

mrb_get_args(mrb, "f", &parameter_m6);
Matrix *struct_matrix = DATA_GET_PTR(mrb, self, &mrb_Matrix_struct, Matrix);
struct_matrix->m6 = parameter_m6;
return mrb_float_value(mrb, parameter_m6);

}
      
static mrb_value
mrb_Matrix_get_m7(mrb_state* mrb, mrb_value self) {
Matrix *struct_matrix = DATA_GET_PTR(mrb, self, &mrb_Matrix_struct, Matrix);
return mrb_float_value(mrb, struct_matrix->m7);

}
      
static mrb_value
mrb_Matrix_set_m7(mrb_state* mrb, mrb_value self) {
float parameter_m7;

mrb_get_args(mrb, "f", &parameter_m7);
Matrix *struct_matrix = DATA_GET_PTR(mrb, self, &mrb_Matrix_struct, Matrix);
struct_matrix->m7 = parameter_m7;
return mrb_float_value(mrb, parameter_m7);

}
      
static mrb_value
mrb_Matrix_get_m8(mrb_state* mrb, mrb_value self) {
Matrix *struct_matrix = DATA_GET_PTR(mrb, self, &mrb_Matrix_struct, Matrix);
return mrb_float_value(mrb, struct_matrix->m8);

}
      
static mrb_value
mrb_Matrix_set_m8(mrb_state* mrb, mrb_value self) {
float parameter_m8;

mrb_get_args(mrb, "f", &parameter_m8);
Matrix *struct_matrix = DATA_GET_PTR(mrb, self, &mrb_Matrix_struct, Matrix);
struct_matrix->m8 = parameter_m8;
return mrb_float_value(mrb, parameter_m8);

}
      
static mrb_value
mrb_Matrix_get_m9(mrb_state* mrb, mrb_value self) {
Matrix *struct_matrix = DATA_GET_PTR(mrb, self, &mrb_Matrix_struct, Matrix);
return mrb_float_value(mrb, struct_matrix->m9);

}
      
static mrb_value
mrb_Matrix_set_m9(mrb_state* mrb, mrb_value self) {
float parameter_m9;

mrb_get_args(mrb, "f", &parameter_m9);
Matrix *struct_matrix = DATA_GET_PTR(mrb, self, &mrb_Matrix_struct, Matrix);
struct_matrix->m9 = parameter_m9;
return mrb_float_value(mrb, parameter_m9);

}
      
static mrb_value
mrb_Matrix_initialize(mrb_state* mrb, mrb_value self) {
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *matrix_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Matrix_struct.struct_name);
Matrix *wrapped_value = (Matrix *)mrb_malloc(mrb, sizeof(Matrix));
uint32_t kw_num = 16;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "m0"),
mrb_intern_lit(mrb, "m1"),
mrb_intern_lit(mrb, "m10"),
mrb_intern_lit(mrb, "m11"),
mrb_intern_lit(mrb, "m12"),
mrb_intern_lit(mrb, "m13"),
mrb_intern_lit(mrb, "m14"),
mrb_intern_lit(mrb, "m15"),
mrb_intern_lit(mrb, "m2"),
mrb_intern_lit(mrb, "m3"),
mrb_intern_lit(mrb, "m4"),
mrb_intern_lit(mrb, "m5"),
mrb_intern_lit(mrb, "m6"),
mrb_intern_lit(mrb, "m7"),
mrb_intern_lit(mrb, "m8"),
mrb_intern_lit(mrb, "m9")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->m0 = mrb_as_float(mrb, kw_values[0]);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->m1 = mrb_as_float(mrb, kw_values[1]);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->m10 = mrb_as_float(mrb, kw_values[2]);

}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->m11 = mrb_as_float(mrb, kw_values[3]);

}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->m12 = mrb_as_float(mrb, kw_values[4]);

}
        
if (mrb_undef_p(kw_values[5])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->m13 = mrb_as_float(mrb, kw_values[5]);

}
        
if (mrb_undef_p(kw_values[6])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->m14 = mrb_as_float(mrb, kw_values[6]);

}
        
if (mrb_undef_p(kw_values[7])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->m15 = mrb_as_float(mrb, kw_values[7]);

}
        
if (mrb_undef_p(kw_values[8])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->m2 = mrb_as_float(mrb, kw_values[8]);

}
        
if (mrb_undef_p(kw_values[9])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->m3 = mrb_as_float(mrb, kw_values[9]);

}
        
if (mrb_undef_p(kw_values[10])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->m4 = mrb_as_float(mrb, kw_values[10]);

}
        
if (mrb_undef_p(kw_values[11])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->m5 = mrb_as_float(mrb, kw_values[11]);

}
        
if (mrb_undef_p(kw_values[12])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->m6 = mrb_as_float(mrb, kw_values[12]);

}
        
if (mrb_undef_p(kw_values[13])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->m7 = mrb_as_float(mrb, kw_values[13]);

}
        
if (mrb_undef_p(kw_values[14])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->m8 = mrb_as_float(mrb, kw_values[14]);

}
        
if (mrb_undef_p(kw_values[15])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->m9 = mrb_as_float(mrb, kw_values[15]);

}
        mrb_data_init(self, wrapped_value, &mrb_Matrix_struct);
return self;
}
      
      

        static const struct mrb_data_type mrb_Material_struct = { 
        "Material", 
          mrb_free
        };
        
      
static mrb_value
mrb_Material_initialize(mrb_state* mrb, mrb_value self) {
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *material_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Material_struct.struct_name);
Material *wrapped_value = (Material *)mrb_malloc(mrb, sizeof(Material));
uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "maps"),
mrb_intern_lit(mrb, "params"),
mrb_intern_lit(mrb, "shader")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        mrb_data_init(self, wrapped_value, &mrb_Material_struct);
return self;
}
      
      

        static const struct mrb_data_type mrb_BoundingBox_struct = { 
        "BoundingBox", 
          mrb_free
        };
        
      
static mrb_value
mrb_BoundingBox_initialize(mrb_state* mrb, mrb_value self) {
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *boundingbox_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_BoundingBox_struct.struct_name);
BoundingBox *wrapped_value = (BoundingBox *)mrb_malloc(mrb, sizeof(BoundingBox));
uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "max"),
mrb_intern_lit(mrb, "min")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        mrb_data_init(self, wrapped_value, &mrb_BoundingBox_struct);
return self;
}
      
      

        static const struct mrb_data_type mrb_BoneInfo_struct = { 
        "BoneInfo", 
          mrb_free
        };
        
      
static mrb_value
mrb_BoneInfo_get_parent(mrb_state* mrb, mrb_value self) {
BoneInfo *struct_boneinfo = DATA_GET_PTR(mrb, self, &mrb_BoneInfo_struct, BoneInfo);
return mrb_fixnum_value(struct_boneinfo->parent);

}
      
static mrb_value
mrb_BoneInfo_set_parent(mrb_state* mrb, mrb_value self) {
int parameter_parent;

mrb_get_args(mrb, "i", &parameter_parent);
BoneInfo *struct_boneinfo = DATA_GET_PTR(mrb, self, &mrb_BoneInfo_struct, BoneInfo);
struct_boneinfo->parent = parameter_parent;
return mrb_fixnum_value(parameter_parent);

}
      
static mrb_value
mrb_BoneInfo_initialize(mrb_state* mrb, mrb_value self) {
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *boneinfo_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_BoneInfo_struct.struct_name);
BoneInfo *wrapped_value = (BoneInfo *)mrb_malloc(mrb, sizeof(BoneInfo));
uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "name"),
mrb_intern_lit(mrb, "parent")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->parent = mrb_as_int(mrb, kw_values[1]);

}
        mrb_data_init(self, wrapped_value, &mrb_BoneInfo_struct);
return self;
}
      
      

        static const struct mrb_data_type mrb_Camera2D_struct = { 
        "Camera2D", 
          mrb_free
        };
        
      
static mrb_value
mrb_Camera2D_get_rotation(mrb_state* mrb, mrb_value self) {
Camera2D *struct_camera2d = DATA_GET_PTR(mrb, self, &mrb_Camera2D_struct, Camera2D);
return mrb_float_value(mrb, struct_camera2d->rotation);

}
      
static mrb_value
mrb_Camera2D_set_rotation(mrb_state* mrb, mrb_value self) {
float parameter_rotation;

mrb_get_args(mrb, "f", &parameter_rotation);
Camera2D *struct_camera2d = DATA_GET_PTR(mrb, self, &mrb_Camera2D_struct, Camera2D);
struct_camera2d->rotation = parameter_rotation;
return mrb_float_value(mrb, parameter_rotation);

}
      
static mrb_value
mrb_Camera2D_get_zoom(mrb_state* mrb, mrb_value self) {
Camera2D *struct_camera2d = DATA_GET_PTR(mrb, self, &mrb_Camera2D_struct, Camera2D);
return mrb_float_value(mrb, struct_camera2d->zoom);

}
      
static mrb_value
mrb_Camera2D_set_zoom(mrb_state* mrb, mrb_value self) {
float parameter_zoom;

mrb_get_args(mrb, "f", &parameter_zoom);
Camera2D *struct_camera2d = DATA_GET_PTR(mrb, self, &mrb_Camera2D_struct, Camera2D);
struct_camera2d->zoom = parameter_zoom;
return mrb_float_value(mrb, parameter_zoom);

}
      
static mrb_value
mrb_Camera2D_initialize(mrb_state* mrb, mrb_value self) {
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *camera2d_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Camera2D_struct.struct_name);
Camera2D *wrapped_value = (Camera2D *)mrb_malloc(mrb, sizeof(Camera2D));
uint32_t kw_num = 4;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "offset"),
mrb_intern_lit(mrb, "rotation"),
mrb_intern_lit(mrb, "target"),
mrb_intern_lit(mrb, "zoom")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->rotation = mrb_as_float(mrb, kw_values[1]);

}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->zoom = mrb_as_float(mrb, kw_values[3]);

}
        mrb_data_init(self, wrapped_value, &mrb_Camera2D_struct);
return self;
}
      
      

        static const struct mrb_data_type mrb_Transform_struct = { 
        "Transform", 
          mrb_free
        };
        
      
static mrb_value
mrb_Transform_initialize(mrb_state* mrb, mrb_value self) {
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *transform_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Transform_struct.struct_name);
Transform *wrapped_value = (Transform *)mrb_malloc(mrb, sizeof(Transform));
uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "rotation"),
mrb_intern_lit(mrb, "scale"),
mrb_intern_lit(mrb, "translation")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        mrb_data_init(self, wrapped_value, &mrb_Transform_struct);
return self;
}
      
      

        static const struct mrb_data_type mrb_Vector4_struct = { 
        "Vector4", 
          mrb_free
        };
        
      
static mrb_value
mrb_Vector4_get_w(mrb_state* mrb, mrb_value self) {
Vector4 *struct_vector4 = DATA_GET_PTR(mrb, self, &mrb_Vector4_struct, Vector4);
return mrb_float_value(mrb, struct_vector4->w);

}
      
static mrb_value
mrb_Vector4_set_w(mrb_state* mrb, mrb_value self) {
float parameter_w;

mrb_get_args(mrb, "f", &parameter_w);
Vector4 *struct_vector4 = DATA_GET_PTR(mrb, self, &mrb_Vector4_struct, Vector4);
struct_vector4->w = parameter_w;
return mrb_float_value(mrb, parameter_w);

}
      
static mrb_value
mrb_Vector4_get_x(mrb_state* mrb, mrb_value self) {
Vector4 *struct_vector4 = DATA_GET_PTR(mrb, self, &mrb_Vector4_struct, Vector4);
return mrb_float_value(mrb, struct_vector4->x);

}
      
static mrb_value
mrb_Vector4_set_x(mrb_state* mrb, mrb_value self) {
float parameter_x;

mrb_get_args(mrb, "f", &parameter_x);
Vector4 *struct_vector4 = DATA_GET_PTR(mrb, self, &mrb_Vector4_struct, Vector4);
struct_vector4->x = parameter_x;
return mrb_float_value(mrb, parameter_x);

}
      
static mrb_value
mrb_Vector4_get_y(mrb_state* mrb, mrb_value self) {
Vector4 *struct_vector4 = DATA_GET_PTR(mrb, self, &mrb_Vector4_struct, Vector4);
return mrb_float_value(mrb, struct_vector4->y);

}
      
static mrb_value
mrb_Vector4_set_y(mrb_state* mrb, mrb_value self) {
float parameter_y;

mrb_get_args(mrb, "f", &parameter_y);
Vector4 *struct_vector4 = DATA_GET_PTR(mrb, self, &mrb_Vector4_struct, Vector4);
struct_vector4->y = parameter_y;
return mrb_float_value(mrb, parameter_y);

}
      
static mrb_value
mrb_Vector4_get_z(mrb_state* mrb, mrb_value self) {
Vector4 *struct_vector4 = DATA_GET_PTR(mrb, self, &mrb_Vector4_struct, Vector4);
return mrb_float_value(mrb, struct_vector4->z);

}
      
static mrb_value
mrb_Vector4_set_z(mrb_state* mrb, mrb_value self) {
float parameter_z;

mrb_get_args(mrb, "f", &parameter_z);
Vector4 *struct_vector4 = DATA_GET_PTR(mrb, self, &mrb_Vector4_struct, Vector4);
struct_vector4->z = parameter_z;
return mrb_float_value(mrb, parameter_z);

}
      
static mrb_value
mrb_Vector4_initialize(mrb_state* mrb, mrb_value self) {
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *vector4_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Vector4_struct.struct_name);
Vector4 *wrapped_value = (Vector4 *)mrb_malloc(mrb, sizeof(Vector4));
uint32_t kw_num = 4;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "w"),
mrb_intern_lit(mrb, "x"),
mrb_intern_lit(mrb, "y"),
mrb_intern_lit(mrb, "z")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->w = mrb_as_float(mrb, kw_values[0]);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->x = mrb_as_float(mrb, kw_values[1]);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->y = mrb_as_float(mrb, kw_values[2]);

}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->z = mrb_as_float(mrb, kw_values[3]);

}
        mrb_data_init(self, wrapped_value, &mrb_Vector4_struct);
return self;
}
      
      

        static const struct mrb_data_type mrb_Vector2_struct = { 
        "Vector2", 
          mrb_free
        };
        
      
static mrb_value
mrb_Vector2_get_x(mrb_state* mrb, mrb_value self) {
Vector2 *struct_vector2 = DATA_GET_PTR(mrb, self, &mrb_Vector2_struct, Vector2);
return mrb_float_value(mrb, struct_vector2->x);

}
      
static mrb_value
mrb_Vector2_set_x(mrb_state* mrb, mrb_value self) {
float parameter_x;

mrb_get_args(mrb, "f", &parameter_x);
Vector2 *struct_vector2 = DATA_GET_PTR(mrb, self, &mrb_Vector2_struct, Vector2);
struct_vector2->x = parameter_x;
return mrb_float_value(mrb, parameter_x);

}
      
static mrb_value
mrb_Vector2_get_y(mrb_state* mrb, mrb_value self) {
Vector2 *struct_vector2 = DATA_GET_PTR(mrb, self, &mrb_Vector2_struct, Vector2);
return mrb_float_value(mrb, struct_vector2->y);

}
      
static mrb_value
mrb_Vector2_set_y(mrb_state* mrb, mrb_value self) {
float parameter_y;

mrb_get_args(mrb, "f", &parameter_y);
Vector2 *struct_vector2 = DATA_GET_PTR(mrb, self, &mrb_Vector2_struct, Vector2);
struct_vector2->y = parameter_y;
return mrb_float_value(mrb, parameter_y);

}
      
static mrb_value
mrb_Vector2_initialize(mrb_state* mrb, mrb_value self) {
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *vector2_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Vector2_struct.struct_name);
Vector2 *wrapped_value = (Vector2 *)mrb_malloc(mrb, sizeof(Vector2));
uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "x"),
mrb_intern_lit(mrb, "y")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->x = mrb_as_float(mrb, kw_values[0]);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->y = mrb_as_float(mrb, kw_values[1]);

}
        mrb_data_init(self, wrapped_value, &mrb_Vector2_struct);
return self;
}
      
      

        static const struct mrb_data_type mrb_Vector3_struct = { 
        "Vector3", 
          mrb_free
        };
        
      
static mrb_value
mrb_Vector3_get_x(mrb_state* mrb, mrb_value self) {
Vector3 *struct_vector3 = DATA_GET_PTR(mrb, self, &mrb_Vector3_struct, Vector3);
return mrb_float_value(mrb, struct_vector3->x);

}
      
static mrb_value
mrb_Vector3_set_x(mrb_state* mrb, mrb_value self) {
float parameter_x;

mrb_get_args(mrb, "f", &parameter_x);
Vector3 *struct_vector3 = DATA_GET_PTR(mrb, self, &mrb_Vector3_struct, Vector3);
struct_vector3->x = parameter_x;
return mrb_float_value(mrb, parameter_x);

}
      
static mrb_value
mrb_Vector3_get_y(mrb_state* mrb, mrb_value self) {
Vector3 *struct_vector3 = DATA_GET_PTR(mrb, self, &mrb_Vector3_struct, Vector3);
return mrb_float_value(mrb, struct_vector3->y);

}
      
static mrb_value
mrb_Vector3_set_y(mrb_state* mrb, mrb_value self) {
float parameter_y;

mrb_get_args(mrb, "f", &parameter_y);
Vector3 *struct_vector3 = DATA_GET_PTR(mrb, self, &mrb_Vector3_struct, Vector3);
struct_vector3->y = parameter_y;
return mrb_float_value(mrb, parameter_y);

}
      
static mrb_value
mrb_Vector3_get_z(mrb_state* mrb, mrb_value self) {
Vector3 *struct_vector3 = DATA_GET_PTR(mrb, self, &mrb_Vector3_struct, Vector3);
return mrb_float_value(mrb, struct_vector3->z);

}
      
static mrb_value
mrb_Vector3_set_z(mrb_state* mrb, mrb_value self) {
float parameter_z;

mrb_get_args(mrb, "f", &parameter_z);
Vector3 *struct_vector3 = DATA_GET_PTR(mrb, self, &mrb_Vector3_struct, Vector3);
struct_vector3->z = parameter_z;
return mrb_float_value(mrb, parameter_z);

}
      
static mrb_value
mrb_Vector3_initialize(mrb_state* mrb, mrb_value self) {
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *vector3_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Vector3_struct.struct_name);
Vector3 *wrapped_value = (Vector3 *)mrb_malloc(mrb, sizeof(Vector3));
uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "x"),
mrb_intern_lit(mrb, "y"),
mrb_intern_lit(mrb, "z")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->x = mrb_as_float(mrb, kw_values[0]);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->y = mrb_as_float(mrb, kw_values[1]);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
wrapped_value->z = mrb_as_float(mrb, kw_values[2]);

}
        mrb_data_init(self, wrapped_value, &mrb_Vector3_struct);
return self;
}
      
//void BeginBlendMode
static mrb_value
mrb_BeginBlendMode(mrb_state* mrb, mrb_value self) {
mrb_int parameter_mode;

mrb_get_args(mrb, "i", &parameter_mode);

BeginBlendMode(parameter_mode);
return mrb_nil_value();
}
      
//void BeginDrawing
static mrb_value
mrb_BeginDrawing(mrb_state* mrb, mrb_value self) {

BeginDrawing();
return mrb_nil_value();
}
      
//void BeginMode2D
static mrb_value
mrb_BeginMode2D(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_camera;

mrb_get_args(mrb, "o", &parameter_mrb_camera);
Camera2D *parameter_camera;
parameter_camera = DATA_GET_PTR(mrb, parameter_mrb_camera, &mrb_Camera2D_struct, Camera2D);

BeginMode2D(*parameter_camera);
return mrb_nil_value();
}
      
//void BeginMode3D
static mrb_value
mrb_BeginMode3D(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_camera;

mrb_get_args(mrb, "o", &parameter_mrb_camera);
Camera3D *parameter_camera;
parameter_camera = DATA_GET_PTR(mrb, parameter_mrb_camera, &mrb_Camera3D_struct, Camera3D);

BeginMode3D(*parameter_camera);
return mrb_nil_value();
}
      
//void BeginScissorMode
static mrb_value
mrb_BeginScissorMode(mrb_state* mrb, mrb_value self) {
int parameter_x;
int parameter_y;
int parameter_width;
int parameter_height;

uint32_t kw_num = 4;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "x"),
mrb_intern_lit(mrb, "y"),
mrb_intern_lit(mrb, "width"),
mrb_intern_lit(mrb, "height")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_x = mrb_as_int(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_y = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_width = mrb_as_int(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_height = mrb_as_int(mrb, kw_values[3]);
}
        

BeginScissorMode(parameter_x, parameter_y, parameter_width, parameter_height);
return mrb_nil_value();
}
      
//void BeginShaderMode
static mrb_value
mrb_BeginShaderMode(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_shader;

mrb_get_args(mrb, "o", &parameter_mrb_shader);
Shader *parameter_shader;
parameter_shader = DATA_GET_PTR(mrb, parameter_mrb_shader, &mrb_Shader_struct, Shader);

BeginShaderMode(*parameter_shader);
return mrb_nil_value();
}
      
//void BeginTextureMode
static mrb_value
mrb_BeginTextureMode(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_target;

mrb_get_args(mrb, "o", &parameter_mrb_target);
RenderTexture *parameter_target;
parameter_target = DATA_GET_PTR(mrb, parameter_mrb_target, &mrb_RenderTexture_struct, RenderTexture);

BeginTextureMode(*parameter_target);
return mrb_nil_value();
}
      
//void BeginVrStereoMode
static mrb_value
mrb_BeginVrStereoMode(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_config;

mrb_get_args(mrb, "o", &parameter_mrb_config);
VrStereoConfig *parameter_config;
parameter_config = DATA_GET_PTR(mrb, parameter_mrb_config, &mrb_VrStereoConfig_struct, VrStereoConfig);

BeginVrStereoMode(*parameter_config);
return mrb_nil_value();
}
      
//bool ChangeDirectory
static mrb_value
mrb_ChangeDirectory(mrb_state* mrb, mrb_value self) {
char * parameter_dir;

mrb_get_args(mrb, "z", &parameter_dir);
bool return_of_ChangeDirectory;

return_of_ChangeDirectory = ChangeDirectory(parameter_dir);
return mrb_bool_value(return_of_ChangeDirectory);
}
      
//bool CheckCollisionBoxSphere
static mrb_value
mrb_CheckCollisionBoxSphere(mrb_state* mrb, mrb_value self) {
BoundingBox *parameter_box;
Vector3 *parameter_center;
float parameter_radius;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "box"),
mrb_intern_lit(mrb, "center"),
mrb_intern_lit(mrb, "radius")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_box = DATA_GET_PTR(mrb, kw_values[0], &mrb_BoundingBox_struct, BoundingBox);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_center = DATA_GET_PTR(mrb, kw_values[1], &mrb_Vector3_struct, Vector3);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_radius = mrb_as_float(mrb, kw_values[2]);
}
        
bool return_of_CheckCollisionBoxSphere;

return_of_CheckCollisionBoxSphere = CheckCollisionBoxSphere(*parameter_box, *parameter_center, parameter_radius);
return mrb_bool_value(return_of_CheckCollisionBoxSphere);
}
      
//bool CheckCollisionBoxes
static mrb_value
mrb_CheckCollisionBoxes(mrb_state* mrb, mrb_value self) {
BoundingBox *parameter_box1;
BoundingBox *parameter_box2;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "box1"),
mrb_intern_lit(mrb, "box2")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_box1 = DATA_GET_PTR(mrb, kw_values[0], &mrb_BoundingBox_struct, BoundingBox);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_box2 = DATA_GET_PTR(mrb, kw_values[1], &mrb_BoundingBox_struct, BoundingBox);

}
        
bool return_of_CheckCollisionBoxes;

return_of_CheckCollisionBoxes = CheckCollisionBoxes(*parameter_box1, *parameter_box2);
return mrb_bool_value(return_of_CheckCollisionBoxes);
}
      
//bool CheckCollisionCircleRec
static mrb_value
mrb_CheckCollisionCircleRec(mrb_state* mrb, mrb_value self) {
Vector2 *parameter_center;
float parameter_radius;
Rectangle *parameter_rec;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "center"),
mrb_intern_lit(mrb, "radius"),
mrb_intern_lit(mrb, "rec")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_center = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_radius = mrb_as_float(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_rec = DATA_GET_PTR(mrb, kw_values[2], &mrb_Rectangle_struct, Rectangle);

}
        
bool return_of_CheckCollisionCircleRec;

return_of_CheckCollisionCircleRec = CheckCollisionCircleRec(*parameter_center, parameter_radius, *parameter_rec);
return mrb_bool_value(return_of_CheckCollisionCircleRec);
}
      
//bool CheckCollisionCircles
static mrb_value
mrb_CheckCollisionCircles(mrb_state* mrb, mrb_value self) {
Vector2 *parameter_center1;
float parameter_radius1;
Vector2 *parameter_center2;
float parameter_radius2;

uint32_t kw_num = 4;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "center1"),
mrb_intern_lit(mrb, "radius1"),
mrb_intern_lit(mrb, "center2"),
mrb_intern_lit(mrb, "radius2")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_center1 = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_radius1 = mrb_as_float(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_center2 = DATA_GET_PTR(mrb, kw_values[2], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_radius2 = mrb_as_float(mrb, kw_values[3]);
}
        
bool return_of_CheckCollisionCircles;

return_of_CheckCollisionCircles = CheckCollisionCircles(*parameter_center1, parameter_radius1, *parameter_center2, parameter_radius2);
return mrb_bool_value(return_of_CheckCollisionCircles);
}
      
//bool CheckCollisionLines
static mrb_value
mrb_CheckCollisionLines(mrb_state* mrb, mrb_value self) {
Vector2 *parameter_startPos1;
Vector2 *parameter_endPos1;
Vector2 *parameter_startPos2;
Vector2 *parameter_endPos2;
Vector2 *parameter_collisionPoint;

uint32_t kw_num = 5;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "startPos1"),
mrb_intern_lit(mrb, "endPos1"),
mrb_intern_lit(mrb, "startPos2"),
mrb_intern_lit(mrb, "endPos2"),
mrb_intern_lit(mrb, "collisionPoint")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_startPos1 = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_endPos1 = DATA_GET_PTR(mrb, kw_values[1], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_startPos2 = DATA_GET_PTR(mrb, kw_values[2], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_endPos2 = DATA_GET_PTR(mrb, kw_values[3], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_collisionPoint = DATA_GET_PTR(mrb, kw_values[4], &mrb_Vector2_struct, Vector2);

}
        
bool return_of_CheckCollisionLines;

return_of_CheckCollisionLines = CheckCollisionLines(*parameter_startPos1, *parameter_endPos1, *parameter_startPos2, *parameter_endPos2, parameter_collisionPoint);
return mrb_bool_value(return_of_CheckCollisionLines);
}
      
//bool CheckCollisionPointCircle
static mrb_value
mrb_CheckCollisionPointCircle(mrb_state* mrb, mrb_value self) {
Vector2 *parameter_point;
Vector2 *parameter_center;
float parameter_radius;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "point"),
mrb_intern_lit(mrb, "center"),
mrb_intern_lit(mrb, "radius")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_point = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_center = DATA_GET_PTR(mrb, kw_values[1], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_radius = mrb_as_float(mrb, kw_values[2]);
}
        
bool return_of_CheckCollisionPointCircle;

return_of_CheckCollisionPointCircle = CheckCollisionPointCircle(*parameter_point, *parameter_center, parameter_radius);
return mrb_bool_value(return_of_CheckCollisionPointCircle);
}
      
//bool CheckCollisionPointLine
static mrb_value
mrb_CheckCollisionPointLine(mrb_state* mrb, mrb_value self) {
Vector2 *parameter_point;
Vector2 *parameter_p1;
Vector2 *parameter_p2;
int parameter_threshold;

uint32_t kw_num = 4;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "point"),
mrb_intern_lit(mrb, "p1"),
mrb_intern_lit(mrb, "p2"),
mrb_intern_lit(mrb, "threshold")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_point = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_p1 = DATA_GET_PTR(mrb, kw_values[1], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_p2 = DATA_GET_PTR(mrb, kw_values[2], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_threshold = mrb_as_int(mrb, kw_values[3]);
}
        
bool return_of_CheckCollisionPointLine;

return_of_CheckCollisionPointLine = CheckCollisionPointLine(*parameter_point, *parameter_p1, *parameter_p2, parameter_threshold);
return mrb_bool_value(return_of_CheckCollisionPointLine);
}
      
//bool CheckCollisionPointRec
static mrb_value
mrb_CheckCollisionPointRec(mrb_state* mrb, mrb_value self) {
Vector2 *parameter_point;
Rectangle *parameter_rec;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "point"),
mrb_intern_lit(mrb, "rec")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_point = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_rec = DATA_GET_PTR(mrb, kw_values[1], &mrb_Rectangle_struct, Rectangle);

}
        
bool return_of_CheckCollisionPointRec;

return_of_CheckCollisionPointRec = CheckCollisionPointRec(*parameter_point, *parameter_rec);
return mrb_bool_value(return_of_CheckCollisionPointRec);
}
      
//bool CheckCollisionPointTriangle
static mrb_value
mrb_CheckCollisionPointTriangle(mrb_state* mrb, mrb_value self) {
Vector2 *parameter_point;
Vector2 *parameter_p1;
Vector2 *parameter_p2;
Vector2 *parameter_p3;

uint32_t kw_num = 4;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "point"),
mrb_intern_lit(mrb, "p1"),
mrb_intern_lit(mrb, "p2"),
mrb_intern_lit(mrb, "p3")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_point = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_p1 = DATA_GET_PTR(mrb, kw_values[1], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_p2 = DATA_GET_PTR(mrb, kw_values[2], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_p3 = DATA_GET_PTR(mrb, kw_values[3], &mrb_Vector2_struct, Vector2);

}
        
bool return_of_CheckCollisionPointTriangle;

return_of_CheckCollisionPointTriangle = CheckCollisionPointTriangle(*parameter_point, *parameter_p1, *parameter_p2, *parameter_p3);
return mrb_bool_value(return_of_CheckCollisionPointTriangle);
}
      
//bool CheckCollisionRecs
static mrb_value
mrb_CheckCollisionRecs(mrb_state* mrb, mrb_value self) {
Rectangle *parameter_rec1;
Rectangle *parameter_rec2;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "rec1"),
mrb_intern_lit(mrb, "rec2")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_rec1 = DATA_GET_PTR(mrb, kw_values[0], &mrb_Rectangle_struct, Rectangle);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_rec2 = DATA_GET_PTR(mrb, kw_values[1], &mrb_Rectangle_struct, Rectangle);

}
        
bool return_of_CheckCollisionRecs;

return_of_CheckCollisionRecs = CheckCollisionRecs(*parameter_rec1, *parameter_rec2);
return mrb_bool_value(return_of_CheckCollisionRecs);
}
      
//bool CheckCollisionSpheres
static mrb_value
mrb_CheckCollisionSpheres(mrb_state* mrb, mrb_value self) {
Vector3 *parameter_center1;
float parameter_radius1;
Vector3 *parameter_center2;
float parameter_radius2;

uint32_t kw_num = 4;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "center1"),
mrb_intern_lit(mrb, "radius1"),
mrb_intern_lit(mrb, "center2"),
mrb_intern_lit(mrb, "radius2")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_center1 = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector3_struct, Vector3);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_radius1 = mrb_as_float(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_center2 = DATA_GET_PTR(mrb, kw_values[2], &mrb_Vector3_struct, Vector3);

}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_radius2 = mrb_as_float(mrb, kw_values[3]);
}
        
bool return_of_CheckCollisionSpheres;

return_of_CheckCollisionSpheres = CheckCollisionSpheres(*parameter_center1, parameter_radius1, *parameter_center2, parameter_radius2);
return mrb_bool_value(return_of_CheckCollisionSpheres);
}
      
//void ClearBackground
static mrb_value
mrb_ClearBackground(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_color;

mrb_get_args(mrb, "o", &parameter_mrb_color);
Color *parameter_color;
parameter_color = DATA_GET_PTR(mrb, parameter_mrb_color, &mrb_Color_struct, Color);

ClearBackground(*parameter_color);
return mrb_nil_value();
}
      
//void ClearDirectoryFiles
static mrb_value
mrb_ClearDirectoryFiles(mrb_state* mrb, mrb_value self) {

ClearDirectoryFiles();
return mrb_nil_value();
}
      
//void ClearDroppedFiles
static mrb_value
mrb_ClearDroppedFiles(mrb_state* mrb, mrb_value self) {

ClearDroppedFiles();
return mrb_nil_value();
}
      
//void ClearWindowState
static mrb_value
mrb_ClearWindowState(mrb_state* mrb, mrb_value self) {
mrb_int parameter_flags;

mrb_get_args(mrb, "i", &parameter_flags);

ClearWindowState(parameter_flags);
return mrb_nil_value();
}
      
//void CloseAudioDevice
static mrb_value
mrb_CloseAudioDevice(mrb_state* mrb, mrb_value self) {

CloseAudioDevice();
return mrb_nil_value();
}
      
//void CloseWindow
static mrb_value
mrb_CloseWindow(mrb_state* mrb, mrb_value self) {

CloseWindow();
return mrb_nil_value();
}
      
//const char * CodepointToUTF8
static mrb_value
mrb_CodepointToUTF8(mrb_state* mrb, mrb_value self) {
int parameter_codepoint;
int parameter_byteSize;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "codepoint"),
mrb_intern_lit(mrb, "byteSize")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_codepoint = mrb_as_int(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_byteSize = mrb_as_int(mrb, kw_values[1]);
}
        
const char * return_of_CodepointToUTF8;

return_of_CodepointToUTF8 = CodepointToUTF8(parameter_codepoint, (int *)&parameter_byteSize);
return mrb_str_new_cstr(mrb, return_of_CodepointToUTF8);
}
      
//Color ColorAlpha
static mrb_value
mrb_ColorAlpha(mrb_state* mrb, mrb_value self) {
Color *parameter_color;
float parameter_alpha;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "color"),
mrb_intern_lit(mrb, "alpha")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[0], &mrb_Color_struct, Color);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_alpha = mrb_as_float(mrb, kw_values[1]);
}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *color_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Color_struct.struct_name);
Color *return_of_ColorAlpha = (Color *)mrb_malloc(mrb, sizeof(Color));

*return_of_ColorAlpha = ColorAlpha(*parameter_color, parameter_alpha);
return mrb_obj_value(Data_Wrap_Struct(mrb, color_mrb_class, &mrb_Color_struct, return_of_ColorAlpha));
}
      
//Color ColorAlphaBlend
static mrb_value
mrb_ColorAlphaBlend(mrb_state* mrb, mrb_value self) {
Color *parameter_dst;
Color *parameter_src;
Color *parameter_tint;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "dst"),
mrb_intern_lit(mrb, "src"),
mrb_intern_lit(mrb, "tint")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_dst = DATA_GET_PTR(mrb, kw_values[0], &mrb_Color_struct, Color);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_src = DATA_GET_PTR(mrb, kw_values[1], &mrb_Color_struct, Color);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_tint = DATA_GET_PTR(mrb, kw_values[2], &mrb_Color_struct, Color);

}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *color_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Color_struct.struct_name);
Color *return_of_ColorAlphaBlend = (Color *)mrb_malloc(mrb, sizeof(Color));

*return_of_ColorAlphaBlend = ColorAlphaBlend(*parameter_dst, *parameter_src, *parameter_tint);
return mrb_obj_value(Data_Wrap_Struct(mrb, color_mrb_class, &mrb_Color_struct, return_of_ColorAlphaBlend));
}
      
//Color ColorFromHSV
static mrb_value
mrb_ColorFromHSV(mrb_state* mrb, mrb_value self) {
float parameter_hue;
float parameter_saturation;
float parameter_value;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "hue"),
mrb_intern_lit(mrb, "saturation"),
mrb_intern_lit(mrb, "value")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_hue = mrb_as_float(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_saturation = mrb_as_float(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_value = mrb_as_float(mrb, kw_values[2]);
}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *color_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Color_struct.struct_name);
Color *return_of_ColorFromHSV = (Color *)mrb_malloc(mrb, sizeof(Color));

*return_of_ColorFromHSV = ColorFromHSV(parameter_hue, parameter_saturation, parameter_value);
return mrb_obj_value(Data_Wrap_Struct(mrb, color_mrb_class, &mrb_Color_struct, return_of_ColorFromHSV));
}
      
//Color ColorFromNormalized
static mrb_value
mrb_ColorFromNormalized(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_normalized;

mrb_get_args(mrb, "o", &parameter_mrb_normalized);
Vector4 *parameter_normalized;
parameter_normalized = DATA_GET_PTR(mrb, parameter_mrb_normalized, &mrb_Vector4_struct, Vector4);
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *color_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Color_struct.struct_name);
Color *return_of_ColorFromNormalized = (Color *)mrb_malloc(mrb, sizeof(Color));

*return_of_ColorFromNormalized = ColorFromNormalized(*parameter_normalized);
return mrb_obj_value(Data_Wrap_Struct(mrb, color_mrb_class, &mrb_Color_struct, return_of_ColorFromNormalized));
}
      
//Vector4 ColorNormalize
static mrb_value
mrb_ColorNormalize(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_color;

mrb_get_args(mrb, "o", &parameter_mrb_color);
Color *parameter_color;
parameter_color = DATA_GET_PTR(mrb, parameter_mrb_color, &mrb_Color_struct, Color);
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *vector4_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Vector4_struct.struct_name);
Vector4 *return_of_ColorNormalize = (Vector4 *)mrb_malloc(mrb, sizeof(Vector4));

*return_of_ColorNormalize = ColorNormalize(*parameter_color);
return mrb_obj_value(Data_Wrap_Struct(mrb, vector4_mrb_class, &mrb_Vector4_struct, return_of_ColorNormalize));
}
      
//Vector3 ColorToHSV
static mrb_value
mrb_ColorToHSV(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_color;

mrb_get_args(mrb, "o", &parameter_mrb_color);
Color *parameter_color;
parameter_color = DATA_GET_PTR(mrb, parameter_mrb_color, &mrb_Color_struct, Color);
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *vector3_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Vector3_struct.struct_name);
Vector3 *return_of_ColorToHSV = (Vector3 *)mrb_malloc(mrb, sizeof(Vector3));

*return_of_ColorToHSV = ColorToHSV(*parameter_color);
return mrb_obj_value(Data_Wrap_Struct(mrb, vector3_mrb_class, &mrb_Vector3_struct, return_of_ColorToHSV));
}
      
//int ColorToInt
static mrb_value
mrb_ColorToInt(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_color;

mrb_get_args(mrb, "o", &parameter_mrb_color);
Color *parameter_color;
parameter_color = DATA_GET_PTR(mrb, parameter_mrb_color, &mrb_Color_struct, Color);
int return_of_ColorToInt;

return_of_ColorToInt = ColorToInt(*parameter_color);
return mrb_fixnum_value(return_of_ColorToInt);
}
      
//bool DirectoryExists
static mrb_value
mrb_DirectoryExists(mrb_state* mrb, mrb_value self) {
char * parameter_dirPath;

mrb_get_args(mrb, "z", &parameter_dirPath);
bool return_of_DirectoryExists;

return_of_DirectoryExists = DirectoryExists(parameter_dirPath);
return mrb_bool_value(return_of_DirectoryExists);
}
      
//void DisableCursor
static mrb_value
mrb_DisableCursor(mrb_state* mrb, mrb_value self) {

DisableCursor();
return mrb_nil_value();
}
      
//void DrawBoundingBox
static mrb_value
mrb_DrawBoundingBox(mrb_state* mrb, mrb_value self) {
BoundingBox *parameter_box;
Color *parameter_color;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "box"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_box = DATA_GET_PTR(mrb, kw_values[0], &mrb_BoundingBox_struct, BoundingBox);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[1], &mrb_Color_struct, Color);

}
        

DrawBoundingBox(*parameter_box, *parameter_color);
return mrb_nil_value();
}
      
//void DrawCircle
static mrb_value
mrb_DrawCircle(mrb_state* mrb, mrb_value self) {
int parameter_centerX;
int parameter_centerY;
float parameter_radius;
Color *parameter_color;

uint32_t kw_num = 4;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "centerX"),
mrb_intern_lit(mrb, "centerY"),
mrb_intern_lit(mrb, "radius"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_centerX = mrb_as_int(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_centerY = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_radius = mrb_as_float(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[3], &mrb_Color_struct, Color);

}
        

DrawCircle(parameter_centerX, parameter_centerY, parameter_radius, *parameter_color);
return mrb_nil_value();
}
      
//void DrawCircle3D
static mrb_value
mrb_DrawCircle3D(mrb_state* mrb, mrb_value self) {
Vector3 *parameter_center;
float parameter_radius;
Vector3 *parameter_rotationAxis;
float parameter_rotationAngle;
Color *parameter_color;

uint32_t kw_num = 5;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "center"),
mrb_intern_lit(mrb, "radius"),
mrb_intern_lit(mrb, "rotationAxis"),
mrb_intern_lit(mrb, "rotationAngle"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_center = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector3_struct, Vector3);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_radius = mrb_as_float(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_rotationAxis = DATA_GET_PTR(mrb, kw_values[2], &mrb_Vector3_struct, Vector3);

}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_rotationAngle = mrb_as_float(mrb, kw_values[3]);
}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[4], &mrb_Color_struct, Color);

}
        

DrawCircle3D(*parameter_center, parameter_radius, *parameter_rotationAxis, parameter_rotationAngle, *parameter_color);
return mrb_nil_value();
}
      
//void DrawCircleGradient
static mrb_value
mrb_DrawCircleGradient(mrb_state* mrb, mrb_value self) {
int parameter_centerX;
int parameter_centerY;
float parameter_radius;
Color *parameter_color1;
Color *parameter_color2;

uint32_t kw_num = 5;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "centerX"),
mrb_intern_lit(mrb, "centerY"),
mrb_intern_lit(mrb, "radius"),
mrb_intern_lit(mrb, "color1"),
mrb_intern_lit(mrb, "color2")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_centerX = mrb_as_int(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_centerY = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_radius = mrb_as_float(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color1 = DATA_GET_PTR(mrb, kw_values[3], &mrb_Color_struct, Color);

}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color2 = DATA_GET_PTR(mrb, kw_values[4], &mrb_Color_struct, Color);

}
        

DrawCircleGradient(parameter_centerX, parameter_centerY, parameter_radius, *parameter_color1, *parameter_color2);
return mrb_nil_value();
}
      
//void DrawCircleLines
static mrb_value
mrb_DrawCircleLines(mrb_state* mrb, mrb_value self) {
int parameter_centerX;
int parameter_centerY;
float parameter_radius;
Color *parameter_color;

uint32_t kw_num = 4;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "centerX"),
mrb_intern_lit(mrb, "centerY"),
mrb_intern_lit(mrb, "radius"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_centerX = mrb_as_int(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_centerY = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_radius = mrb_as_float(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[3], &mrb_Color_struct, Color);

}
        

DrawCircleLines(parameter_centerX, parameter_centerY, parameter_radius, *parameter_color);
return mrb_nil_value();
}
      
//void DrawCircleSector
static mrb_value
mrb_DrawCircleSector(mrb_state* mrb, mrb_value self) {
Vector2 *parameter_center;
float parameter_radius;
float parameter_startAngle;
float parameter_endAngle;
int parameter_segments;
Color *parameter_color;

uint32_t kw_num = 6;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "center"),
mrb_intern_lit(mrb, "radius"),
mrb_intern_lit(mrb, "startAngle"),
mrb_intern_lit(mrb, "endAngle"),
mrb_intern_lit(mrb, "segments"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_center = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_radius = mrb_as_float(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_startAngle = mrb_as_float(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_endAngle = mrb_as_float(mrb, kw_values[3]);
}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_segments = mrb_as_int(mrb, kw_values[4]);
}
        
if (mrb_undef_p(kw_values[5])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[5], &mrb_Color_struct, Color);

}
        

DrawCircleSector(*parameter_center, parameter_radius, parameter_startAngle, parameter_endAngle, parameter_segments, *parameter_color);
return mrb_nil_value();
}
      
//void DrawCircleSectorLines
static mrb_value
mrb_DrawCircleSectorLines(mrb_state* mrb, mrb_value self) {
Vector2 *parameter_center;
float parameter_radius;
float parameter_startAngle;
float parameter_endAngle;
int parameter_segments;
Color *parameter_color;

uint32_t kw_num = 6;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "center"),
mrb_intern_lit(mrb, "radius"),
mrb_intern_lit(mrb, "startAngle"),
mrb_intern_lit(mrb, "endAngle"),
mrb_intern_lit(mrb, "segments"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_center = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_radius = mrb_as_float(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_startAngle = mrb_as_float(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_endAngle = mrb_as_float(mrb, kw_values[3]);
}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_segments = mrb_as_int(mrb, kw_values[4]);
}
        
if (mrb_undef_p(kw_values[5])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[5], &mrb_Color_struct, Color);

}
        

DrawCircleSectorLines(*parameter_center, parameter_radius, parameter_startAngle, parameter_endAngle, parameter_segments, *parameter_color);
return mrb_nil_value();
}
      
//void DrawCircleV
static mrb_value
mrb_DrawCircleV(mrb_state* mrb, mrb_value self) {
Vector2 *parameter_center;
float parameter_radius;
Color *parameter_color;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "center"),
mrb_intern_lit(mrb, "radius"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_center = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_radius = mrb_as_float(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[2], &mrb_Color_struct, Color);

}
        

DrawCircleV(*parameter_center, parameter_radius, *parameter_color);
return mrb_nil_value();
}
      
//void DrawCube
static mrb_value
mrb_DrawCube(mrb_state* mrb, mrb_value self) {
Vector3 *parameter_position;
float parameter_width;
float parameter_height;
float parameter_length;
Color *parameter_color;

uint32_t kw_num = 5;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "position"),
mrb_intern_lit(mrb, "width"),
mrb_intern_lit(mrb, "height"),
mrb_intern_lit(mrb, "length"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_position = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector3_struct, Vector3);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_width = mrb_as_float(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_height = mrb_as_float(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_length = mrb_as_float(mrb, kw_values[3]);
}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[4], &mrb_Color_struct, Color);

}
        

DrawCube(*parameter_position, parameter_width, parameter_height, parameter_length, *parameter_color);
return mrb_nil_value();
}
      
//void DrawCubeTexture
static mrb_value
mrb_DrawCubeTexture(mrb_state* mrb, mrb_value self) {
Texture *parameter_texture;
Vector3 *parameter_position;
float parameter_width;
float parameter_height;
float parameter_length;
Color *parameter_color;

uint32_t kw_num = 6;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "texture"),
mrb_intern_lit(mrb, "position"),
mrb_intern_lit(mrb, "width"),
mrb_intern_lit(mrb, "height"),
mrb_intern_lit(mrb, "length"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_texture = DATA_GET_PTR(mrb, kw_values[0], &mrb_Texture_struct, Texture);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_position = DATA_GET_PTR(mrb, kw_values[1], &mrb_Vector3_struct, Vector3);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_width = mrb_as_float(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_height = mrb_as_float(mrb, kw_values[3]);
}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_length = mrb_as_float(mrb, kw_values[4]);
}
        
if (mrb_undef_p(kw_values[5])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[5], &mrb_Color_struct, Color);

}
        

DrawCubeTexture(*parameter_texture, *parameter_position, parameter_width, parameter_height, parameter_length, *parameter_color);
return mrb_nil_value();
}
      
//void DrawCubeTextureRec
static mrb_value
mrb_DrawCubeTextureRec(mrb_state* mrb, mrb_value self) {
Texture *parameter_texture;
Rectangle *parameter_source;
Vector3 *parameter_position;
float parameter_width;
float parameter_height;
float parameter_length;
Color *parameter_color;

uint32_t kw_num = 7;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "texture"),
mrb_intern_lit(mrb, "source"),
mrb_intern_lit(mrb, "position"),
mrb_intern_lit(mrb, "width"),
mrb_intern_lit(mrb, "height"),
mrb_intern_lit(mrb, "length"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_texture = DATA_GET_PTR(mrb, kw_values[0], &mrb_Texture_struct, Texture);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_source = DATA_GET_PTR(mrb, kw_values[1], &mrb_Rectangle_struct, Rectangle);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_position = DATA_GET_PTR(mrb, kw_values[2], &mrb_Vector3_struct, Vector3);

}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_width = mrb_as_float(mrb, kw_values[3]);
}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_height = mrb_as_float(mrb, kw_values[4]);
}
        
if (mrb_undef_p(kw_values[5])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_length = mrb_as_float(mrb, kw_values[5]);
}
        
if (mrb_undef_p(kw_values[6])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[6], &mrb_Color_struct, Color);

}
        

DrawCubeTextureRec(*parameter_texture, *parameter_source, *parameter_position, parameter_width, parameter_height, parameter_length, *parameter_color);
return mrb_nil_value();
}
      
//void DrawCubeV
static mrb_value
mrb_DrawCubeV(mrb_state* mrb, mrb_value self) {
Vector3 *parameter_position;
Vector3 *parameter_size;
Color *parameter_color;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "position"),
mrb_intern_lit(mrb, "size"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_position = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector3_struct, Vector3);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_size = DATA_GET_PTR(mrb, kw_values[1], &mrb_Vector3_struct, Vector3);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[2], &mrb_Color_struct, Color);

}
        

DrawCubeV(*parameter_position, *parameter_size, *parameter_color);
return mrb_nil_value();
}
      
//void DrawCubeWires
static mrb_value
mrb_DrawCubeWires(mrb_state* mrb, mrb_value self) {
Vector3 *parameter_position;
float parameter_width;
float parameter_height;
float parameter_length;
Color *parameter_color;

uint32_t kw_num = 5;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "position"),
mrb_intern_lit(mrb, "width"),
mrb_intern_lit(mrb, "height"),
mrb_intern_lit(mrb, "length"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_position = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector3_struct, Vector3);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_width = mrb_as_float(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_height = mrb_as_float(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_length = mrb_as_float(mrb, kw_values[3]);
}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[4], &mrb_Color_struct, Color);

}
        

DrawCubeWires(*parameter_position, parameter_width, parameter_height, parameter_length, *parameter_color);
return mrb_nil_value();
}
      
//void DrawCubeWiresV
static mrb_value
mrb_DrawCubeWiresV(mrb_state* mrb, mrb_value self) {
Vector3 *parameter_position;
Vector3 *parameter_size;
Color *parameter_color;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "position"),
mrb_intern_lit(mrb, "size"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_position = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector3_struct, Vector3);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_size = DATA_GET_PTR(mrb, kw_values[1], &mrb_Vector3_struct, Vector3);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[2], &mrb_Color_struct, Color);

}
        

DrawCubeWiresV(*parameter_position, *parameter_size, *parameter_color);
return mrb_nil_value();
}
      
//void DrawCylinder
static mrb_value
mrb_DrawCylinder(mrb_state* mrb, mrb_value self) {
Vector3 *parameter_position;
float parameter_radiusTop;
float parameter_radiusBottom;
float parameter_height;
int parameter_slices;
Color *parameter_color;

uint32_t kw_num = 6;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "position"),
mrb_intern_lit(mrb, "radiusTop"),
mrb_intern_lit(mrb, "radiusBottom"),
mrb_intern_lit(mrb, "height"),
mrb_intern_lit(mrb, "slices"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_position = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector3_struct, Vector3);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_radiusTop = mrb_as_float(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_radiusBottom = mrb_as_float(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_height = mrb_as_float(mrb, kw_values[3]);
}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_slices = mrb_as_int(mrb, kw_values[4]);
}
        
if (mrb_undef_p(kw_values[5])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[5], &mrb_Color_struct, Color);

}
        

DrawCylinder(*parameter_position, parameter_radiusTop, parameter_radiusBottom, parameter_height, parameter_slices, *parameter_color);
return mrb_nil_value();
}
      
//void DrawCylinderEx
static mrb_value
mrb_DrawCylinderEx(mrb_state* mrb, mrb_value self) {
Vector3 *parameter_startPos;
Vector3 *parameter_endPos;
float parameter_startRadius;
float parameter_endRadius;
int parameter_sides;
Color *parameter_color;

uint32_t kw_num = 6;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "startPos"),
mrb_intern_lit(mrb, "endPos"),
mrb_intern_lit(mrb, "startRadius"),
mrb_intern_lit(mrb, "endRadius"),
mrb_intern_lit(mrb, "sides"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_startPos = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector3_struct, Vector3);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_endPos = DATA_GET_PTR(mrb, kw_values[1], &mrb_Vector3_struct, Vector3);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_startRadius = mrb_as_float(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_endRadius = mrb_as_float(mrb, kw_values[3]);
}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_sides = mrb_as_int(mrb, kw_values[4]);
}
        
if (mrb_undef_p(kw_values[5])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[5], &mrb_Color_struct, Color);

}
        

DrawCylinderEx(*parameter_startPos, *parameter_endPos, parameter_startRadius, parameter_endRadius, parameter_sides, *parameter_color);
return mrb_nil_value();
}
      
//void DrawCylinderWires
static mrb_value
mrb_DrawCylinderWires(mrb_state* mrb, mrb_value self) {
Vector3 *parameter_position;
float parameter_radiusTop;
float parameter_radiusBottom;
float parameter_height;
int parameter_slices;
Color *parameter_color;

uint32_t kw_num = 6;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "position"),
mrb_intern_lit(mrb, "radiusTop"),
mrb_intern_lit(mrb, "radiusBottom"),
mrb_intern_lit(mrb, "height"),
mrb_intern_lit(mrb, "slices"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_position = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector3_struct, Vector3);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_radiusTop = mrb_as_float(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_radiusBottom = mrb_as_float(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_height = mrb_as_float(mrb, kw_values[3]);
}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_slices = mrb_as_int(mrb, kw_values[4]);
}
        
if (mrb_undef_p(kw_values[5])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[5], &mrb_Color_struct, Color);

}
        

DrawCylinderWires(*parameter_position, parameter_radiusTop, parameter_radiusBottom, parameter_height, parameter_slices, *parameter_color);
return mrb_nil_value();
}
      
//void DrawCylinderWiresEx
static mrb_value
mrb_DrawCylinderWiresEx(mrb_state* mrb, mrb_value self) {
Vector3 *parameter_startPos;
Vector3 *parameter_endPos;
float parameter_startRadius;
float parameter_endRadius;
int parameter_sides;
Color *parameter_color;

uint32_t kw_num = 6;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "startPos"),
mrb_intern_lit(mrb, "endPos"),
mrb_intern_lit(mrb, "startRadius"),
mrb_intern_lit(mrb, "endRadius"),
mrb_intern_lit(mrb, "sides"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_startPos = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector3_struct, Vector3);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_endPos = DATA_GET_PTR(mrb, kw_values[1], &mrb_Vector3_struct, Vector3);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_startRadius = mrb_as_float(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_endRadius = mrb_as_float(mrb, kw_values[3]);
}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_sides = mrb_as_int(mrb, kw_values[4]);
}
        
if (mrb_undef_p(kw_values[5])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[5], &mrb_Color_struct, Color);

}
        

DrawCylinderWiresEx(*parameter_startPos, *parameter_endPos, parameter_startRadius, parameter_endRadius, parameter_sides, *parameter_color);
return mrb_nil_value();
}
      
//void DrawEllipse
static mrb_value
mrb_DrawEllipse(mrb_state* mrb, mrb_value self) {
int parameter_centerX;
int parameter_centerY;
float parameter_radiusH;
float parameter_radiusV;
Color *parameter_color;

uint32_t kw_num = 5;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "centerX"),
mrb_intern_lit(mrb, "centerY"),
mrb_intern_lit(mrb, "radiusH"),
mrb_intern_lit(mrb, "radiusV"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_centerX = mrb_as_int(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_centerY = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_radiusH = mrb_as_float(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_radiusV = mrb_as_float(mrb, kw_values[3]);
}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[4], &mrb_Color_struct, Color);

}
        

DrawEllipse(parameter_centerX, parameter_centerY, parameter_radiusH, parameter_radiusV, *parameter_color);
return mrb_nil_value();
}
      
//void DrawEllipseLines
static mrb_value
mrb_DrawEllipseLines(mrb_state* mrb, mrb_value self) {
int parameter_centerX;
int parameter_centerY;
float parameter_radiusH;
float parameter_radiusV;
Color *parameter_color;

uint32_t kw_num = 5;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "centerX"),
mrb_intern_lit(mrb, "centerY"),
mrb_intern_lit(mrb, "radiusH"),
mrb_intern_lit(mrb, "radiusV"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_centerX = mrb_as_int(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_centerY = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_radiusH = mrb_as_float(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_radiusV = mrb_as_float(mrb, kw_values[3]);
}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[4], &mrb_Color_struct, Color);

}
        

DrawEllipseLines(parameter_centerX, parameter_centerY, parameter_radiusH, parameter_radiusV, *parameter_color);
return mrb_nil_value();
}
      
//void DrawFPS
static mrb_value
mrb_DrawFPS(mrb_state* mrb, mrb_value self) {
int parameter_posX;
int parameter_posY;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "posX"),
mrb_intern_lit(mrb, "posY")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_posX = mrb_as_int(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_posY = mrb_as_int(mrb, kw_values[1]);
}
        

DrawFPS(parameter_posX, parameter_posY);
return mrb_nil_value();
}
      
//void DrawGrid
static mrb_value
mrb_DrawGrid(mrb_state* mrb, mrb_value self) {
int parameter_slices;
float parameter_spacing;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "slices"),
mrb_intern_lit(mrb, "spacing")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_slices = mrb_as_int(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_spacing = mrb_as_float(mrb, kw_values[1]);
}
        

DrawGrid(parameter_slices, parameter_spacing);
return mrb_nil_value();
}
      
//void DrawLine
static mrb_value
mrb_DrawLine(mrb_state* mrb, mrb_value self) {
int parameter_startPosX;
int parameter_startPosY;
int parameter_endPosX;
int parameter_endPosY;
Color *parameter_color;

uint32_t kw_num = 5;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "startPosX"),
mrb_intern_lit(mrb, "startPosY"),
mrb_intern_lit(mrb, "endPosX"),
mrb_intern_lit(mrb, "endPosY"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_startPosX = mrb_as_int(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_startPosY = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_endPosX = mrb_as_int(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_endPosY = mrb_as_int(mrb, kw_values[3]);
}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[4], &mrb_Color_struct, Color);

}
        

DrawLine(parameter_startPosX, parameter_startPosY, parameter_endPosX, parameter_endPosY, *parameter_color);
return mrb_nil_value();
}
      
//void DrawLine3D
static mrb_value
mrb_DrawLine3D(mrb_state* mrb, mrb_value self) {
Vector3 *parameter_startPos;
Vector3 *parameter_endPos;
Color *parameter_color;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "startPos"),
mrb_intern_lit(mrb, "endPos"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_startPos = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector3_struct, Vector3);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_endPos = DATA_GET_PTR(mrb, kw_values[1], &mrb_Vector3_struct, Vector3);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[2], &mrb_Color_struct, Color);

}
        

DrawLine3D(*parameter_startPos, *parameter_endPos, *parameter_color);
return mrb_nil_value();
}
      
//void DrawLineBezier
static mrb_value
mrb_DrawLineBezier(mrb_state* mrb, mrb_value self) {
Vector2 *parameter_startPos;
Vector2 *parameter_endPos;
float parameter_thick;
Color *parameter_color;

uint32_t kw_num = 4;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "startPos"),
mrb_intern_lit(mrb, "endPos"),
mrb_intern_lit(mrb, "thick"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_startPos = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_endPos = DATA_GET_PTR(mrb, kw_values[1], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_thick = mrb_as_float(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[3], &mrb_Color_struct, Color);

}
        

DrawLineBezier(*parameter_startPos, *parameter_endPos, parameter_thick, *parameter_color);
return mrb_nil_value();
}
      
//void DrawLineBezierCubic
static mrb_value
mrb_DrawLineBezierCubic(mrb_state* mrb, mrb_value self) {
Vector2 *parameter_startPos;
Vector2 *parameter_endPos;
Vector2 *parameter_startControlPos;
Vector2 *parameter_endControlPos;
float parameter_thick;
Color *parameter_color;

uint32_t kw_num = 6;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "startPos"),
mrb_intern_lit(mrb, "endPos"),
mrb_intern_lit(mrb, "startControlPos"),
mrb_intern_lit(mrb, "endControlPos"),
mrb_intern_lit(mrb, "thick"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_startPos = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_endPos = DATA_GET_PTR(mrb, kw_values[1], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_startControlPos = DATA_GET_PTR(mrb, kw_values[2], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_endControlPos = DATA_GET_PTR(mrb, kw_values[3], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_thick = mrb_as_float(mrb, kw_values[4]);
}
        
if (mrb_undef_p(kw_values[5])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[5], &mrb_Color_struct, Color);

}
        

DrawLineBezierCubic(*parameter_startPos, *parameter_endPos, *parameter_startControlPos, *parameter_endControlPos, parameter_thick, *parameter_color);
return mrb_nil_value();
}
      
//void DrawLineBezierQuad
static mrb_value
mrb_DrawLineBezierQuad(mrb_state* mrb, mrb_value self) {
Vector2 *parameter_startPos;
Vector2 *parameter_endPos;
Vector2 *parameter_controlPos;
float parameter_thick;
Color *parameter_color;

uint32_t kw_num = 5;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "startPos"),
mrb_intern_lit(mrb, "endPos"),
mrb_intern_lit(mrb, "controlPos"),
mrb_intern_lit(mrb, "thick"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_startPos = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_endPos = DATA_GET_PTR(mrb, kw_values[1], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_controlPos = DATA_GET_PTR(mrb, kw_values[2], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_thick = mrb_as_float(mrb, kw_values[3]);
}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[4], &mrb_Color_struct, Color);

}
        

DrawLineBezierQuad(*parameter_startPos, *parameter_endPos, *parameter_controlPos, parameter_thick, *parameter_color);
return mrb_nil_value();
}
      
//void DrawLineEx
static mrb_value
mrb_DrawLineEx(mrb_state* mrb, mrb_value self) {
Vector2 *parameter_startPos;
Vector2 *parameter_endPos;
float parameter_thick;
Color *parameter_color;

uint32_t kw_num = 4;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "startPos"),
mrb_intern_lit(mrb, "endPos"),
mrb_intern_lit(mrb, "thick"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_startPos = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_endPos = DATA_GET_PTR(mrb, kw_values[1], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_thick = mrb_as_float(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[3], &mrb_Color_struct, Color);

}
        

DrawLineEx(*parameter_startPos, *parameter_endPos, parameter_thick, *parameter_color);
return mrb_nil_value();
}
      
//void DrawLineStrip
static mrb_value
mrb_DrawLineStrip(mrb_state* mrb, mrb_value self) {
Vector2 *parameter_points;
int parameter_pointCount;
Color *parameter_color;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "points"),
mrb_intern_lit(mrb, "pointCount"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_points = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_pointCount = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[2], &mrb_Color_struct, Color);

}
        

DrawLineStrip(parameter_points, parameter_pointCount, *parameter_color);
return mrb_nil_value();
}
      
//void DrawLineV
static mrb_value
mrb_DrawLineV(mrb_state* mrb, mrb_value self) {
Vector2 *parameter_startPos;
Vector2 *parameter_endPos;
Color *parameter_color;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "startPos"),
mrb_intern_lit(mrb, "endPos"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_startPos = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_endPos = DATA_GET_PTR(mrb, kw_values[1], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[2], &mrb_Color_struct, Color);

}
        

DrawLineV(*parameter_startPos, *parameter_endPos, *parameter_color);
return mrb_nil_value();
}
      
//void DrawMesh
static mrb_value
mrb_DrawMesh(mrb_state* mrb, mrb_value self) {
Mesh *parameter_mesh;
Material *parameter_material;
Matrix *parameter_transform;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "mesh"),
mrb_intern_lit(mrb, "material"),
mrb_intern_lit(mrb, "transform")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_mesh = DATA_GET_PTR(mrb, kw_values[0], &mrb_Mesh_struct, Mesh);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_material = DATA_GET_PTR(mrb, kw_values[1], &mrb_Material_struct, Material);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_transform = DATA_GET_PTR(mrb, kw_values[2], &mrb_Matrix_struct, Matrix);

}
        

DrawMesh(*parameter_mesh, *parameter_material, *parameter_transform);
return mrb_nil_value();
}
      
//void DrawModel
static mrb_value
mrb_DrawModel(mrb_state* mrb, mrb_value self) {
Model *parameter_model;
Vector3 *parameter_position;
float parameter_scale;
Color *parameter_tint;

uint32_t kw_num = 4;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "model"),
mrb_intern_lit(mrb, "position"),
mrb_intern_lit(mrb, "scale"),
mrb_intern_lit(mrb, "tint")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_model = DATA_GET_PTR(mrb, kw_values[0], &mrb_Model_struct, Model);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_position = DATA_GET_PTR(mrb, kw_values[1], &mrb_Vector3_struct, Vector3);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_scale = mrb_as_float(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_tint = DATA_GET_PTR(mrb, kw_values[3], &mrb_Color_struct, Color);

}
        

DrawModel(*parameter_model, *parameter_position, parameter_scale, *parameter_tint);
return mrb_nil_value();
}
      
//void DrawModelEx
static mrb_value
mrb_DrawModelEx(mrb_state* mrb, mrb_value self) {
Model *parameter_model;
Vector3 *parameter_position;
Vector3 *parameter_rotationAxis;
float parameter_rotationAngle;
Vector3 *parameter_scale;
Color *parameter_tint;

uint32_t kw_num = 6;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "model"),
mrb_intern_lit(mrb, "position"),
mrb_intern_lit(mrb, "rotationAxis"),
mrb_intern_lit(mrb, "rotationAngle"),
mrb_intern_lit(mrb, "scale"),
mrb_intern_lit(mrb, "tint")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_model = DATA_GET_PTR(mrb, kw_values[0], &mrb_Model_struct, Model);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_position = DATA_GET_PTR(mrb, kw_values[1], &mrb_Vector3_struct, Vector3);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_rotationAxis = DATA_GET_PTR(mrb, kw_values[2], &mrb_Vector3_struct, Vector3);

}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_rotationAngle = mrb_as_float(mrb, kw_values[3]);
}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_scale = DATA_GET_PTR(mrb, kw_values[4], &mrb_Vector3_struct, Vector3);

}
        
if (mrb_undef_p(kw_values[5])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_tint = DATA_GET_PTR(mrb, kw_values[5], &mrb_Color_struct, Color);

}
        

DrawModelEx(*parameter_model, *parameter_position, *parameter_rotationAxis, parameter_rotationAngle, *parameter_scale, *parameter_tint);
return mrb_nil_value();
}
      
//void DrawModelWires
static mrb_value
mrb_DrawModelWires(mrb_state* mrb, mrb_value self) {
Model *parameter_model;
Vector3 *parameter_position;
float parameter_scale;
Color *parameter_tint;

uint32_t kw_num = 4;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "model"),
mrb_intern_lit(mrb, "position"),
mrb_intern_lit(mrb, "scale"),
mrb_intern_lit(mrb, "tint")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_model = DATA_GET_PTR(mrb, kw_values[0], &mrb_Model_struct, Model);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_position = DATA_GET_PTR(mrb, kw_values[1], &mrb_Vector3_struct, Vector3);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_scale = mrb_as_float(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_tint = DATA_GET_PTR(mrb, kw_values[3], &mrb_Color_struct, Color);

}
        

DrawModelWires(*parameter_model, *parameter_position, parameter_scale, *parameter_tint);
return mrb_nil_value();
}
      
//void DrawModelWiresEx
static mrb_value
mrb_DrawModelWiresEx(mrb_state* mrb, mrb_value self) {
Model *parameter_model;
Vector3 *parameter_position;
Vector3 *parameter_rotationAxis;
float parameter_rotationAngle;
Vector3 *parameter_scale;
Color *parameter_tint;

uint32_t kw_num = 6;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "model"),
mrb_intern_lit(mrb, "position"),
mrb_intern_lit(mrb, "rotationAxis"),
mrb_intern_lit(mrb, "rotationAngle"),
mrb_intern_lit(mrb, "scale"),
mrb_intern_lit(mrb, "tint")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_model = DATA_GET_PTR(mrb, kw_values[0], &mrb_Model_struct, Model);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_position = DATA_GET_PTR(mrb, kw_values[1], &mrb_Vector3_struct, Vector3);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_rotationAxis = DATA_GET_PTR(mrb, kw_values[2], &mrb_Vector3_struct, Vector3);

}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_rotationAngle = mrb_as_float(mrb, kw_values[3]);
}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_scale = DATA_GET_PTR(mrb, kw_values[4], &mrb_Vector3_struct, Vector3);

}
        
if (mrb_undef_p(kw_values[5])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_tint = DATA_GET_PTR(mrb, kw_values[5], &mrb_Color_struct, Color);

}
        

DrawModelWiresEx(*parameter_model, *parameter_position, *parameter_rotationAxis, parameter_rotationAngle, *parameter_scale, *parameter_tint);
return mrb_nil_value();
}
      
//void DrawPixel
static mrb_value
mrb_DrawPixel(mrb_state* mrb, mrb_value self) {
int parameter_posX;
int parameter_posY;
Color *parameter_color;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "posX"),
mrb_intern_lit(mrb, "posY"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_posX = mrb_as_int(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_posY = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[2], &mrb_Color_struct, Color);

}
        

DrawPixel(parameter_posX, parameter_posY, *parameter_color);
return mrb_nil_value();
}
      
//void DrawPixelV
static mrb_value
mrb_DrawPixelV(mrb_state* mrb, mrb_value self) {
Vector2 *parameter_position;
Color *parameter_color;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "position"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_position = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[1], &mrb_Color_struct, Color);

}
        

DrawPixelV(*parameter_position, *parameter_color);
return mrb_nil_value();
}
      
//void DrawPlane
static mrb_value
mrb_DrawPlane(mrb_state* mrb, mrb_value self) {
Vector3 *parameter_centerPos;
Vector2 *parameter_size;
Color *parameter_color;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "centerPos"),
mrb_intern_lit(mrb, "size"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_centerPos = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector3_struct, Vector3);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_size = DATA_GET_PTR(mrb, kw_values[1], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[2], &mrb_Color_struct, Color);

}
        

DrawPlane(*parameter_centerPos, *parameter_size, *parameter_color);
return mrb_nil_value();
}
      
//void DrawPoint3D
static mrb_value
mrb_DrawPoint3D(mrb_state* mrb, mrb_value self) {
Vector3 *parameter_position;
Color *parameter_color;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "position"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_position = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector3_struct, Vector3);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[1], &mrb_Color_struct, Color);

}
        

DrawPoint3D(*parameter_position, *parameter_color);
return mrb_nil_value();
}
      
//void DrawPoly
static mrb_value
mrb_DrawPoly(mrb_state* mrb, mrb_value self) {
Vector2 *parameter_center;
int parameter_sides;
float parameter_radius;
float parameter_rotation;
Color *parameter_color;

uint32_t kw_num = 5;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "center"),
mrb_intern_lit(mrb, "sides"),
mrb_intern_lit(mrb, "radius"),
mrb_intern_lit(mrb, "rotation"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_center = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_sides = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_radius = mrb_as_float(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_rotation = mrb_as_float(mrb, kw_values[3]);
}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[4], &mrb_Color_struct, Color);

}
        

DrawPoly(*parameter_center, parameter_sides, parameter_radius, parameter_rotation, *parameter_color);
return mrb_nil_value();
}
      
//void DrawPolyLines
static mrb_value
mrb_DrawPolyLines(mrb_state* mrb, mrb_value self) {
Vector2 *parameter_center;
int parameter_sides;
float parameter_radius;
float parameter_rotation;
Color *parameter_color;

uint32_t kw_num = 5;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "center"),
mrb_intern_lit(mrb, "sides"),
mrb_intern_lit(mrb, "radius"),
mrb_intern_lit(mrb, "rotation"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_center = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_sides = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_radius = mrb_as_float(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_rotation = mrb_as_float(mrb, kw_values[3]);
}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[4], &mrb_Color_struct, Color);

}
        

DrawPolyLines(*parameter_center, parameter_sides, parameter_radius, parameter_rotation, *parameter_color);
return mrb_nil_value();
}
      
//void DrawPolyLinesEx
static mrb_value
mrb_DrawPolyLinesEx(mrb_state* mrb, mrb_value self) {
Vector2 *parameter_center;
int parameter_sides;
float parameter_radius;
float parameter_rotation;
float parameter_lineThick;
Color *parameter_color;

uint32_t kw_num = 6;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "center"),
mrb_intern_lit(mrb, "sides"),
mrb_intern_lit(mrb, "radius"),
mrb_intern_lit(mrb, "rotation"),
mrb_intern_lit(mrb, "lineThick"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_center = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_sides = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_radius = mrb_as_float(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_rotation = mrb_as_float(mrb, kw_values[3]);
}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_lineThick = mrb_as_float(mrb, kw_values[4]);
}
        
if (mrb_undef_p(kw_values[5])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[5], &mrb_Color_struct, Color);

}
        

DrawPolyLinesEx(*parameter_center, parameter_sides, parameter_radius, parameter_rotation, parameter_lineThick, *parameter_color);
return mrb_nil_value();
}
      
//void DrawRay
static mrb_value
mrb_DrawRay(mrb_state* mrb, mrb_value self) {
Ray *parameter_ray;
Color *parameter_color;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "ray"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_ray = DATA_GET_PTR(mrb, kw_values[0], &mrb_Ray_struct, Ray);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[1], &mrb_Color_struct, Color);

}
        

DrawRay(*parameter_ray, *parameter_color);
return mrb_nil_value();
}
      
//void DrawRectangle
static mrb_value
mrb_DrawRectangle(mrb_state* mrb, mrb_value self) {
int parameter_posX;
int parameter_posY;
int parameter_width;
int parameter_height;
Color *parameter_color;

uint32_t kw_num = 5;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "posX"),
mrb_intern_lit(mrb, "posY"),
mrb_intern_lit(mrb, "width"),
mrb_intern_lit(mrb, "height"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_posX = mrb_as_int(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_posY = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_width = mrb_as_int(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_height = mrb_as_int(mrb, kw_values[3]);
}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[4], &mrb_Color_struct, Color);

}
        

DrawRectangle(parameter_posX, parameter_posY, parameter_width, parameter_height, *parameter_color);
return mrb_nil_value();
}
      
//void DrawRectangleGradientEx
static mrb_value
mrb_DrawRectangleGradientEx(mrb_state* mrb, mrb_value self) {
Rectangle *parameter_rec;
Color *parameter_col1;
Color *parameter_col2;
Color *parameter_col3;
Color *parameter_col4;

uint32_t kw_num = 5;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "rec"),
mrb_intern_lit(mrb, "col1"),
mrb_intern_lit(mrb, "col2"),
mrb_intern_lit(mrb, "col3"),
mrb_intern_lit(mrb, "col4")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_rec = DATA_GET_PTR(mrb, kw_values[0], &mrb_Rectangle_struct, Rectangle);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_col1 = DATA_GET_PTR(mrb, kw_values[1], &mrb_Color_struct, Color);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_col2 = DATA_GET_PTR(mrb, kw_values[2], &mrb_Color_struct, Color);

}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_col3 = DATA_GET_PTR(mrb, kw_values[3], &mrb_Color_struct, Color);

}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_col4 = DATA_GET_PTR(mrb, kw_values[4], &mrb_Color_struct, Color);

}
        

DrawRectangleGradientEx(*parameter_rec, *parameter_col1, *parameter_col2, *parameter_col3, *parameter_col4);
return mrb_nil_value();
}
      
//void DrawRectangleGradientH
static mrb_value
mrb_DrawRectangleGradientH(mrb_state* mrb, mrb_value self) {
int parameter_posX;
int parameter_posY;
int parameter_width;
int parameter_height;
Color *parameter_color1;
Color *parameter_color2;

uint32_t kw_num = 6;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "posX"),
mrb_intern_lit(mrb, "posY"),
mrb_intern_lit(mrb, "width"),
mrb_intern_lit(mrb, "height"),
mrb_intern_lit(mrb, "color1"),
mrb_intern_lit(mrb, "color2")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_posX = mrb_as_int(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_posY = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_width = mrb_as_int(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_height = mrb_as_int(mrb, kw_values[3]);
}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color1 = DATA_GET_PTR(mrb, kw_values[4], &mrb_Color_struct, Color);

}
        
if (mrb_undef_p(kw_values[5])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color2 = DATA_GET_PTR(mrb, kw_values[5], &mrb_Color_struct, Color);

}
        

DrawRectangleGradientH(parameter_posX, parameter_posY, parameter_width, parameter_height, *parameter_color1, *parameter_color2);
return mrb_nil_value();
}
      
//void DrawRectangleGradientV
static mrb_value
mrb_DrawRectangleGradientV(mrb_state* mrb, mrb_value self) {
int parameter_posX;
int parameter_posY;
int parameter_width;
int parameter_height;
Color *parameter_color1;
Color *parameter_color2;

uint32_t kw_num = 6;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "posX"),
mrb_intern_lit(mrb, "posY"),
mrb_intern_lit(mrb, "width"),
mrb_intern_lit(mrb, "height"),
mrb_intern_lit(mrb, "color1"),
mrb_intern_lit(mrb, "color2")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_posX = mrb_as_int(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_posY = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_width = mrb_as_int(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_height = mrb_as_int(mrb, kw_values[3]);
}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color1 = DATA_GET_PTR(mrb, kw_values[4], &mrb_Color_struct, Color);

}
        
if (mrb_undef_p(kw_values[5])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color2 = DATA_GET_PTR(mrb, kw_values[5], &mrb_Color_struct, Color);

}
        

DrawRectangleGradientV(parameter_posX, parameter_posY, parameter_width, parameter_height, *parameter_color1, *parameter_color2);
return mrb_nil_value();
}
      
//void DrawRectangleLines
static mrb_value
mrb_DrawRectangleLines(mrb_state* mrb, mrb_value self) {
int parameter_posX;
int parameter_posY;
int parameter_width;
int parameter_height;
Color *parameter_color;

uint32_t kw_num = 5;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "posX"),
mrb_intern_lit(mrb, "posY"),
mrb_intern_lit(mrb, "width"),
mrb_intern_lit(mrb, "height"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_posX = mrb_as_int(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_posY = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_width = mrb_as_int(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_height = mrb_as_int(mrb, kw_values[3]);
}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[4], &mrb_Color_struct, Color);

}
        

DrawRectangleLines(parameter_posX, parameter_posY, parameter_width, parameter_height, *parameter_color);
return mrb_nil_value();
}
      
//void DrawRectangleLinesEx
static mrb_value
mrb_DrawRectangleLinesEx(mrb_state* mrb, mrb_value self) {
Rectangle *parameter_rec;
float parameter_lineThick;
Color *parameter_color;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "rec"),
mrb_intern_lit(mrb, "lineThick"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_rec = DATA_GET_PTR(mrb, kw_values[0], &mrb_Rectangle_struct, Rectangle);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_lineThick = mrb_as_float(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[2], &mrb_Color_struct, Color);

}
        

DrawRectangleLinesEx(*parameter_rec, parameter_lineThick, *parameter_color);
return mrb_nil_value();
}
      
//void DrawRectanglePro
static mrb_value
mrb_DrawRectanglePro(mrb_state* mrb, mrb_value self) {
Rectangle *parameter_rec;
Vector2 *parameter_origin;
float parameter_rotation;
Color *parameter_color;

uint32_t kw_num = 4;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "rec"),
mrb_intern_lit(mrb, "origin"),
mrb_intern_lit(mrb, "rotation"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_rec = DATA_GET_PTR(mrb, kw_values[0], &mrb_Rectangle_struct, Rectangle);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_origin = DATA_GET_PTR(mrb, kw_values[1], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_rotation = mrb_as_float(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[3], &mrb_Color_struct, Color);

}
        

DrawRectanglePro(*parameter_rec, *parameter_origin, parameter_rotation, *parameter_color);
return mrb_nil_value();
}
      
//void DrawRectangleRec
static mrb_value
mrb_DrawRectangleRec(mrb_state* mrb, mrb_value self) {
Rectangle *parameter_rec;
Color *parameter_color;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "rec"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_rec = DATA_GET_PTR(mrb, kw_values[0], &mrb_Rectangle_struct, Rectangle);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[1], &mrb_Color_struct, Color);

}
        

DrawRectangleRec(*parameter_rec, *parameter_color);
return mrb_nil_value();
}
      
//void DrawRectangleRounded
static mrb_value
mrb_DrawRectangleRounded(mrb_state* mrb, mrb_value self) {
Rectangle *parameter_rec;
float parameter_roundness;
int parameter_segments;
Color *parameter_color;

uint32_t kw_num = 4;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "rec"),
mrb_intern_lit(mrb, "roundness"),
mrb_intern_lit(mrb, "segments"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_rec = DATA_GET_PTR(mrb, kw_values[0], &mrb_Rectangle_struct, Rectangle);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_roundness = mrb_as_float(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_segments = mrb_as_int(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[3], &mrb_Color_struct, Color);

}
        

DrawRectangleRounded(*parameter_rec, parameter_roundness, parameter_segments, *parameter_color);
return mrb_nil_value();
}
      
//void DrawRectangleRoundedLines
static mrb_value
mrb_DrawRectangleRoundedLines(mrb_state* mrb, mrb_value self) {
Rectangle *parameter_rec;
float parameter_roundness;
int parameter_segments;
float parameter_lineThick;
Color *parameter_color;

uint32_t kw_num = 5;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "rec"),
mrb_intern_lit(mrb, "roundness"),
mrb_intern_lit(mrb, "segments"),
mrb_intern_lit(mrb, "lineThick"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_rec = DATA_GET_PTR(mrb, kw_values[0], &mrb_Rectangle_struct, Rectangle);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_roundness = mrb_as_float(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_segments = mrb_as_int(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_lineThick = mrb_as_float(mrb, kw_values[3]);
}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[4], &mrb_Color_struct, Color);

}
        

DrawRectangleRoundedLines(*parameter_rec, parameter_roundness, parameter_segments, parameter_lineThick, *parameter_color);
return mrb_nil_value();
}
      
//void DrawRectangleV
static mrb_value
mrb_DrawRectangleV(mrb_state* mrb, mrb_value self) {
Vector2 *parameter_position;
Vector2 *parameter_size;
Color *parameter_color;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "position"),
mrb_intern_lit(mrb, "size"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_position = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_size = DATA_GET_PTR(mrb, kw_values[1], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[2], &mrb_Color_struct, Color);

}
        

DrawRectangleV(*parameter_position, *parameter_size, *parameter_color);
return mrb_nil_value();
}
      
//void DrawRing
static mrb_value
mrb_DrawRing(mrb_state* mrb, mrb_value self) {
Vector2 *parameter_center;
float parameter_innerRadius;
float parameter_outerRadius;
float parameter_startAngle;
float parameter_endAngle;
int parameter_segments;
Color *parameter_color;

uint32_t kw_num = 7;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "center"),
mrb_intern_lit(mrb, "innerRadius"),
mrb_intern_lit(mrb, "outerRadius"),
mrb_intern_lit(mrb, "startAngle"),
mrb_intern_lit(mrb, "endAngle"),
mrb_intern_lit(mrb, "segments"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_center = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_innerRadius = mrb_as_float(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_outerRadius = mrb_as_float(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_startAngle = mrb_as_float(mrb, kw_values[3]);
}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_endAngle = mrb_as_float(mrb, kw_values[4]);
}
        
if (mrb_undef_p(kw_values[5])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_segments = mrb_as_int(mrb, kw_values[5]);
}
        
if (mrb_undef_p(kw_values[6])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[6], &mrb_Color_struct, Color);

}
        

DrawRing(*parameter_center, parameter_innerRadius, parameter_outerRadius, parameter_startAngle, parameter_endAngle, parameter_segments, *parameter_color);
return mrb_nil_value();
}
      
//void DrawRingLines
static mrb_value
mrb_DrawRingLines(mrb_state* mrb, mrb_value self) {
Vector2 *parameter_center;
float parameter_innerRadius;
float parameter_outerRadius;
float parameter_startAngle;
float parameter_endAngle;
int parameter_segments;
Color *parameter_color;

uint32_t kw_num = 7;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "center"),
mrb_intern_lit(mrb, "innerRadius"),
mrb_intern_lit(mrb, "outerRadius"),
mrb_intern_lit(mrb, "startAngle"),
mrb_intern_lit(mrb, "endAngle"),
mrb_intern_lit(mrb, "segments"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_center = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_innerRadius = mrb_as_float(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_outerRadius = mrb_as_float(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_startAngle = mrb_as_float(mrb, kw_values[3]);
}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_endAngle = mrb_as_float(mrb, kw_values[4]);
}
        
if (mrb_undef_p(kw_values[5])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_segments = mrb_as_int(mrb, kw_values[5]);
}
        
if (mrb_undef_p(kw_values[6])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[6], &mrb_Color_struct, Color);

}
        

DrawRingLines(*parameter_center, parameter_innerRadius, parameter_outerRadius, parameter_startAngle, parameter_endAngle, parameter_segments, *parameter_color);
return mrb_nil_value();
}
      
//void DrawSphere
static mrb_value
mrb_DrawSphere(mrb_state* mrb, mrb_value self) {
Vector3 *parameter_centerPos;
float parameter_radius;
Color *parameter_color;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "centerPos"),
mrb_intern_lit(mrb, "radius"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_centerPos = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector3_struct, Vector3);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_radius = mrb_as_float(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[2], &mrb_Color_struct, Color);

}
        

DrawSphere(*parameter_centerPos, parameter_radius, *parameter_color);
return mrb_nil_value();
}
      
//void DrawSphereEx
static mrb_value
mrb_DrawSphereEx(mrb_state* mrb, mrb_value self) {
Vector3 *parameter_centerPos;
float parameter_radius;
int parameter_rings;
int parameter_slices;
Color *parameter_color;

uint32_t kw_num = 5;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "centerPos"),
mrb_intern_lit(mrb, "radius"),
mrb_intern_lit(mrb, "rings"),
mrb_intern_lit(mrb, "slices"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_centerPos = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector3_struct, Vector3);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_radius = mrb_as_float(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_rings = mrb_as_int(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_slices = mrb_as_int(mrb, kw_values[3]);
}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[4], &mrb_Color_struct, Color);

}
        

DrawSphereEx(*parameter_centerPos, parameter_radius, parameter_rings, parameter_slices, *parameter_color);
return mrb_nil_value();
}
      
//void DrawSphereWires
static mrb_value
mrb_DrawSphereWires(mrb_state* mrb, mrb_value self) {
Vector3 *parameter_centerPos;
float parameter_radius;
int parameter_rings;
int parameter_slices;
Color *parameter_color;

uint32_t kw_num = 5;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "centerPos"),
mrb_intern_lit(mrb, "radius"),
mrb_intern_lit(mrb, "rings"),
mrb_intern_lit(mrb, "slices"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_centerPos = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector3_struct, Vector3);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_radius = mrb_as_float(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_rings = mrb_as_int(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_slices = mrb_as_int(mrb, kw_values[3]);
}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[4], &mrb_Color_struct, Color);

}
        

DrawSphereWires(*parameter_centerPos, parameter_radius, parameter_rings, parameter_slices, *parameter_color);
return mrb_nil_value();
}
      
//void DrawText
static mrb_value
mrb_DrawText(mrb_state* mrb, mrb_value self) {
char * parameter_text;
int parameter_posX;
int parameter_posY;
int parameter_fontSize;
Color *parameter_color;

uint32_t kw_num = 5;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "text"),
mrb_intern_lit(mrb, "posX"),
mrb_intern_lit(mrb, "posY"),
mrb_intern_lit(mrb, "fontSize"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_text = mrb_str_to_cstr(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_posX = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_posY = mrb_as_int(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_fontSize = mrb_as_int(mrb, kw_values[3]);
}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[4], &mrb_Color_struct, Color);

}
        

DrawText(parameter_text, parameter_posX, parameter_posY, parameter_fontSize, *parameter_color);
return mrb_nil_value();
}
      
//void DrawTextCodepoint
static mrb_value
mrb_DrawTextCodepoint(mrb_state* mrb, mrb_value self) {
Font *parameter_font;
int parameter_codepoint;
Vector2 *parameter_position;
float parameter_fontSize;
Color *parameter_tint;

uint32_t kw_num = 5;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "font"),
mrb_intern_lit(mrb, "codepoint"),
mrb_intern_lit(mrb, "position"),
mrb_intern_lit(mrb, "fontSize"),
mrb_intern_lit(mrb, "tint")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_font = DATA_GET_PTR(mrb, kw_values[0], &mrb_Font_struct, Font);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_codepoint = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_position = DATA_GET_PTR(mrb, kw_values[2], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_fontSize = mrb_as_float(mrb, kw_values[3]);
}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_tint = DATA_GET_PTR(mrb, kw_values[4], &mrb_Color_struct, Color);

}
        

DrawTextCodepoint(*parameter_font, parameter_codepoint, *parameter_position, parameter_fontSize, *parameter_tint);
return mrb_nil_value();
}
      
//void DrawTextEx
static mrb_value
mrb_DrawTextEx(mrb_state* mrb, mrb_value self) {
Font *parameter_font;
char * parameter_text;
Vector2 *parameter_position;
float parameter_fontSize;
float parameter_spacing;
Color *parameter_tint;

uint32_t kw_num = 6;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "font"),
mrb_intern_lit(mrb, "text"),
mrb_intern_lit(mrb, "position"),
mrb_intern_lit(mrb, "fontSize"),
mrb_intern_lit(mrb, "spacing"),
mrb_intern_lit(mrb, "tint")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_font = DATA_GET_PTR(mrb, kw_values[0], &mrb_Font_struct, Font);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_text = mrb_str_to_cstr(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_position = DATA_GET_PTR(mrb, kw_values[2], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_fontSize = mrb_as_float(mrb, kw_values[3]);
}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_spacing = mrb_as_float(mrb, kw_values[4]);
}
        
if (mrb_undef_p(kw_values[5])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_tint = DATA_GET_PTR(mrb, kw_values[5], &mrb_Color_struct, Color);

}
        

DrawTextEx(*parameter_font, parameter_text, *parameter_position, parameter_fontSize, parameter_spacing, *parameter_tint);
return mrb_nil_value();
}
      
//void DrawTextPro
static mrb_value
mrb_DrawTextPro(mrb_state* mrb, mrb_value self) {
Font *parameter_font;
char * parameter_text;
Vector2 *parameter_position;
Vector2 *parameter_origin;
float parameter_rotation;
float parameter_fontSize;
float parameter_spacing;
Color *parameter_tint;

uint32_t kw_num = 8;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "font"),
mrb_intern_lit(mrb, "text"),
mrb_intern_lit(mrb, "position"),
mrb_intern_lit(mrb, "origin"),
mrb_intern_lit(mrb, "rotation"),
mrb_intern_lit(mrb, "fontSize"),
mrb_intern_lit(mrb, "spacing"),
mrb_intern_lit(mrb, "tint")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_font = DATA_GET_PTR(mrb, kw_values[0], &mrb_Font_struct, Font);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_text = mrb_str_to_cstr(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_position = DATA_GET_PTR(mrb, kw_values[2], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_origin = DATA_GET_PTR(mrb, kw_values[3], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_rotation = mrb_as_float(mrb, kw_values[4]);
}
        
if (mrb_undef_p(kw_values[5])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_fontSize = mrb_as_float(mrb, kw_values[5]);
}
        
if (mrb_undef_p(kw_values[6])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_spacing = mrb_as_float(mrb, kw_values[6]);
}
        
if (mrb_undef_p(kw_values[7])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_tint = DATA_GET_PTR(mrb, kw_values[7], &mrb_Color_struct, Color);

}
        

DrawTextPro(*parameter_font, parameter_text, *parameter_position, *parameter_origin, parameter_rotation, parameter_fontSize, parameter_spacing, *parameter_tint);
return mrb_nil_value();
}
      
//void DrawTexture
static mrb_value
mrb_DrawTexture(mrb_state* mrb, mrb_value self) {
Texture *parameter_texture;
int parameter_posX;
int parameter_posY;
Color *parameter_tint;

uint32_t kw_num = 4;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "texture"),
mrb_intern_lit(mrb, "posX"),
mrb_intern_lit(mrb, "posY"),
mrb_intern_lit(mrb, "tint")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_texture = DATA_GET_PTR(mrb, kw_values[0], &mrb_Texture_struct, Texture);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_posX = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_posY = mrb_as_int(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_tint = DATA_GET_PTR(mrb, kw_values[3], &mrb_Color_struct, Color);

}
        

DrawTexture(*parameter_texture, parameter_posX, parameter_posY, *parameter_tint);
return mrb_nil_value();
}
      
//void DrawTextureEx
static mrb_value
mrb_DrawTextureEx(mrb_state* mrb, mrb_value self) {
Texture *parameter_texture;
Vector2 *parameter_position;
float parameter_rotation;
float parameter_scale;
Color *parameter_tint;

uint32_t kw_num = 5;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "texture"),
mrb_intern_lit(mrb, "position"),
mrb_intern_lit(mrb, "rotation"),
mrb_intern_lit(mrb, "scale"),
mrb_intern_lit(mrb, "tint")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_texture = DATA_GET_PTR(mrb, kw_values[0], &mrb_Texture_struct, Texture);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_position = DATA_GET_PTR(mrb, kw_values[1], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_rotation = mrb_as_float(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_scale = mrb_as_float(mrb, kw_values[3]);
}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_tint = DATA_GET_PTR(mrb, kw_values[4], &mrb_Color_struct, Color);

}
        

DrawTextureEx(*parameter_texture, *parameter_position, parameter_rotation, parameter_scale, *parameter_tint);
return mrb_nil_value();
}
      
//void DrawTextureNPatch
static mrb_value
mrb_DrawTextureNPatch(mrb_state* mrb, mrb_value self) {
Texture *parameter_texture;
NPatchInfo *parameter_nPatchInfo;
Rectangle *parameter_dest;
Vector2 *parameter_origin;
float parameter_rotation;
Color *parameter_tint;

uint32_t kw_num = 6;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "texture"),
mrb_intern_lit(mrb, "nPatchInfo"),
mrb_intern_lit(mrb, "dest"),
mrb_intern_lit(mrb, "origin"),
mrb_intern_lit(mrb, "rotation"),
mrb_intern_lit(mrb, "tint")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_texture = DATA_GET_PTR(mrb, kw_values[0], &mrb_Texture_struct, Texture);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_nPatchInfo = DATA_GET_PTR(mrb, kw_values[1], &mrb_NPatchInfo_struct, NPatchInfo);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_dest = DATA_GET_PTR(mrb, kw_values[2], &mrb_Rectangle_struct, Rectangle);

}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_origin = DATA_GET_PTR(mrb, kw_values[3], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_rotation = mrb_as_float(mrb, kw_values[4]);
}
        
if (mrb_undef_p(kw_values[5])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_tint = DATA_GET_PTR(mrb, kw_values[5], &mrb_Color_struct, Color);

}
        

DrawTextureNPatch(*parameter_texture, *parameter_nPatchInfo, *parameter_dest, *parameter_origin, parameter_rotation, *parameter_tint);
return mrb_nil_value();
}
      
//void DrawTexturePoly
static mrb_value
mrb_DrawTexturePoly(mrb_state* mrb, mrb_value self) {
Texture *parameter_texture;
Vector2 *parameter_center;
Vector2 *parameter_points;
Vector2 *parameter_texcoords;
int parameter_pointCount;
Color *parameter_tint;

uint32_t kw_num = 6;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "texture"),
mrb_intern_lit(mrb, "center"),
mrb_intern_lit(mrb, "points"),
mrb_intern_lit(mrb, "texcoords"),
mrb_intern_lit(mrb, "pointCount"),
mrb_intern_lit(mrb, "tint")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_texture = DATA_GET_PTR(mrb, kw_values[0], &mrb_Texture_struct, Texture);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_center = DATA_GET_PTR(mrb, kw_values[1], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_points = DATA_GET_PTR(mrb, kw_values[2], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_texcoords = DATA_GET_PTR(mrb, kw_values[3], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_pointCount = mrb_as_int(mrb, kw_values[4]);
}
        
if (mrb_undef_p(kw_values[5])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_tint = DATA_GET_PTR(mrb, kw_values[5], &mrb_Color_struct, Color);

}
        

DrawTexturePoly(*parameter_texture, *parameter_center, parameter_points, parameter_texcoords, parameter_pointCount, *parameter_tint);
return mrb_nil_value();
}
      
//void DrawTexturePro
static mrb_value
mrb_DrawTexturePro(mrb_state* mrb, mrb_value self) {
Texture *parameter_texture;
Rectangle *parameter_source;
Rectangle *parameter_dest;
Vector2 *parameter_origin;
float parameter_rotation;
Color *parameter_tint;

uint32_t kw_num = 6;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "texture"),
mrb_intern_lit(mrb, "source"),
mrb_intern_lit(mrb, "dest"),
mrb_intern_lit(mrb, "origin"),
mrb_intern_lit(mrb, "rotation"),
mrb_intern_lit(mrb, "tint")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_texture = DATA_GET_PTR(mrb, kw_values[0], &mrb_Texture_struct, Texture);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_source = DATA_GET_PTR(mrb, kw_values[1], &mrb_Rectangle_struct, Rectangle);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_dest = DATA_GET_PTR(mrb, kw_values[2], &mrb_Rectangle_struct, Rectangle);

}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_origin = DATA_GET_PTR(mrb, kw_values[3], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_rotation = mrb_as_float(mrb, kw_values[4]);
}
        
if (mrb_undef_p(kw_values[5])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_tint = DATA_GET_PTR(mrb, kw_values[5], &mrb_Color_struct, Color);

}
        

DrawTexturePro(*parameter_texture, *parameter_source, *parameter_dest, *parameter_origin, parameter_rotation, *parameter_tint);
return mrb_nil_value();
}
      
//void DrawTextureQuad
static mrb_value
mrb_DrawTextureQuad(mrb_state* mrb, mrb_value self) {
Texture *parameter_texture;
Vector2 *parameter_tiling;
Vector2 *parameter_offset;
Rectangle *parameter_quad;
Color *parameter_tint;

uint32_t kw_num = 5;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "texture"),
mrb_intern_lit(mrb, "tiling"),
mrb_intern_lit(mrb, "offset"),
mrb_intern_lit(mrb, "quad"),
mrb_intern_lit(mrb, "tint")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_texture = DATA_GET_PTR(mrb, kw_values[0], &mrb_Texture_struct, Texture);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_tiling = DATA_GET_PTR(mrb, kw_values[1], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_offset = DATA_GET_PTR(mrb, kw_values[2], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_quad = DATA_GET_PTR(mrb, kw_values[3], &mrb_Rectangle_struct, Rectangle);

}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_tint = DATA_GET_PTR(mrb, kw_values[4], &mrb_Color_struct, Color);

}
        

DrawTextureQuad(*parameter_texture, *parameter_tiling, *parameter_offset, *parameter_quad, *parameter_tint);
return mrb_nil_value();
}
      
//void DrawTextureRec
static mrb_value
mrb_DrawTextureRec(mrb_state* mrb, mrb_value self) {
Texture *parameter_texture;
Rectangle *parameter_source;
Vector2 *parameter_position;
Color *parameter_tint;

uint32_t kw_num = 4;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "texture"),
mrb_intern_lit(mrb, "source"),
mrb_intern_lit(mrb, "position"),
mrb_intern_lit(mrb, "tint")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_texture = DATA_GET_PTR(mrb, kw_values[0], &mrb_Texture_struct, Texture);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_source = DATA_GET_PTR(mrb, kw_values[1], &mrb_Rectangle_struct, Rectangle);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_position = DATA_GET_PTR(mrb, kw_values[2], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_tint = DATA_GET_PTR(mrb, kw_values[3], &mrb_Color_struct, Color);

}
        

DrawTextureRec(*parameter_texture, *parameter_source, *parameter_position, *parameter_tint);
return mrb_nil_value();
}
      
//void DrawTextureTiled
static mrb_value
mrb_DrawTextureTiled(mrb_state* mrb, mrb_value self) {
Texture *parameter_texture;
Rectangle *parameter_source;
Rectangle *parameter_dest;
Vector2 *parameter_origin;
float parameter_rotation;
float parameter_scale;
Color *parameter_tint;

uint32_t kw_num = 7;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "texture"),
mrb_intern_lit(mrb, "source"),
mrb_intern_lit(mrb, "dest"),
mrb_intern_lit(mrb, "origin"),
mrb_intern_lit(mrb, "rotation"),
mrb_intern_lit(mrb, "scale"),
mrb_intern_lit(mrb, "tint")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_texture = DATA_GET_PTR(mrb, kw_values[0], &mrb_Texture_struct, Texture);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_source = DATA_GET_PTR(mrb, kw_values[1], &mrb_Rectangle_struct, Rectangle);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_dest = DATA_GET_PTR(mrb, kw_values[2], &mrb_Rectangle_struct, Rectangle);

}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_origin = DATA_GET_PTR(mrb, kw_values[3], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_rotation = mrb_as_float(mrb, kw_values[4]);
}
        
if (mrb_undef_p(kw_values[5])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_scale = mrb_as_float(mrb, kw_values[5]);
}
        
if (mrb_undef_p(kw_values[6])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_tint = DATA_GET_PTR(mrb, kw_values[6], &mrb_Color_struct, Color);

}
        

DrawTextureTiled(*parameter_texture, *parameter_source, *parameter_dest, *parameter_origin, parameter_rotation, parameter_scale, *parameter_tint);
return mrb_nil_value();
}
      
//void DrawTextureV
static mrb_value
mrb_DrawTextureV(mrb_state* mrb, mrb_value self) {
Texture *parameter_texture;
Vector2 *parameter_position;
Color *parameter_tint;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "texture"),
mrb_intern_lit(mrb, "position"),
mrb_intern_lit(mrb, "tint")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_texture = DATA_GET_PTR(mrb, kw_values[0], &mrb_Texture_struct, Texture);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_position = DATA_GET_PTR(mrb, kw_values[1], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_tint = DATA_GET_PTR(mrb, kw_values[2], &mrb_Color_struct, Color);

}
        

DrawTextureV(*parameter_texture, *parameter_position, *parameter_tint);
return mrb_nil_value();
}
      
//void DrawTriangle
static mrb_value
mrb_DrawTriangle(mrb_state* mrb, mrb_value self) {
Vector2 *parameter_v1;
Vector2 *parameter_v2;
Vector2 *parameter_v3;
Color *parameter_color;

uint32_t kw_num = 4;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "v1"),
mrb_intern_lit(mrb, "v2"),
mrb_intern_lit(mrb, "v3"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_v1 = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_v2 = DATA_GET_PTR(mrb, kw_values[1], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_v3 = DATA_GET_PTR(mrb, kw_values[2], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[3], &mrb_Color_struct, Color);

}
        

DrawTriangle(*parameter_v1, *parameter_v2, *parameter_v3, *parameter_color);
return mrb_nil_value();
}
      
//void DrawTriangle3D
static mrb_value
mrb_DrawTriangle3D(mrb_state* mrb, mrb_value self) {
Vector3 *parameter_v1;
Vector3 *parameter_v2;
Vector3 *parameter_v3;
Color *parameter_color;

uint32_t kw_num = 4;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "v1"),
mrb_intern_lit(mrb, "v2"),
mrb_intern_lit(mrb, "v3"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_v1 = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector3_struct, Vector3);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_v2 = DATA_GET_PTR(mrb, kw_values[1], &mrb_Vector3_struct, Vector3);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_v3 = DATA_GET_PTR(mrb, kw_values[2], &mrb_Vector3_struct, Vector3);

}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[3], &mrb_Color_struct, Color);

}
        

DrawTriangle3D(*parameter_v1, *parameter_v2, *parameter_v3, *parameter_color);
return mrb_nil_value();
}
      
//void DrawTriangleFan
static mrb_value
mrb_DrawTriangleFan(mrb_state* mrb, mrb_value self) {
Vector2 *parameter_points;
int parameter_pointCount;
Color *parameter_color;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "points"),
mrb_intern_lit(mrb, "pointCount"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_points = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_pointCount = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[2], &mrb_Color_struct, Color);

}
        

DrawTriangleFan(parameter_points, parameter_pointCount, *parameter_color);
return mrb_nil_value();
}
      
//void DrawTriangleLines
static mrb_value
mrb_DrawTriangleLines(mrb_state* mrb, mrb_value self) {
Vector2 *parameter_v1;
Vector2 *parameter_v2;
Vector2 *parameter_v3;
Color *parameter_color;

uint32_t kw_num = 4;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "v1"),
mrb_intern_lit(mrb, "v2"),
mrb_intern_lit(mrb, "v3"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_v1 = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_v2 = DATA_GET_PTR(mrb, kw_values[1], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_v3 = DATA_GET_PTR(mrb, kw_values[2], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[3], &mrb_Color_struct, Color);

}
        

DrawTriangleLines(*parameter_v1, *parameter_v2, *parameter_v3, *parameter_color);
return mrb_nil_value();
}
      
//void DrawTriangleStrip
static mrb_value
mrb_DrawTriangleStrip(mrb_state* mrb, mrb_value self) {
Vector2 *parameter_points;
int parameter_pointCount;
Color *parameter_color;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "points"),
mrb_intern_lit(mrb, "pointCount"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_points = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_pointCount = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[2], &mrb_Color_struct, Color);

}
        

DrawTriangleStrip(parameter_points, parameter_pointCount, *parameter_color);
return mrb_nil_value();
}
      
//void DrawTriangleStrip3D
static mrb_value
mrb_DrawTriangleStrip3D(mrb_state* mrb, mrb_value self) {
Vector3 *parameter_points;
int parameter_pointCount;
Color *parameter_color;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "points"),
mrb_intern_lit(mrb, "pointCount"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_points = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector3_struct, Vector3);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_pointCount = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[2], &mrb_Color_struct, Color);

}
        

DrawTriangleStrip3D(parameter_points, parameter_pointCount, *parameter_color);
return mrb_nil_value();
}
      
//void EnableCursor
static mrb_value
mrb_EnableCursor(mrb_state* mrb, mrb_value self) {

EnableCursor();
return mrb_nil_value();
}
      
//void EndBlendMode
static mrb_value
mrb_EndBlendMode(mrb_state* mrb, mrb_value self) {

EndBlendMode();
return mrb_nil_value();
}
      
//void EndDrawing
static mrb_value
mrb_EndDrawing(mrb_state* mrb, mrb_value self) {

EndDrawing();
return mrb_nil_value();
}
      
//void EndMode2D
static mrb_value
mrb_EndMode2D(mrb_state* mrb, mrb_value self) {

EndMode2D();
return mrb_nil_value();
}
      
//void EndMode3D
static mrb_value
mrb_EndMode3D(mrb_state* mrb, mrb_value self) {

EndMode3D();
return mrb_nil_value();
}
      
//void EndScissorMode
static mrb_value
mrb_EndScissorMode(mrb_state* mrb, mrb_value self) {

EndScissorMode();
return mrb_nil_value();
}
      
//void EndShaderMode
static mrb_value
mrb_EndShaderMode(mrb_state* mrb, mrb_value self) {

EndShaderMode();
return mrb_nil_value();
}
      
//void EndTextureMode
static mrb_value
mrb_EndTextureMode(mrb_state* mrb, mrb_value self) {

EndTextureMode();
return mrb_nil_value();
}
      
//void EndVrStereoMode
static mrb_value
mrb_EndVrStereoMode(mrb_state* mrb, mrb_value self) {

EndVrStereoMode();
return mrb_nil_value();
}
      
//bool ExportFontAsCode
static mrb_value
mrb_ExportFontAsCode(mrb_state* mrb, mrb_value self) {
Font *parameter_font;
char * parameter_fileName;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "font"),
mrb_intern_lit(mrb, "fileName")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_font = DATA_GET_PTR(mrb, kw_values[0], &mrb_Font_struct, Font);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_fileName = mrb_str_to_cstr(mrb, kw_values[1]);
}
        
bool return_of_ExportFontAsCode;

return_of_ExportFontAsCode = ExportFontAsCode(*parameter_font, parameter_fileName);
return mrb_bool_value(return_of_ExportFontAsCode);
}
      
//bool ExportImage
static mrb_value
mrb_ExportImage(mrb_state* mrb, mrb_value self) {
Image *parameter_image;
char * parameter_fileName;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "image"),
mrb_intern_lit(mrb, "fileName")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_image = DATA_GET_PTR(mrb, kw_values[0], &mrb_Image_struct, Image);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_fileName = mrb_str_to_cstr(mrb, kw_values[1]);
}
        
bool return_of_ExportImage;

return_of_ExportImage = ExportImage(*parameter_image, parameter_fileName);
return mrb_bool_value(return_of_ExportImage);
}
      
//bool ExportImageAsCode
static mrb_value
mrb_ExportImageAsCode(mrb_state* mrb, mrb_value self) {
Image *parameter_image;
char * parameter_fileName;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "image"),
mrb_intern_lit(mrb, "fileName")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_image = DATA_GET_PTR(mrb, kw_values[0], &mrb_Image_struct, Image);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_fileName = mrb_str_to_cstr(mrb, kw_values[1]);
}
        
bool return_of_ExportImageAsCode;

return_of_ExportImageAsCode = ExportImageAsCode(*parameter_image, parameter_fileName);
return mrb_bool_value(return_of_ExportImageAsCode);
}
      
//bool ExportMesh
static mrb_value
mrb_ExportMesh(mrb_state* mrb, mrb_value self) {
Mesh *parameter_mesh;
char * parameter_fileName;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "mesh"),
mrb_intern_lit(mrb, "fileName")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_mesh = DATA_GET_PTR(mrb, kw_values[0], &mrb_Mesh_struct, Mesh);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_fileName = mrb_str_to_cstr(mrb, kw_values[1]);
}
        
bool return_of_ExportMesh;

return_of_ExportMesh = ExportMesh(*parameter_mesh, parameter_fileName);
return mrb_bool_value(return_of_ExportMesh);
}
      
//bool ExportWave
static mrb_value
mrb_ExportWave(mrb_state* mrb, mrb_value self) {
Wave *parameter_wave;
char * parameter_fileName;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "wave"),
mrb_intern_lit(mrb, "fileName")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_wave = DATA_GET_PTR(mrb, kw_values[0], &mrb_Wave_struct, Wave);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_fileName = mrb_str_to_cstr(mrb, kw_values[1]);
}
        
bool return_of_ExportWave;

return_of_ExportWave = ExportWave(*parameter_wave, parameter_fileName);
return mrb_bool_value(return_of_ExportWave);
}
      
//bool ExportWaveAsCode
static mrb_value
mrb_ExportWaveAsCode(mrb_state* mrb, mrb_value self) {
Wave *parameter_wave;
char * parameter_fileName;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "wave"),
mrb_intern_lit(mrb, "fileName")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_wave = DATA_GET_PTR(mrb, kw_values[0], &mrb_Wave_struct, Wave);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_fileName = mrb_str_to_cstr(mrb, kw_values[1]);
}
        
bool return_of_ExportWaveAsCode;

return_of_ExportWaveAsCode = ExportWaveAsCode(*parameter_wave, parameter_fileName);
return mrb_bool_value(return_of_ExportWaveAsCode);
}
      
//Color Fade
static mrb_value
mrb_Fade(mrb_state* mrb, mrb_value self) {
Color *parameter_color;
float parameter_alpha;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "color"),
mrb_intern_lit(mrb, "alpha")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[0], &mrb_Color_struct, Color);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_alpha = mrb_as_float(mrb, kw_values[1]);
}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *color_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Color_struct.struct_name);
Color *return_of_Fade = (Color *)mrb_malloc(mrb, sizeof(Color));

*return_of_Fade = Fade(*parameter_color, parameter_alpha);
return mrb_obj_value(Data_Wrap_Struct(mrb, color_mrb_class, &mrb_Color_struct, return_of_Fade));
}
      
//bool FileExists
static mrb_value
mrb_FileExists(mrb_state* mrb, mrb_value self) {
char * parameter_fileName;

mrb_get_args(mrb, "z", &parameter_fileName);
bool return_of_FileExists;

return_of_FileExists = FileExists(parameter_fileName);
return mrb_bool_value(return_of_FileExists);
}
      
//Image GenImageCellular
static mrb_value
mrb_GenImageCellular(mrb_state* mrb, mrb_value self) {
int parameter_width;
int parameter_height;
int parameter_tileSize;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "width"),
mrb_intern_lit(mrb, "height"),
mrb_intern_lit(mrb, "tileSize")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_width = mrb_as_int(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_height = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_tileSize = mrb_as_int(mrb, kw_values[2]);
}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *image_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Image_struct.struct_name);
Image *return_of_GenImageCellular = (Image *)mrb_malloc(mrb, sizeof(Image));

*return_of_GenImageCellular = GenImageCellular(parameter_width, parameter_height, parameter_tileSize);
return mrb_obj_value(Data_Wrap_Struct(mrb, image_mrb_class, &mrb_Image_struct, return_of_GenImageCellular));
}
      
//Image GenImageChecked
static mrb_value
mrb_GenImageChecked(mrb_state* mrb, mrb_value self) {
int parameter_width;
int parameter_height;
int parameter_checksX;
int parameter_checksY;
Color *parameter_col1;
Color *parameter_col2;

uint32_t kw_num = 6;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "width"),
mrb_intern_lit(mrb, "height"),
mrb_intern_lit(mrb, "checksX"),
mrb_intern_lit(mrb, "checksY"),
mrb_intern_lit(mrb, "col1"),
mrb_intern_lit(mrb, "col2")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_width = mrb_as_int(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_height = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_checksX = mrb_as_int(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_checksY = mrb_as_int(mrb, kw_values[3]);
}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_col1 = DATA_GET_PTR(mrb, kw_values[4], &mrb_Color_struct, Color);

}
        
if (mrb_undef_p(kw_values[5])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_col2 = DATA_GET_PTR(mrb, kw_values[5], &mrb_Color_struct, Color);

}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *image_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Image_struct.struct_name);
Image *return_of_GenImageChecked = (Image *)mrb_malloc(mrb, sizeof(Image));

*return_of_GenImageChecked = GenImageChecked(parameter_width, parameter_height, parameter_checksX, parameter_checksY, *parameter_col1, *parameter_col2);
return mrb_obj_value(Data_Wrap_Struct(mrb, image_mrb_class, &mrb_Image_struct, return_of_GenImageChecked));
}
      
//Image GenImageColor
static mrb_value
mrb_GenImageColor(mrb_state* mrb, mrb_value self) {
int parameter_width;
int parameter_height;
Color *parameter_color;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "width"),
mrb_intern_lit(mrb, "height"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_width = mrb_as_int(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_height = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[2], &mrb_Color_struct, Color);

}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *image_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Image_struct.struct_name);
Image *return_of_GenImageColor = (Image *)mrb_malloc(mrb, sizeof(Image));

*return_of_GenImageColor = GenImageColor(parameter_width, parameter_height, *parameter_color);
return mrb_obj_value(Data_Wrap_Struct(mrb, image_mrb_class, &mrb_Image_struct, return_of_GenImageColor));
}
      
//Image GenImageGradientH
static mrb_value
mrb_GenImageGradientH(mrb_state* mrb, mrb_value self) {
int parameter_width;
int parameter_height;
Color *parameter_left;
Color *parameter_right;

uint32_t kw_num = 4;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "width"),
mrb_intern_lit(mrb, "height"),
mrb_intern_lit(mrb, "left"),
mrb_intern_lit(mrb, "right")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_width = mrb_as_int(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_height = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_left = DATA_GET_PTR(mrb, kw_values[2], &mrb_Color_struct, Color);

}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_right = DATA_GET_PTR(mrb, kw_values[3], &mrb_Color_struct, Color);

}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *image_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Image_struct.struct_name);
Image *return_of_GenImageGradientH = (Image *)mrb_malloc(mrb, sizeof(Image));

*return_of_GenImageGradientH = GenImageGradientH(parameter_width, parameter_height, *parameter_left, *parameter_right);
return mrb_obj_value(Data_Wrap_Struct(mrb, image_mrb_class, &mrb_Image_struct, return_of_GenImageGradientH));
}
      
//Image GenImageGradientRadial
static mrb_value
mrb_GenImageGradientRadial(mrb_state* mrb, mrb_value self) {
int parameter_width;
int parameter_height;
float parameter_density;
Color *parameter_inner;
Color *parameter_outer;

uint32_t kw_num = 5;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "width"),
mrb_intern_lit(mrb, "height"),
mrb_intern_lit(mrb, "density"),
mrb_intern_lit(mrb, "inner"),
mrb_intern_lit(mrb, "outer")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_width = mrb_as_int(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_height = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_density = mrb_as_float(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_inner = DATA_GET_PTR(mrb, kw_values[3], &mrb_Color_struct, Color);

}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_outer = DATA_GET_PTR(mrb, kw_values[4], &mrb_Color_struct, Color);

}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *image_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Image_struct.struct_name);
Image *return_of_GenImageGradientRadial = (Image *)mrb_malloc(mrb, sizeof(Image));

*return_of_GenImageGradientRadial = GenImageGradientRadial(parameter_width, parameter_height, parameter_density, *parameter_inner, *parameter_outer);
return mrb_obj_value(Data_Wrap_Struct(mrb, image_mrb_class, &mrb_Image_struct, return_of_GenImageGradientRadial));
}
      
//Image GenImageGradientV
static mrb_value
mrb_GenImageGradientV(mrb_state* mrb, mrb_value self) {
int parameter_width;
int parameter_height;
Color *parameter_top;
Color *parameter_bottom;

uint32_t kw_num = 4;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "width"),
mrb_intern_lit(mrb, "height"),
mrb_intern_lit(mrb, "top"),
mrb_intern_lit(mrb, "bottom")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_width = mrb_as_int(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_height = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_top = DATA_GET_PTR(mrb, kw_values[2], &mrb_Color_struct, Color);

}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_bottom = DATA_GET_PTR(mrb, kw_values[3], &mrb_Color_struct, Color);

}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *image_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Image_struct.struct_name);
Image *return_of_GenImageGradientV = (Image *)mrb_malloc(mrb, sizeof(Image));

*return_of_GenImageGradientV = GenImageGradientV(parameter_width, parameter_height, *parameter_top, *parameter_bottom);
return mrb_obj_value(Data_Wrap_Struct(mrb, image_mrb_class, &mrb_Image_struct, return_of_GenImageGradientV));
}
      
//Image GenImageWhiteNoise
static mrb_value
mrb_GenImageWhiteNoise(mrb_state* mrb, mrb_value self) {
int parameter_width;
int parameter_height;
float parameter_factor;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "width"),
mrb_intern_lit(mrb, "height"),
mrb_intern_lit(mrb, "factor")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_width = mrb_as_int(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_height = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_factor = mrb_as_float(mrb, kw_values[2]);
}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *image_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Image_struct.struct_name);
Image *return_of_GenImageWhiteNoise = (Image *)mrb_malloc(mrb, sizeof(Image));

*return_of_GenImageWhiteNoise = GenImageWhiteNoise(parameter_width, parameter_height, parameter_factor);
return mrb_obj_value(Data_Wrap_Struct(mrb, image_mrb_class, &mrb_Image_struct, return_of_GenImageWhiteNoise));
}
      
//void GenMeshBinormals
static mrb_value
mrb_GenMeshBinormals(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_mesh;

mrb_get_args(mrb, "o", &parameter_mrb_mesh);
Mesh *parameter_mesh;
parameter_mesh = DATA_GET_PTR(mrb, parameter_mrb_mesh, &mrb_Mesh_struct, Mesh);

GenMeshBinormals(parameter_mesh);
return mrb_nil_value();
}
      
//Mesh GenMeshCone
static mrb_value
mrb_GenMeshCone(mrb_state* mrb, mrb_value self) {
float parameter_radius;
float parameter_height;
int parameter_slices;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "radius"),
mrb_intern_lit(mrb, "height"),
mrb_intern_lit(mrb, "slices")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_radius = mrb_as_float(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_height = mrb_as_float(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_slices = mrb_as_int(mrb, kw_values[2]);
}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *mesh_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Mesh_struct.struct_name);
Mesh *return_of_GenMeshCone = (Mesh *)mrb_malloc(mrb, sizeof(Mesh));

*return_of_GenMeshCone = GenMeshCone(parameter_radius, parameter_height, parameter_slices);
return mrb_obj_value(Data_Wrap_Struct(mrb, mesh_mrb_class, &mrb_Mesh_struct, return_of_GenMeshCone));
}
      
//Mesh GenMeshCube
static mrb_value
mrb_GenMeshCube(mrb_state* mrb, mrb_value self) {
float parameter_width;
float parameter_height;
float parameter_length;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "width"),
mrb_intern_lit(mrb, "height"),
mrb_intern_lit(mrb, "length")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_width = mrb_as_float(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_height = mrb_as_float(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_length = mrb_as_float(mrb, kw_values[2]);
}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *mesh_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Mesh_struct.struct_name);
Mesh *return_of_GenMeshCube = (Mesh *)mrb_malloc(mrb, sizeof(Mesh));

*return_of_GenMeshCube = GenMeshCube(parameter_width, parameter_height, parameter_length);
return mrb_obj_value(Data_Wrap_Struct(mrb, mesh_mrb_class, &mrb_Mesh_struct, return_of_GenMeshCube));
}
      
//Mesh GenMeshCubicmap
static mrb_value
mrb_GenMeshCubicmap(mrb_state* mrb, mrb_value self) {
Image *parameter_cubicmap;
Vector3 *parameter_cubeSize;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "cubicmap"),
mrb_intern_lit(mrb, "cubeSize")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_cubicmap = DATA_GET_PTR(mrb, kw_values[0], &mrb_Image_struct, Image);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_cubeSize = DATA_GET_PTR(mrb, kw_values[1], &mrb_Vector3_struct, Vector3);

}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *mesh_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Mesh_struct.struct_name);
Mesh *return_of_GenMeshCubicmap = (Mesh *)mrb_malloc(mrb, sizeof(Mesh));

*return_of_GenMeshCubicmap = GenMeshCubicmap(*parameter_cubicmap, *parameter_cubeSize);
return mrb_obj_value(Data_Wrap_Struct(mrb, mesh_mrb_class, &mrb_Mesh_struct, return_of_GenMeshCubicmap));
}
      
//Mesh GenMeshCylinder
static mrb_value
mrb_GenMeshCylinder(mrb_state* mrb, mrb_value self) {
float parameter_radius;
float parameter_height;
int parameter_slices;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "radius"),
mrb_intern_lit(mrb, "height"),
mrb_intern_lit(mrb, "slices")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_radius = mrb_as_float(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_height = mrb_as_float(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_slices = mrb_as_int(mrb, kw_values[2]);
}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *mesh_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Mesh_struct.struct_name);
Mesh *return_of_GenMeshCylinder = (Mesh *)mrb_malloc(mrb, sizeof(Mesh));

*return_of_GenMeshCylinder = GenMeshCylinder(parameter_radius, parameter_height, parameter_slices);
return mrb_obj_value(Data_Wrap_Struct(mrb, mesh_mrb_class, &mrb_Mesh_struct, return_of_GenMeshCylinder));
}
      
//Mesh GenMeshHeightmap
static mrb_value
mrb_GenMeshHeightmap(mrb_state* mrb, mrb_value self) {
Image *parameter_heightmap;
Vector3 *parameter_size;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "heightmap"),
mrb_intern_lit(mrb, "size")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_heightmap = DATA_GET_PTR(mrb, kw_values[0], &mrb_Image_struct, Image);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_size = DATA_GET_PTR(mrb, kw_values[1], &mrb_Vector3_struct, Vector3);

}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *mesh_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Mesh_struct.struct_name);
Mesh *return_of_GenMeshHeightmap = (Mesh *)mrb_malloc(mrb, sizeof(Mesh));

*return_of_GenMeshHeightmap = GenMeshHeightmap(*parameter_heightmap, *parameter_size);
return mrb_obj_value(Data_Wrap_Struct(mrb, mesh_mrb_class, &mrb_Mesh_struct, return_of_GenMeshHeightmap));
}
      
//Mesh GenMeshHemiSphere
static mrb_value
mrb_GenMeshHemiSphere(mrb_state* mrb, mrb_value self) {
float parameter_radius;
int parameter_rings;
int parameter_slices;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "radius"),
mrb_intern_lit(mrb, "rings"),
mrb_intern_lit(mrb, "slices")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_radius = mrb_as_float(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_rings = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_slices = mrb_as_int(mrb, kw_values[2]);
}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *mesh_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Mesh_struct.struct_name);
Mesh *return_of_GenMeshHemiSphere = (Mesh *)mrb_malloc(mrb, sizeof(Mesh));

*return_of_GenMeshHemiSphere = GenMeshHemiSphere(parameter_radius, parameter_rings, parameter_slices);
return mrb_obj_value(Data_Wrap_Struct(mrb, mesh_mrb_class, &mrb_Mesh_struct, return_of_GenMeshHemiSphere));
}
      
//Mesh GenMeshKnot
static mrb_value
mrb_GenMeshKnot(mrb_state* mrb, mrb_value self) {
float parameter_radius;
float parameter_size;
int parameter_radSeg;
int parameter_sides;

uint32_t kw_num = 4;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "radius"),
mrb_intern_lit(mrb, "size"),
mrb_intern_lit(mrb, "radSeg"),
mrb_intern_lit(mrb, "sides")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_radius = mrb_as_float(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_size = mrb_as_float(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_radSeg = mrb_as_int(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_sides = mrb_as_int(mrb, kw_values[3]);
}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *mesh_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Mesh_struct.struct_name);
Mesh *return_of_GenMeshKnot = (Mesh *)mrb_malloc(mrb, sizeof(Mesh));

*return_of_GenMeshKnot = GenMeshKnot(parameter_radius, parameter_size, parameter_radSeg, parameter_sides);
return mrb_obj_value(Data_Wrap_Struct(mrb, mesh_mrb_class, &mrb_Mesh_struct, return_of_GenMeshKnot));
}
      
//Mesh GenMeshPlane
static mrb_value
mrb_GenMeshPlane(mrb_state* mrb, mrb_value self) {
float parameter_width;
float parameter_length;
int parameter_resX;
int parameter_resZ;

uint32_t kw_num = 4;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "width"),
mrb_intern_lit(mrb, "length"),
mrb_intern_lit(mrb, "resX"),
mrb_intern_lit(mrb, "resZ")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_width = mrb_as_float(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_length = mrb_as_float(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_resX = mrb_as_int(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_resZ = mrb_as_int(mrb, kw_values[3]);
}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *mesh_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Mesh_struct.struct_name);
Mesh *return_of_GenMeshPlane = (Mesh *)mrb_malloc(mrb, sizeof(Mesh));

*return_of_GenMeshPlane = GenMeshPlane(parameter_width, parameter_length, parameter_resX, parameter_resZ);
return mrb_obj_value(Data_Wrap_Struct(mrb, mesh_mrb_class, &mrb_Mesh_struct, return_of_GenMeshPlane));
}
      
//Mesh GenMeshPoly
static mrb_value
mrb_GenMeshPoly(mrb_state* mrb, mrb_value self) {
int parameter_sides;
float parameter_radius;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "sides"),
mrb_intern_lit(mrb, "radius")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_sides = mrb_as_int(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_radius = mrb_as_float(mrb, kw_values[1]);
}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *mesh_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Mesh_struct.struct_name);
Mesh *return_of_GenMeshPoly = (Mesh *)mrb_malloc(mrb, sizeof(Mesh));

*return_of_GenMeshPoly = GenMeshPoly(parameter_sides, parameter_radius);
return mrb_obj_value(Data_Wrap_Struct(mrb, mesh_mrb_class, &mrb_Mesh_struct, return_of_GenMeshPoly));
}
      
//Mesh GenMeshSphere
static mrb_value
mrb_GenMeshSphere(mrb_state* mrb, mrb_value self) {
float parameter_radius;
int parameter_rings;
int parameter_slices;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "radius"),
mrb_intern_lit(mrb, "rings"),
mrb_intern_lit(mrb, "slices")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_radius = mrb_as_float(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_rings = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_slices = mrb_as_int(mrb, kw_values[2]);
}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *mesh_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Mesh_struct.struct_name);
Mesh *return_of_GenMeshSphere = (Mesh *)mrb_malloc(mrb, sizeof(Mesh));

*return_of_GenMeshSphere = GenMeshSphere(parameter_radius, parameter_rings, parameter_slices);
return mrb_obj_value(Data_Wrap_Struct(mrb, mesh_mrb_class, &mrb_Mesh_struct, return_of_GenMeshSphere));
}
      
//void GenMeshTangents
static mrb_value
mrb_GenMeshTangents(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_mesh;

mrb_get_args(mrb, "o", &parameter_mrb_mesh);
Mesh *parameter_mesh;
parameter_mesh = DATA_GET_PTR(mrb, parameter_mrb_mesh, &mrb_Mesh_struct, Mesh);

GenMeshTangents(parameter_mesh);
return mrb_nil_value();
}
      
//Mesh GenMeshTorus
static mrb_value
mrb_GenMeshTorus(mrb_state* mrb, mrb_value self) {
float parameter_radius;
float parameter_size;
int parameter_radSeg;
int parameter_sides;

uint32_t kw_num = 4;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "radius"),
mrb_intern_lit(mrb, "size"),
mrb_intern_lit(mrb, "radSeg"),
mrb_intern_lit(mrb, "sides")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_radius = mrb_as_float(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_size = mrb_as_float(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_radSeg = mrb_as_int(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_sides = mrb_as_int(mrb, kw_values[3]);
}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *mesh_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Mesh_struct.struct_name);
Mesh *return_of_GenMeshTorus = (Mesh *)mrb_malloc(mrb, sizeof(Mesh));

*return_of_GenMeshTorus = GenMeshTorus(parameter_radius, parameter_size, parameter_radSeg, parameter_sides);
return mrb_obj_value(Data_Wrap_Struct(mrb, mesh_mrb_class, &mrb_Mesh_struct, return_of_GenMeshTorus));
}
      
//const char * GetApplicationDirectory
static mrb_value
mrb_GetApplicationDirectory(mrb_state* mrb, mrb_value self) {
const char * return_of_GetApplicationDirectory;

return_of_GetApplicationDirectory = GetApplicationDirectory();
return mrb_str_new_cstr(mrb, return_of_GetApplicationDirectory);
}
      
//Matrix GetCameraMatrix2D
static mrb_value
mrb_GetCameraMatrix2D(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_camera;

mrb_get_args(mrb, "o", &parameter_mrb_camera);
Camera2D *parameter_camera;
parameter_camera = DATA_GET_PTR(mrb, parameter_mrb_camera, &mrb_Camera2D_struct, Camera2D);
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *matrix_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Matrix_struct.struct_name);
Matrix *return_of_GetCameraMatrix2D = (Matrix *)mrb_malloc(mrb, sizeof(Matrix));

*return_of_GetCameraMatrix2D = GetCameraMatrix2D(*parameter_camera);
return mrb_obj_value(Data_Wrap_Struct(mrb, matrix_mrb_class, &mrb_Matrix_struct, return_of_GetCameraMatrix2D));
}
      
//int GetCharPressed
static mrb_value
mrb_GetCharPressed(mrb_state* mrb, mrb_value self) {
int return_of_GetCharPressed;

return_of_GetCharPressed = GetCharPressed();
return mrb_fixnum_value(return_of_GetCharPressed);
}
      
//const char * GetClipboardText
static mrb_value
mrb_GetClipboardText(mrb_state* mrb, mrb_value self) {
const char * return_of_GetClipboardText;

return_of_GetClipboardText = GetClipboardText();
return mrb_str_new_cstr(mrb, return_of_GetClipboardText);
}
      
//int GetCodepoint
static mrb_value
mrb_GetCodepoint(mrb_state* mrb, mrb_value self) {
char * parameter_text;
int parameter_bytesProcessed;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "text"),
mrb_intern_lit(mrb, "bytesProcessed")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_text = mrb_str_to_cstr(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_bytesProcessed = mrb_as_int(mrb, kw_values[1]);
}
        
int return_of_GetCodepoint;

return_of_GetCodepoint = GetCodepoint(parameter_text, (int *)&parameter_bytesProcessed);
return mrb_fixnum_value(return_of_GetCodepoint);
}
      
//int GetCodepointCount
static mrb_value
mrb_GetCodepointCount(mrb_state* mrb, mrb_value self) {
char * parameter_text;

mrb_get_args(mrb, "z", &parameter_text);
int return_of_GetCodepointCount;

return_of_GetCodepointCount = GetCodepointCount(parameter_text);
return mrb_fixnum_value(return_of_GetCodepointCount);
}
      
//Rectangle GetCollisionRec
static mrb_value
mrb_GetCollisionRec(mrb_state* mrb, mrb_value self) {
Rectangle *parameter_rec1;
Rectangle *parameter_rec2;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "rec1"),
mrb_intern_lit(mrb, "rec2")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_rec1 = DATA_GET_PTR(mrb, kw_values[0], &mrb_Rectangle_struct, Rectangle);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_rec2 = DATA_GET_PTR(mrb, kw_values[1], &mrb_Rectangle_struct, Rectangle);

}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *rectangle_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Rectangle_struct.struct_name);
Rectangle *return_of_GetCollisionRec = (Rectangle *)mrb_malloc(mrb, sizeof(Rectangle));

*return_of_GetCollisionRec = GetCollisionRec(*parameter_rec1, *parameter_rec2);
return mrb_obj_value(Data_Wrap_Struct(mrb, rectangle_mrb_class, &mrb_Rectangle_struct, return_of_GetCollisionRec));
}
      
//Color GetColor
static mrb_value
mrb_GetColor(mrb_state* mrb, mrb_value self) {
mrb_int parameter_hexValue;

mrb_get_args(mrb, "i", &parameter_hexValue);
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *color_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Color_struct.struct_name);
Color *return_of_GetColor = (Color *)mrb_malloc(mrb, sizeof(Color));

*return_of_GetColor = GetColor(parameter_hexValue);
return mrb_obj_value(Data_Wrap_Struct(mrb, color_mrb_class, &mrb_Color_struct, return_of_GetColor));
}
      
//int GetCurrentMonitor
static mrb_value
mrb_GetCurrentMonitor(mrb_state* mrb, mrb_value self) {
int return_of_GetCurrentMonitor;

return_of_GetCurrentMonitor = GetCurrentMonitor();
return mrb_fixnum_value(return_of_GetCurrentMonitor);
}
      
//const char * GetDirectoryPath
static mrb_value
mrb_GetDirectoryPath(mrb_state* mrb, mrb_value self) {
char * parameter_filePath;

mrb_get_args(mrb, "z", &parameter_filePath);
const char * return_of_GetDirectoryPath;

return_of_GetDirectoryPath = GetDirectoryPath(parameter_filePath);
return mrb_str_new_cstr(mrb, return_of_GetDirectoryPath);
}
      
//int GetFPS
static mrb_value
mrb_GetFPS(mrb_state* mrb, mrb_value self) {
int return_of_GetFPS;

return_of_GetFPS = GetFPS();
return mrb_fixnum_value(return_of_GetFPS);
}
      
//const char * GetFileExtension
static mrb_value
mrb_GetFileExtension(mrb_state* mrb, mrb_value self) {
char * parameter_fileName;

mrb_get_args(mrb, "z", &parameter_fileName);
const char * return_of_GetFileExtension;

return_of_GetFileExtension = GetFileExtension(parameter_fileName);
return mrb_str_new_cstr(mrb, return_of_GetFileExtension);
}
      
//int GetFileLength
static mrb_value
mrb_GetFileLength(mrb_state* mrb, mrb_value self) {
char * parameter_fileName;

mrb_get_args(mrb, "z", &parameter_fileName);
int return_of_GetFileLength;

return_of_GetFileLength = GetFileLength(parameter_fileName);
return mrb_fixnum_value(return_of_GetFileLength);
}
      
//long GetFileModTime
static mrb_value
mrb_GetFileModTime(mrb_state* mrb, mrb_value self) {
char * parameter_fileName;

mrb_get_args(mrb, "z", &parameter_fileName);
long return_of_GetFileModTime;

return_of_GetFileModTime = GetFileModTime(parameter_fileName);
return mrb_fixnum_value(return_of_GetFileModTime);
}
      
//const char * GetFileName
static mrb_value
mrb_GetFileName(mrb_state* mrb, mrb_value self) {
char * parameter_filePath;

mrb_get_args(mrb, "z", &parameter_filePath);
const char * return_of_GetFileName;

return_of_GetFileName = GetFileName(parameter_filePath);
return mrb_str_new_cstr(mrb, return_of_GetFileName);
}
      
//const char * GetFileNameWithoutExt
static mrb_value
mrb_GetFileNameWithoutExt(mrb_state* mrb, mrb_value self) {
char * parameter_filePath;

mrb_get_args(mrb, "z", &parameter_filePath);
const char * return_of_GetFileNameWithoutExt;

return_of_GetFileNameWithoutExt = GetFileNameWithoutExt(parameter_filePath);
return mrb_str_new_cstr(mrb, return_of_GetFileNameWithoutExt);
}
      
//Font GetFontDefault
static mrb_value
mrb_GetFontDefault(mrb_state* mrb, mrb_value self) {
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *font_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Font_struct.struct_name);
Font *return_of_GetFontDefault = (Font *)mrb_malloc(mrb, sizeof(Font));

*return_of_GetFontDefault = GetFontDefault();
return mrb_obj_value(Data_Wrap_Struct(mrb, font_mrb_class, &mrb_Font_struct, return_of_GetFontDefault));
}
      
//float GetFrameTime
static mrb_value
mrb_GetFrameTime(mrb_state* mrb, mrb_value self) {
float return_of_GetFrameTime;

return_of_GetFrameTime = GetFrameTime();
return mrb_float_value(mrb, return_of_GetFrameTime);
}
      
//int GetGamepadAxisCount
static mrb_value
mrb_GetGamepadAxisCount(mrb_state* mrb, mrb_value self) {
mrb_int parameter_gamepad;

mrb_get_args(mrb, "i", &parameter_gamepad);
int return_of_GetGamepadAxisCount;

return_of_GetGamepadAxisCount = GetGamepadAxisCount(parameter_gamepad);
return mrb_fixnum_value(return_of_GetGamepadAxisCount);
}
      
//float GetGamepadAxisMovement
static mrb_value
mrb_GetGamepadAxisMovement(mrb_state* mrb, mrb_value self) {
int parameter_gamepad;
int parameter_axis;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "gamepad"),
mrb_intern_lit(mrb, "axis")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_gamepad = mrb_as_int(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_axis = mrb_as_int(mrb, kw_values[1]);
}
        
float return_of_GetGamepadAxisMovement;

return_of_GetGamepadAxisMovement = GetGamepadAxisMovement(parameter_gamepad, parameter_axis);
return mrb_float_value(mrb, return_of_GetGamepadAxisMovement);
}
      
//int GetGamepadButtonPressed
static mrb_value
mrb_GetGamepadButtonPressed(mrb_state* mrb, mrb_value self) {
int return_of_GetGamepadButtonPressed;

return_of_GetGamepadButtonPressed = GetGamepadButtonPressed();
return mrb_fixnum_value(return_of_GetGamepadButtonPressed);
}
      
//const char * GetGamepadName
static mrb_value
mrb_GetGamepadName(mrb_state* mrb, mrb_value self) {
mrb_int parameter_gamepad;

mrb_get_args(mrb, "i", &parameter_gamepad);
const char * return_of_GetGamepadName;

return_of_GetGamepadName = GetGamepadName(parameter_gamepad);
return mrb_str_new_cstr(mrb, return_of_GetGamepadName);
}
      
//int GetGestureDetected
static mrb_value
mrb_GetGestureDetected(mrb_state* mrb, mrb_value self) {
int return_of_GetGestureDetected;

return_of_GetGestureDetected = GetGestureDetected();
return mrb_fixnum_value(return_of_GetGestureDetected);
}
      
//float GetGestureDragAngle
static mrb_value
mrb_GetGestureDragAngle(mrb_state* mrb, mrb_value self) {
float return_of_GetGestureDragAngle;

return_of_GetGestureDragAngle = GetGestureDragAngle();
return mrb_float_value(mrb, return_of_GetGestureDragAngle);
}
      
//Vector2 GetGestureDragVector
static mrb_value
mrb_GetGestureDragVector(mrb_state* mrb, mrb_value self) {
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *vector2_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Vector2_struct.struct_name);
Vector2 *return_of_GetGestureDragVector = (Vector2 *)mrb_malloc(mrb, sizeof(Vector2));

*return_of_GetGestureDragVector = GetGestureDragVector();
return mrb_obj_value(Data_Wrap_Struct(mrb, vector2_mrb_class, &mrb_Vector2_struct, return_of_GetGestureDragVector));
}
      
//float GetGestureHoldDuration
static mrb_value
mrb_GetGestureHoldDuration(mrb_state* mrb, mrb_value self) {
float return_of_GetGestureHoldDuration;

return_of_GetGestureHoldDuration = GetGestureHoldDuration();
return mrb_float_value(mrb, return_of_GetGestureHoldDuration);
}
      
//float GetGesturePinchAngle
static mrb_value
mrb_GetGesturePinchAngle(mrb_state* mrb, mrb_value self) {
float return_of_GetGesturePinchAngle;

return_of_GetGesturePinchAngle = GetGesturePinchAngle();
return mrb_float_value(mrb, return_of_GetGesturePinchAngle);
}
      
//Vector2 GetGesturePinchVector
static mrb_value
mrb_GetGesturePinchVector(mrb_state* mrb, mrb_value self) {
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *vector2_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Vector2_struct.struct_name);
Vector2 *return_of_GetGesturePinchVector = (Vector2 *)mrb_malloc(mrb, sizeof(Vector2));

*return_of_GetGesturePinchVector = GetGesturePinchVector();
return mrb_obj_value(Data_Wrap_Struct(mrb, vector2_mrb_class, &mrb_Vector2_struct, return_of_GetGesturePinchVector));
}
      
//Rectangle GetGlyphAtlasRec
static mrb_value
mrb_GetGlyphAtlasRec(mrb_state* mrb, mrb_value self) {
Font *parameter_font;
int parameter_codepoint;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "font"),
mrb_intern_lit(mrb, "codepoint")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_font = DATA_GET_PTR(mrb, kw_values[0], &mrb_Font_struct, Font);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_codepoint = mrb_as_int(mrb, kw_values[1]);
}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *rectangle_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Rectangle_struct.struct_name);
Rectangle *return_of_GetGlyphAtlasRec = (Rectangle *)mrb_malloc(mrb, sizeof(Rectangle));

*return_of_GetGlyphAtlasRec = GetGlyphAtlasRec(*parameter_font, parameter_codepoint);
return mrb_obj_value(Data_Wrap_Struct(mrb, rectangle_mrb_class, &mrb_Rectangle_struct, return_of_GetGlyphAtlasRec));
}
      
//int GetGlyphIndex
static mrb_value
mrb_GetGlyphIndex(mrb_state* mrb, mrb_value self) {
Font *parameter_font;
int parameter_codepoint;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "font"),
mrb_intern_lit(mrb, "codepoint")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_font = DATA_GET_PTR(mrb, kw_values[0], &mrb_Font_struct, Font);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_codepoint = mrb_as_int(mrb, kw_values[1]);
}
        
int return_of_GetGlyphIndex;

return_of_GetGlyphIndex = GetGlyphIndex(*parameter_font, parameter_codepoint);
return mrb_fixnum_value(return_of_GetGlyphIndex);
}
      
//GlyphInfo GetGlyphInfo
static mrb_value
mrb_GetGlyphInfo(mrb_state* mrb, mrb_value self) {
Font *parameter_font;
int parameter_codepoint;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "font"),
mrb_intern_lit(mrb, "codepoint")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_font = DATA_GET_PTR(mrb, kw_values[0], &mrb_Font_struct, Font);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_codepoint = mrb_as_int(mrb, kw_values[1]);
}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *glyphinfo_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_GlyphInfo_struct.struct_name);
GlyphInfo *return_of_GetGlyphInfo = (GlyphInfo *)mrb_malloc(mrb, sizeof(GlyphInfo));

*return_of_GetGlyphInfo = GetGlyphInfo(*parameter_font, parameter_codepoint);
return mrb_obj_value(Data_Wrap_Struct(mrb, glyphinfo_mrb_class, &mrb_GlyphInfo_struct, return_of_GetGlyphInfo));
}
      
//Rectangle GetImageAlphaBorder
static mrb_value
mrb_GetImageAlphaBorder(mrb_state* mrb, mrb_value self) {
Image *parameter_image;
float parameter_threshold;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "image"),
mrb_intern_lit(mrb, "threshold")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_image = DATA_GET_PTR(mrb, kw_values[0], &mrb_Image_struct, Image);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_threshold = mrb_as_float(mrb, kw_values[1]);
}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *rectangle_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Rectangle_struct.struct_name);
Rectangle *return_of_GetImageAlphaBorder = (Rectangle *)mrb_malloc(mrb, sizeof(Rectangle));

*return_of_GetImageAlphaBorder = GetImageAlphaBorder(*parameter_image, parameter_threshold);
return mrb_obj_value(Data_Wrap_Struct(mrb, rectangle_mrb_class, &mrb_Rectangle_struct, return_of_GetImageAlphaBorder));
}
      
//Color GetImageColor
static mrb_value
mrb_GetImageColor(mrb_state* mrb, mrb_value self) {
Image *parameter_image;
int parameter_x;
int parameter_y;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "image"),
mrb_intern_lit(mrb, "x"),
mrb_intern_lit(mrb, "y")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_image = DATA_GET_PTR(mrb, kw_values[0], &mrb_Image_struct, Image);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_x = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_y = mrb_as_int(mrb, kw_values[2]);
}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *color_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Color_struct.struct_name);
Color *return_of_GetImageColor = (Color *)mrb_malloc(mrb, sizeof(Color));

*return_of_GetImageColor = GetImageColor(*parameter_image, parameter_x, parameter_y);
return mrb_obj_value(Data_Wrap_Struct(mrb, color_mrb_class, &mrb_Color_struct, return_of_GetImageColor));
}
      
//int GetKeyPressed
static mrb_value
mrb_GetKeyPressed(mrb_state* mrb, mrb_value self) {
int return_of_GetKeyPressed;

return_of_GetKeyPressed = GetKeyPressed();
return mrb_fixnum_value(return_of_GetKeyPressed);
}
      
//BoundingBox GetMeshBoundingBox
static mrb_value
mrb_GetMeshBoundingBox(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_mesh;

mrb_get_args(mrb, "o", &parameter_mrb_mesh);
Mesh *parameter_mesh;
parameter_mesh = DATA_GET_PTR(mrb, parameter_mrb_mesh, &mrb_Mesh_struct, Mesh);
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *boundingbox_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_BoundingBox_struct.struct_name);
BoundingBox *return_of_GetMeshBoundingBox = (BoundingBox *)mrb_malloc(mrb, sizeof(BoundingBox));

*return_of_GetMeshBoundingBox = GetMeshBoundingBox(*parameter_mesh);
return mrb_obj_value(Data_Wrap_Struct(mrb, boundingbox_mrb_class, &mrb_BoundingBox_struct, return_of_GetMeshBoundingBox));
}
      
//BoundingBox GetModelBoundingBox
static mrb_value
mrb_GetModelBoundingBox(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_model;

mrb_get_args(mrb, "o", &parameter_mrb_model);
Model *parameter_model;
parameter_model = DATA_GET_PTR(mrb, parameter_mrb_model, &mrb_Model_struct, Model);
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *boundingbox_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_BoundingBox_struct.struct_name);
BoundingBox *return_of_GetModelBoundingBox = (BoundingBox *)mrb_malloc(mrb, sizeof(BoundingBox));

*return_of_GetModelBoundingBox = GetModelBoundingBox(*parameter_model);
return mrb_obj_value(Data_Wrap_Struct(mrb, boundingbox_mrb_class, &mrb_BoundingBox_struct, return_of_GetModelBoundingBox));
}
      
//int GetMonitorCount
static mrb_value
mrb_GetMonitorCount(mrb_state* mrb, mrb_value self) {
int return_of_GetMonitorCount;

return_of_GetMonitorCount = GetMonitorCount();
return mrb_fixnum_value(return_of_GetMonitorCount);
}
      
//int GetMonitorHeight
static mrb_value
mrb_GetMonitorHeight(mrb_state* mrb, mrb_value self) {
mrb_int parameter_monitor;

mrb_get_args(mrb, "i", &parameter_monitor);
int return_of_GetMonitorHeight;

return_of_GetMonitorHeight = GetMonitorHeight(parameter_monitor);
return mrb_fixnum_value(return_of_GetMonitorHeight);
}
      
//const char * GetMonitorName
static mrb_value
mrb_GetMonitorName(mrb_state* mrb, mrb_value self) {
mrb_int parameter_monitor;

mrb_get_args(mrb, "i", &parameter_monitor);
const char * return_of_GetMonitorName;

return_of_GetMonitorName = GetMonitorName(parameter_monitor);
return mrb_str_new_cstr(mrb, return_of_GetMonitorName);
}
      
//int GetMonitorPhysicalHeight
static mrb_value
mrb_GetMonitorPhysicalHeight(mrb_state* mrb, mrb_value self) {
mrb_int parameter_monitor;

mrb_get_args(mrb, "i", &parameter_monitor);
int return_of_GetMonitorPhysicalHeight;

return_of_GetMonitorPhysicalHeight = GetMonitorPhysicalHeight(parameter_monitor);
return mrb_fixnum_value(return_of_GetMonitorPhysicalHeight);
}
      
//int GetMonitorPhysicalWidth
static mrb_value
mrb_GetMonitorPhysicalWidth(mrb_state* mrb, mrb_value self) {
mrb_int parameter_monitor;

mrb_get_args(mrb, "i", &parameter_monitor);
int return_of_GetMonitorPhysicalWidth;

return_of_GetMonitorPhysicalWidth = GetMonitorPhysicalWidth(parameter_monitor);
return mrb_fixnum_value(return_of_GetMonitorPhysicalWidth);
}
      
//Vector2 GetMonitorPosition
static mrb_value
mrb_GetMonitorPosition(mrb_state* mrb, mrb_value self) {
mrb_int parameter_monitor;

mrb_get_args(mrb, "i", &parameter_monitor);
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *vector2_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Vector2_struct.struct_name);
Vector2 *return_of_GetMonitorPosition = (Vector2 *)mrb_malloc(mrb, sizeof(Vector2));

*return_of_GetMonitorPosition = GetMonitorPosition(parameter_monitor);
return mrb_obj_value(Data_Wrap_Struct(mrb, vector2_mrb_class, &mrb_Vector2_struct, return_of_GetMonitorPosition));
}
      
//int GetMonitorRefreshRate
static mrb_value
mrb_GetMonitorRefreshRate(mrb_state* mrb, mrb_value self) {
mrb_int parameter_monitor;

mrb_get_args(mrb, "i", &parameter_monitor);
int return_of_GetMonitorRefreshRate;

return_of_GetMonitorRefreshRate = GetMonitorRefreshRate(parameter_monitor);
return mrb_fixnum_value(return_of_GetMonitorRefreshRate);
}
      
//int GetMonitorWidth
static mrb_value
mrb_GetMonitorWidth(mrb_state* mrb, mrb_value self) {
mrb_int parameter_monitor;

mrb_get_args(mrb, "i", &parameter_monitor);
int return_of_GetMonitorWidth;

return_of_GetMonitorWidth = GetMonitorWidth(parameter_monitor);
return mrb_fixnum_value(return_of_GetMonitorWidth);
}
      
//Vector2 GetMouseDelta
static mrb_value
mrb_GetMouseDelta(mrb_state* mrb, mrb_value self) {
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *vector2_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Vector2_struct.struct_name);
Vector2 *return_of_GetMouseDelta = (Vector2 *)mrb_malloc(mrb, sizeof(Vector2));

*return_of_GetMouseDelta = GetMouseDelta();
return mrb_obj_value(Data_Wrap_Struct(mrb, vector2_mrb_class, &mrb_Vector2_struct, return_of_GetMouseDelta));
}
      
//Vector2 GetMousePosition
static mrb_value
mrb_GetMousePosition(mrb_state* mrb, mrb_value self) {
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *vector2_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Vector2_struct.struct_name);
Vector2 *return_of_GetMousePosition = (Vector2 *)mrb_malloc(mrb, sizeof(Vector2));

*return_of_GetMousePosition = GetMousePosition();
return mrb_obj_value(Data_Wrap_Struct(mrb, vector2_mrb_class, &mrb_Vector2_struct, return_of_GetMousePosition));
}
      
//float GetMouseWheelMove
static mrb_value
mrb_GetMouseWheelMove(mrb_state* mrb, mrb_value self) {
float return_of_GetMouseWheelMove;

return_of_GetMouseWheelMove = GetMouseWheelMove();
return mrb_float_value(mrb, return_of_GetMouseWheelMove);
}
      
//int GetMouseX
static mrb_value
mrb_GetMouseX(mrb_state* mrb, mrb_value self) {
int return_of_GetMouseX;

return_of_GetMouseX = GetMouseX();
return mrb_fixnum_value(return_of_GetMouseX);
}
      
//int GetMouseY
static mrb_value
mrb_GetMouseY(mrb_state* mrb, mrb_value self) {
int return_of_GetMouseY;

return_of_GetMouseY = GetMouseY();
return mrb_fixnum_value(return_of_GetMouseY);
}
      
//float GetMusicTimeLength
static mrb_value
mrb_GetMusicTimeLength(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_music;

mrb_get_args(mrb, "o", &parameter_mrb_music);
Music *parameter_music;
parameter_music = DATA_GET_PTR(mrb, parameter_mrb_music, &mrb_Music_struct, Music);
float return_of_GetMusicTimeLength;

return_of_GetMusicTimeLength = GetMusicTimeLength(*parameter_music);
return mrb_float_value(mrb, return_of_GetMusicTimeLength);
}
      
//float GetMusicTimePlayed
static mrb_value
mrb_GetMusicTimePlayed(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_music;

mrb_get_args(mrb, "o", &parameter_mrb_music);
Music *parameter_music;
parameter_music = DATA_GET_PTR(mrb, parameter_mrb_music, &mrb_Music_struct, Music);
float return_of_GetMusicTimePlayed;

return_of_GetMusicTimePlayed = GetMusicTimePlayed(*parameter_music);
return mrb_float_value(mrb, return_of_GetMusicTimePlayed);
}
      
//int GetPixelDataSize
static mrb_value
mrb_GetPixelDataSize(mrb_state* mrb, mrb_value self) {
int parameter_width;
int parameter_height;
int parameter_format;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "width"),
mrb_intern_lit(mrb, "height"),
mrb_intern_lit(mrb, "format")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_width = mrb_as_int(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_height = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_format = mrb_as_int(mrb, kw_values[2]);
}
        
int return_of_GetPixelDataSize;

return_of_GetPixelDataSize = GetPixelDataSize(parameter_width, parameter_height, parameter_format);
return mrb_fixnum_value(return_of_GetPixelDataSize);
}
      
//const char * GetPrevDirectoryPath
static mrb_value
mrb_GetPrevDirectoryPath(mrb_state* mrb, mrb_value self) {
char * parameter_dirPath;

mrb_get_args(mrb, "z", &parameter_dirPath);
const char * return_of_GetPrevDirectoryPath;

return_of_GetPrevDirectoryPath = GetPrevDirectoryPath(parameter_dirPath);
return mrb_str_new_cstr(mrb, return_of_GetPrevDirectoryPath);
}
      
//int GetRandomValue
static mrb_value
mrb_GetRandomValue(mrb_state* mrb, mrb_value self) {
int parameter_min;
int parameter_max;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "min"),
mrb_intern_lit(mrb, "max")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_min = mrb_as_int(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_max = mrb_as_int(mrb, kw_values[1]);
}
        
int return_of_GetRandomValue;

return_of_GetRandomValue = GetRandomValue(parameter_min, parameter_max);
return mrb_fixnum_value(return_of_GetRandomValue);
}
      
//RayCollision GetRayCollisionBox
static mrb_value
mrb_GetRayCollisionBox(mrb_state* mrb, mrb_value self) {
Ray *parameter_ray;
BoundingBox *parameter_box;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "ray"),
mrb_intern_lit(mrb, "box")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_ray = DATA_GET_PTR(mrb, kw_values[0], &mrb_Ray_struct, Ray);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_box = DATA_GET_PTR(mrb, kw_values[1], &mrb_BoundingBox_struct, BoundingBox);

}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *raycollision_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_RayCollision_struct.struct_name);
RayCollision *return_of_GetRayCollisionBox = (RayCollision *)mrb_malloc(mrb, sizeof(RayCollision));

*return_of_GetRayCollisionBox = GetRayCollisionBox(*parameter_ray, *parameter_box);
return mrb_obj_value(Data_Wrap_Struct(mrb, raycollision_mrb_class, &mrb_RayCollision_struct, return_of_GetRayCollisionBox));
}
      
//RayCollision GetRayCollisionMesh
static mrb_value
mrb_GetRayCollisionMesh(mrb_state* mrb, mrb_value self) {
Ray *parameter_ray;
Mesh *parameter_mesh;
Matrix *parameter_transform;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "ray"),
mrb_intern_lit(mrb, "mesh"),
mrb_intern_lit(mrb, "transform")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_ray = DATA_GET_PTR(mrb, kw_values[0], &mrb_Ray_struct, Ray);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_mesh = DATA_GET_PTR(mrb, kw_values[1], &mrb_Mesh_struct, Mesh);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_transform = DATA_GET_PTR(mrb, kw_values[2], &mrb_Matrix_struct, Matrix);

}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *raycollision_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_RayCollision_struct.struct_name);
RayCollision *return_of_GetRayCollisionMesh = (RayCollision *)mrb_malloc(mrb, sizeof(RayCollision));

*return_of_GetRayCollisionMesh = GetRayCollisionMesh(*parameter_ray, *parameter_mesh, *parameter_transform);
return mrb_obj_value(Data_Wrap_Struct(mrb, raycollision_mrb_class, &mrb_RayCollision_struct, return_of_GetRayCollisionMesh));
}
      
//RayCollision GetRayCollisionQuad
static mrb_value
mrb_GetRayCollisionQuad(mrb_state* mrb, mrb_value self) {
Ray *parameter_ray;
Vector3 *parameter_p1;
Vector3 *parameter_p2;
Vector3 *parameter_p3;
Vector3 *parameter_p4;

uint32_t kw_num = 5;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "ray"),
mrb_intern_lit(mrb, "p1"),
mrb_intern_lit(mrb, "p2"),
mrb_intern_lit(mrb, "p3"),
mrb_intern_lit(mrb, "p4")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_ray = DATA_GET_PTR(mrb, kw_values[0], &mrb_Ray_struct, Ray);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_p1 = DATA_GET_PTR(mrb, kw_values[1], &mrb_Vector3_struct, Vector3);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_p2 = DATA_GET_PTR(mrb, kw_values[2], &mrb_Vector3_struct, Vector3);

}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_p3 = DATA_GET_PTR(mrb, kw_values[3], &mrb_Vector3_struct, Vector3);

}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_p4 = DATA_GET_PTR(mrb, kw_values[4], &mrb_Vector3_struct, Vector3);

}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *raycollision_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_RayCollision_struct.struct_name);
RayCollision *return_of_GetRayCollisionQuad = (RayCollision *)mrb_malloc(mrb, sizeof(RayCollision));

*return_of_GetRayCollisionQuad = GetRayCollisionQuad(*parameter_ray, *parameter_p1, *parameter_p2, *parameter_p3, *parameter_p4);
return mrb_obj_value(Data_Wrap_Struct(mrb, raycollision_mrb_class, &mrb_RayCollision_struct, return_of_GetRayCollisionQuad));
}
      
//RayCollision GetRayCollisionSphere
static mrb_value
mrb_GetRayCollisionSphere(mrb_state* mrb, mrb_value self) {
Ray *parameter_ray;
Vector3 *parameter_center;
float parameter_radius;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "ray"),
mrb_intern_lit(mrb, "center"),
mrb_intern_lit(mrb, "radius")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_ray = DATA_GET_PTR(mrb, kw_values[0], &mrb_Ray_struct, Ray);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_center = DATA_GET_PTR(mrb, kw_values[1], &mrb_Vector3_struct, Vector3);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_radius = mrb_as_float(mrb, kw_values[2]);
}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *raycollision_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_RayCollision_struct.struct_name);
RayCollision *return_of_GetRayCollisionSphere = (RayCollision *)mrb_malloc(mrb, sizeof(RayCollision));

*return_of_GetRayCollisionSphere = GetRayCollisionSphere(*parameter_ray, *parameter_center, parameter_radius);
return mrb_obj_value(Data_Wrap_Struct(mrb, raycollision_mrb_class, &mrb_RayCollision_struct, return_of_GetRayCollisionSphere));
}
      
//RayCollision GetRayCollisionTriangle
static mrb_value
mrb_GetRayCollisionTriangle(mrb_state* mrb, mrb_value self) {
Ray *parameter_ray;
Vector3 *parameter_p1;
Vector3 *parameter_p2;
Vector3 *parameter_p3;

uint32_t kw_num = 4;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "ray"),
mrb_intern_lit(mrb, "p1"),
mrb_intern_lit(mrb, "p2"),
mrb_intern_lit(mrb, "p3")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_ray = DATA_GET_PTR(mrb, kw_values[0], &mrb_Ray_struct, Ray);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_p1 = DATA_GET_PTR(mrb, kw_values[1], &mrb_Vector3_struct, Vector3);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_p2 = DATA_GET_PTR(mrb, kw_values[2], &mrb_Vector3_struct, Vector3);

}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_p3 = DATA_GET_PTR(mrb, kw_values[3], &mrb_Vector3_struct, Vector3);

}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *raycollision_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_RayCollision_struct.struct_name);
RayCollision *return_of_GetRayCollisionTriangle = (RayCollision *)mrb_malloc(mrb, sizeof(RayCollision));

*return_of_GetRayCollisionTriangle = GetRayCollisionTriangle(*parameter_ray, *parameter_p1, *parameter_p2, *parameter_p3);
return mrb_obj_value(Data_Wrap_Struct(mrb, raycollision_mrb_class, &mrb_RayCollision_struct, return_of_GetRayCollisionTriangle));
}
      
//int GetRenderHeight
static mrb_value
mrb_GetRenderHeight(mrb_state* mrb, mrb_value self) {
int return_of_GetRenderHeight;

return_of_GetRenderHeight = GetRenderHeight();
return mrb_fixnum_value(return_of_GetRenderHeight);
}
      
//int GetRenderWidth
static mrb_value
mrb_GetRenderWidth(mrb_state* mrb, mrb_value self) {
int return_of_GetRenderWidth;

return_of_GetRenderWidth = GetRenderWidth();
return mrb_fixnum_value(return_of_GetRenderWidth);
}
      
//int GetScreenHeight
static mrb_value
mrb_GetScreenHeight(mrb_state* mrb, mrb_value self) {
int return_of_GetScreenHeight;

return_of_GetScreenHeight = GetScreenHeight();
return mrb_fixnum_value(return_of_GetScreenHeight);
}
      
//Vector2 GetScreenToWorld2D
static mrb_value
mrb_GetScreenToWorld2D(mrb_state* mrb, mrb_value self) {
Vector2 *parameter_position;
Camera2D *parameter_camera;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "position"),
mrb_intern_lit(mrb, "camera")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_position = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_camera = DATA_GET_PTR(mrb, kw_values[1], &mrb_Camera2D_struct, Camera2D);

}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *vector2_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Vector2_struct.struct_name);
Vector2 *return_of_GetScreenToWorld2D = (Vector2 *)mrb_malloc(mrb, sizeof(Vector2));

*return_of_GetScreenToWorld2D = GetScreenToWorld2D(*parameter_position, *parameter_camera);
return mrb_obj_value(Data_Wrap_Struct(mrb, vector2_mrb_class, &mrb_Vector2_struct, return_of_GetScreenToWorld2D));
}
      
//int GetScreenWidth
static mrb_value
mrb_GetScreenWidth(mrb_state* mrb, mrb_value self) {
int return_of_GetScreenWidth;

return_of_GetScreenWidth = GetScreenWidth();
return mrb_fixnum_value(return_of_GetScreenWidth);
}
      
//int GetShaderLocation
static mrb_value
mrb_GetShaderLocation(mrb_state* mrb, mrb_value self) {
Shader *parameter_shader;
char * parameter_uniformName;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "shader"),
mrb_intern_lit(mrb, "uniformName")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_shader = DATA_GET_PTR(mrb, kw_values[0], &mrb_Shader_struct, Shader);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_uniformName = mrb_str_to_cstr(mrb, kw_values[1]);
}
        
int return_of_GetShaderLocation;

return_of_GetShaderLocation = GetShaderLocation(*parameter_shader, parameter_uniformName);
return mrb_fixnum_value(return_of_GetShaderLocation);
}
      
//int GetShaderLocationAttrib
static mrb_value
mrb_GetShaderLocationAttrib(mrb_state* mrb, mrb_value self) {
Shader *parameter_shader;
char * parameter_attribName;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "shader"),
mrb_intern_lit(mrb, "attribName")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_shader = DATA_GET_PTR(mrb, kw_values[0], &mrb_Shader_struct, Shader);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_attribName = mrb_str_to_cstr(mrb, kw_values[1]);
}
        
int return_of_GetShaderLocationAttrib;

return_of_GetShaderLocationAttrib = GetShaderLocationAttrib(*parameter_shader, parameter_attribName);
return mrb_fixnum_value(return_of_GetShaderLocationAttrib);
}
      
//int GetSoundsPlaying
static mrb_value
mrb_GetSoundsPlaying(mrb_state* mrb, mrb_value self) {
int return_of_GetSoundsPlaying;

return_of_GetSoundsPlaying = GetSoundsPlaying();
return mrb_fixnum_value(return_of_GetSoundsPlaying);
}
      
//double GetTime
static mrb_value
mrb_GetTime(mrb_state* mrb, mrb_value self) {
double return_of_GetTime;

return_of_GetTime = GetTime();
return mrb_float_value(mrb, return_of_GetTime);
}
      
//int GetTouchPointCount
static mrb_value
mrb_GetTouchPointCount(mrb_state* mrb, mrb_value self) {
int return_of_GetTouchPointCount;

return_of_GetTouchPointCount = GetTouchPointCount();
return mrb_fixnum_value(return_of_GetTouchPointCount);
}
      
//int GetTouchPointId
static mrb_value
mrb_GetTouchPointId(mrb_state* mrb, mrb_value self) {
mrb_int parameter_index;

mrb_get_args(mrb, "i", &parameter_index);
int return_of_GetTouchPointId;

return_of_GetTouchPointId = GetTouchPointId(parameter_index);
return mrb_fixnum_value(return_of_GetTouchPointId);
}
      
//Vector2 GetTouchPosition
static mrb_value
mrb_GetTouchPosition(mrb_state* mrb, mrb_value self) {
mrb_int parameter_index;

mrb_get_args(mrb, "i", &parameter_index);
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *vector2_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Vector2_struct.struct_name);
Vector2 *return_of_GetTouchPosition = (Vector2 *)mrb_malloc(mrb, sizeof(Vector2));

*return_of_GetTouchPosition = GetTouchPosition(parameter_index);
return mrb_obj_value(Data_Wrap_Struct(mrb, vector2_mrb_class, &mrb_Vector2_struct, return_of_GetTouchPosition));
}
      
//int GetTouchX
static mrb_value
mrb_GetTouchX(mrb_state* mrb, mrb_value self) {
int return_of_GetTouchX;

return_of_GetTouchX = GetTouchX();
return mrb_fixnum_value(return_of_GetTouchX);
}
      
//int GetTouchY
static mrb_value
mrb_GetTouchY(mrb_state* mrb, mrb_value self) {
int return_of_GetTouchY;

return_of_GetTouchY = GetTouchY();
return mrb_fixnum_value(return_of_GetTouchY);
}
      
//Vector2 GetWindowPosition
static mrb_value
mrb_GetWindowPosition(mrb_state* mrb, mrb_value self) {
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *vector2_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Vector2_struct.struct_name);
Vector2 *return_of_GetWindowPosition = (Vector2 *)mrb_malloc(mrb, sizeof(Vector2));

*return_of_GetWindowPosition = GetWindowPosition();
return mrb_obj_value(Data_Wrap_Struct(mrb, vector2_mrb_class, &mrb_Vector2_struct, return_of_GetWindowPosition));
}
      
//Vector2 GetWindowScaleDPI
static mrb_value
mrb_GetWindowScaleDPI(mrb_state* mrb, mrb_value self) {
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *vector2_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Vector2_struct.struct_name);
Vector2 *return_of_GetWindowScaleDPI = (Vector2 *)mrb_malloc(mrb, sizeof(Vector2));

*return_of_GetWindowScaleDPI = GetWindowScaleDPI();
return mrb_obj_value(Data_Wrap_Struct(mrb, vector2_mrb_class, &mrb_Vector2_struct, return_of_GetWindowScaleDPI));
}
      
//const char * GetWorkingDirectory
static mrb_value
mrb_GetWorkingDirectory(mrb_state* mrb, mrb_value self) {
const char * return_of_GetWorkingDirectory;

return_of_GetWorkingDirectory = GetWorkingDirectory();
return mrb_str_new_cstr(mrb, return_of_GetWorkingDirectory);
}
      
//Vector2 GetWorldToScreen2D
static mrb_value
mrb_GetWorldToScreen2D(mrb_state* mrb, mrb_value self) {
Vector2 *parameter_position;
Camera2D *parameter_camera;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "position"),
mrb_intern_lit(mrb, "camera")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_position = DATA_GET_PTR(mrb, kw_values[0], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_camera = DATA_GET_PTR(mrb, kw_values[1], &mrb_Camera2D_struct, Camera2D);

}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *vector2_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Vector2_struct.struct_name);
Vector2 *return_of_GetWorldToScreen2D = (Vector2 *)mrb_malloc(mrb, sizeof(Vector2));

*return_of_GetWorldToScreen2D = GetWorldToScreen2D(*parameter_position, *parameter_camera);
return mrb_obj_value(Data_Wrap_Struct(mrb, vector2_mrb_class, &mrb_Vector2_struct, return_of_GetWorldToScreen2D));
}
      
//void HideCursor
static mrb_value
mrb_HideCursor(mrb_state* mrb, mrb_value self) {

HideCursor();
return mrb_nil_value();
}
      
//void ImageAlphaClear
static mrb_value
mrb_ImageAlphaClear(mrb_state* mrb, mrb_value self) {
Image *parameter_image;
Color *parameter_color;
float parameter_threshold;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "image"),
mrb_intern_lit(mrb, "color"),
mrb_intern_lit(mrb, "threshold")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_image = DATA_GET_PTR(mrb, kw_values[0], &mrb_Image_struct, Image);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[1], &mrb_Color_struct, Color);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_threshold = mrb_as_float(mrb, kw_values[2]);
}
        

ImageAlphaClear(parameter_image, *parameter_color, parameter_threshold);
return mrb_nil_value();
}
      
//void ImageAlphaCrop
static mrb_value
mrb_ImageAlphaCrop(mrb_state* mrb, mrb_value self) {
Image *parameter_image;
float parameter_threshold;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "image"),
mrb_intern_lit(mrb, "threshold")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_image = DATA_GET_PTR(mrb, kw_values[0], &mrb_Image_struct, Image);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_threshold = mrb_as_float(mrb, kw_values[1]);
}
        

ImageAlphaCrop(parameter_image, parameter_threshold);
return mrb_nil_value();
}
      
//void ImageAlphaMask
static mrb_value
mrb_ImageAlphaMask(mrb_state* mrb, mrb_value self) {
Image *parameter_image;
Image *parameter_alphaMask;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "image"),
mrb_intern_lit(mrb, "alphaMask")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_image = DATA_GET_PTR(mrb, kw_values[0], &mrb_Image_struct, Image);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_alphaMask = DATA_GET_PTR(mrb, kw_values[1], &mrb_Image_struct, Image);

}
        

ImageAlphaMask(parameter_image, *parameter_alphaMask);
return mrb_nil_value();
}
      
//void ImageAlphaPremultiply
static mrb_value
mrb_ImageAlphaPremultiply(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_image;

mrb_get_args(mrb, "o", &parameter_mrb_image);
Image *parameter_image;
parameter_image = DATA_GET_PTR(mrb, parameter_mrb_image, &mrb_Image_struct, Image);

ImageAlphaPremultiply(parameter_image);
return mrb_nil_value();
}
      
//void ImageClearBackground
static mrb_value
mrb_ImageClearBackground(mrb_state* mrb, mrb_value self) {
Image *parameter_dst;
Color *parameter_color;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "dst"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_dst = DATA_GET_PTR(mrb, kw_values[0], &mrb_Image_struct, Image);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[1], &mrb_Color_struct, Color);

}
        

ImageClearBackground(parameter_dst, *parameter_color);
return mrb_nil_value();
}
      
//void ImageColorBrightness
static mrb_value
mrb_ImageColorBrightness(mrb_state* mrb, mrb_value self) {
Image *parameter_image;
int parameter_brightness;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "image"),
mrb_intern_lit(mrb, "brightness")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_image = DATA_GET_PTR(mrb, kw_values[0], &mrb_Image_struct, Image);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_brightness = mrb_as_int(mrb, kw_values[1]);
}
        

ImageColorBrightness(parameter_image, parameter_brightness);
return mrb_nil_value();
}
      
//void ImageColorContrast
static mrb_value
mrb_ImageColorContrast(mrb_state* mrb, mrb_value self) {
Image *parameter_image;
float parameter_contrast;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "image"),
mrb_intern_lit(mrb, "contrast")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_image = DATA_GET_PTR(mrb, kw_values[0], &mrb_Image_struct, Image);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_contrast = mrb_as_float(mrb, kw_values[1]);
}
        

ImageColorContrast(parameter_image, parameter_contrast);
return mrb_nil_value();
}
      
//void ImageColorGrayscale
static mrb_value
mrb_ImageColorGrayscale(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_image;

mrb_get_args(mrb, "o", &parameter_mrb_image);
Image *parameter_image;
parameter_image = DATA_GET_PTR(mrb, parameter_mrb_image, &mrb_Image_struct, Image);

ImageColorGrayscale(parameter_image);
return mrb_nil_value();
}
      
//void ImageColorInvert
static mrb_value
mrb_ImageColorInvert(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_image;

mrb_get_args(mrb, "o", &parameter_mrb_image);
Image *parameter_image;
parameter_image = DATA_GET_PTR(mrb, parameter_mrb_image, &mrb_Image_struct, Image);

ImageColorInvert(parameter_image);
return mrb_nil_value();
}
      
//void ImageColorReplace
static mrb_value
mrb_ImageColorReplace(mrb_state* mrb, mrb_value self) {
Image *parameter_image;
Color *parameter_color;
Color *parameter_replace;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "image"),
mrb_intern_lit(mrb, "color"),
mrb_intern_lit(mrb, "replace")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_image = DATA_GET_PTR(mrb, kw_values[0], &mrb_Image_struct, Image);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[1], &mrb_Color_struct, Color);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_replace = DATA_GET_PTR(mrb, kw_values[2], &mrb_Color_struct, Color);

}
        

ImageColorReplace(parameter_image, *parameter_color, *parameter_replace);
return mrb_nil_value();
}
      
//void ImageColorTint
static mrb_value
mrb_ImageColorTint(mrb_state* mrb, mrb_value self) {
Image *parameter_image;
Color *parameter_color;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "image"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_image = DATA_GET_PTR(mrb, kw_values[0], &mrb_Image_struct, Image);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[1], &mrb_Color_struct, Color);

}
        

ImageColorTint(parameter_image, *parameter_color);
return mrb_nil_value();
}
      
//Image ImageCopy
static mrb_value
mrb_ImageCopy(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_image;

mrb_get_args(mrb, "o", &parameter_mrb_image);
Image *parameter_image;
parameter_image = DATA_GET_PTR(mrb, parameter_mrb_image, &mrb_Image_struct, Image);
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *image_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Image_struct.struct_name);
Image *return_of_ImageCopy = (Image *)mrb_malloc(mrb, sizeof(Image));

*return_of_ImageCopy = ImageCopy(*parameter_image);
return mrb_obj_value(Data_Wrap_Struct(mrb, image_mrb_class, &mrb_Image_struct, return_of_ImageCopy));
}
      
//void ImageCrop
static mrb_value
mrb_ImageCrop(mrb_state* mrb, mrb_value self) {
Image *parameter_image;
Rectangle *parameter_crop;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "image"),
mrb_intern_lit(mrb, "crop")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_image = DATA_GET_PTR(mrb, kw_values[0], &mrb_Image_struct, Image);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_crop = DATA_GET_PTR(mrb, kw_values[1], &mrb_Rectangle_struct, Rectangle);

}
        

ImageCrop(parameter_image, *parameter_crop);
return mrb_nil_value();
}
      
//void ImageDither
static mrb_value
mrb_ImageDither(mrb_state* mrb, mrb_value self) {
Image *parameter_image;
int parameter_rBpp;
int parameter_gBpp;
int parameter_bBpp;
int parameter_aBpp;

uint32_t kw_num = 5;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "image"),
mrb_intern_lit(mrb, "rBpp"),
mrb_intern_lit(mrb, "gBpp"),
mrb_intern_lit(mrb, "bBpp"),
mrb_intern_lit(mrb, "aBpp")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_image = DATA_GET_PTR(mrb, kw_values[0], &mrb_Image_struct, Image);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_rBpp = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_gBpp = mrb_as_int(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_bBpp = mrb_as_int(mrb, kw_values[3]);
}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_aBpp = mrb_as_int(mrb, kw_values[4]);
}
        

ImageDither(parameter_image, parameter_rBpp, parameter_gBpp, parameter_bBpp, parameter_aBpp);
return mrb_nil_value();
}
      
//void ImageDraw
static mrb_value
mrb_ImageDraw(mrb_state* mrb, mrb_value self) {
Image *parameter_dst;
Image *parameter_src;
Rectangle *parameter_srcRec;
Rectangle *parameter_dstRec;
Color *parameter_tint;

uint32_t kw_num = 5;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "dst"),
mrb_intern_lit(mrb, "src"),
mrb_intern_lit(mrb, "srcRec"),
mrb_intern_lit(mrb, "dstRec"),
mrb_intern_lit(mrb, "tint")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_dst = DATA_GET_PTR(mrb, kw_values[0], &mrb_Image_struct, Image);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_src = DATA_GET_PTR(mrb, kw_values[1], &mrb_Image_struct, Image);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_srcRec = DATA_GET_PTR(mrb, kw_values[2], &mrb_Rectangle_struct, Rectangle);

}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_dstRec = DATA_GET_PTR(mrb, kw_values[3], &mrb_Rectangle_struct, Rectangle);

}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_tint = DATA_GET_PTR(mrb, kw_values[4], &mrb_Color_struct, Color);

}
        

ImageDraw(parameter_dst, *parameter_src, *parameter_srcRec, *parameter_dstRec, *parameter_tint);
return mrb_nil_value();
}
      
//void ImageDrawCircle
static mrb_value
mrb_ImageDrawCircle(mrb_state* mrb, mrb_value self) {
Image *parameter_dst;
int parameter_centerX;
int parameter_centerY;
int parameter_radius;
Color *parameter_color;

uint32_t kw_num = 5;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "dst"),
mrb_intern_lit(mrb, "centerX"),
mrb_intern_lit(mrb, "centerY"),
mrb_intern_lit(mrb, "radius"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_dst = DATA_GET_PTR(mrb, kw_values[0], &mrb_Image_struct, Image);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_centerX = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_centerY = mrb_as_int(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_radius = mrb_as_int(mrb, kw_values[3]);
}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[4], &mrb_Color_struct, Color);

}
        

ImageDrawCircle(parameter_dst, parameter_centerX, parameter_centerY, parameter_radius, *parameter_color);
return mrb_nil_value();
}
      
//void ImageDrawCircleV
static mrb_value
mrb_ImageDrawCircleV(mrb_state* mrb, mrb_value self) {
Image *parameter_dst;
Vector2 *parameter_center;
int parameter_radius;
Color *parameter_color;

uint32_t kw_num = 4;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "dst"),
mrb_intern_lit(mrb, "center"),
mrb_intern_lit(mrb, "radius"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_dst = DATA_GET_PTR(mrb, kw_values[0], &mrb_Image_struct, Image);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_center = DATA_GET_PTR(mrb, kw_values[1], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_radius = mrb_as_int(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[3], &mrb_Color_struct, Color);

}
        

ImageDrawCircleV(parameter_dst, *parameter_center, parameter_radius, *parameter_color);
return mrb_nil_value();
}
      
//void ImageDrawLine
static mrb_value
mrb_ImageDrawLine(mrb_state* mrb, mrb_value self) {
Image *parameter_dst;
int parameter_startPosX;
int parameter_startPosY;
int parameter_endPosX;
int parameter_endPosY;
Color *parameter_color;

uint32_t kw_num = 6;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "dst"),
mrb_intern_lit(mrb, "startPosX"),
mrb_intern_lit(mrb, "startPosY"),
mrb_intern_lit(mrb, "endPosX"),
mrb_intern_lit(mrb, "endPosY"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_dst = DATA_GET_PTR(mrb, kw_values[0], &mrb_Image_struct, Image);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_startPosX = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_startPosY = mrb_as_int(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_endPosX = mrb_as_int(mrb, kw_values[3]);
}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_endPosY = mrb_as_int(mrb, kw_values[4]);
}
        
if (mrb_undef_p(kw_values[5])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[5], &mrb_Color_struct, Color);

}
        

ImageDrawLine(parameter_dst, parameter_startPosX, parameter_startPosY, parameter_endPosX, parameter_endPosY, *parameter_color);
return mrb_nil_value();
}
      
//void ImageDrawLineV
static mrb_value
mrb_ImageDrawLineV(mrb_state* mrb, mrb_value self) {
Image *parameter_dst;
Vector2 *parameter_start;
Vector2 *parameter_end;
Color *parameter_color;

uint32_t kw_num = 4;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "dst"),
mrb_intern_lit(mrb, "start"),
mrb_intern_lit(mrb, "end"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_dst = DATA_GET_PTR(mrb, kw_values[0], &mrb_Image_struct, Image);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_start = DATA_GET_PTR(mrb, kw_values[1], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_end = DATA_GET_PTR(mrb, kw_values[2], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[3], &mrb_Color_struct, Color);

}
        

ImageDrawLineV(parameter_dst, *parameter_start, *parameter_end, *parameter_color);
return mrb_nil_value();
}
      
//void ImageDrawPixel
static mrb_value
mrb_ImageDrawPixel(mrb_state* mrb, mrb_value self) {
Image *parameter_dst;
int parameter_posX;
int parameter_posY;
Color *parameter_color;

uint32_t kw_num = 4;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "dst"),
mrb_intern_lit(mrb, "posX"),
mrb_intern_lit(mrb, "posY"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_dst = DATA_GET_PTR(mrb, kw_values[0], &mrb_Image_struct, Image);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_posX = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_posY = mrb_as_int(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[3], &mrb_Color_struct, Color);

}
        

ImageDrawPixel(parameter_dst, parameter_posX, parameter_posY, *parameter_color);
return mrb_nil_value();
}
      
//void ImageDrawPixelV
static mrb_value
mrb_ImageDrawPixelV(mrb_state* mrb, mrb_value self) {
Image *parameter_dst;
Vector2 *parameter_position;
Color *parameter_color;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "dst"),
mrb_intern_lit(mrb, "position"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_dst = DATA_GET_PTR(mrb, kw_values[0], &mrb_Image_struct, Image);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_position = DATA_GET_PTR(mrb, kw_values[1], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[2], &mrb_Color_struct, Color);

}
        

ImageDrawPixelV(parameter_dst, *parameter_position, *parameter_color);
return mrb_nil_value();
}
      
//void ImageDrawRectangle
static mrb_value
mrb_ImageDrawRectangle(mrb_state* mrb, mrb_value self) {
Image *parameter_dst;
int parameter_posX;
int parameter_posY;
int parameter_width;
int parameter_height;
Color *parameter_color;

uint32_t kw_num = 6;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "dst"),
mrb_intern_lit(mrb, "posX"),
mrb_intern_lit(mrb, "posY"),
mrb_intern_lit(mrb, "width"),
mrb_intern_lit(mrb, "height"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_dst = DATA_GET_PTR(mrb, kw_values[0], &mrb_Image_struct, Image);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_posX = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_posY = mrb_as_int(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_width = mrb_as_int(mrb, kw_values[3]);
}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_height = mrb_as_int(mrb, kw_values[4]);
}
        
if (mrb_undef_p(kw_values[5])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[5], &mrb_Color_struct, Color);

}
        

ImageDrawRectangle(parameter_dst, parameter_posX, parameter_posY, parameter_width, parameter_height, *parameter_color);
return mrb_nil_value();
}
      
//void ImageDrawRectangleLines
static mrb_value
mrb_ImageDrawRectangleLines(mrb_state* mrb, mrb_value self) {
Image *parameter_dst;
Rectangle *parameter_rec;
int parameter_thick;
Color *parameter_color;

uint32_t kw_num = 4;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "dst"),
mrb_intern_lit(mrb, "rec"),
mrb_intern_lit(mrb, "thick"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_dst = DATA_GET_PTR(mrb, kw_values[0], &mrb_Image_struct, Image);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_rec = DATA_GET_PTR(mrb, kw_values[1], &mrb_Rectangle_struct, Rectangle);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_thick = mrb_as_int(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[3], &mrb_Color_struct, Color);

}
        

ImageDrawRectangleLines(parameter_dst, *parameter_rec, parameter_thick, *parameter_color);
return mrb_nil_value();
}
      
//void ImageDrawRectangleRec
static mrb_value
mrb_ImageDrawRectangleRec(mrb_state* mrb, mrb_value self) {
Image *parameter_dst;
Rectangle *parameter_rec;
Color *parameter_color;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "dst"),
mrb_intern_lit(mrb, "rec"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_dst = DATA_GET_PTR(mrb, kw_values[0], &mrb_Image_struct, Image);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_rec = DATA_GET_PTR(mrb, kw_values[1], &mrb_Rectangle_struct, Rectangle);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[2], &mrb_Color_struct, Color);

}
        

ImageDrawRectangleRec(parameter_dst, *parameter_rec, *parameter_color);
return mrb_nil_value();
}
      
//void ImageDrawRectangleV
static mrb_value
mrb_ImageDrawRectangleV(mrb_state* mrb, mrb_value self) {
Image *parameter_dst;
Vector2 *parameter_position;
Vector2 *parameter_size;
Color *parameter_color;

uint32_t kw_num = 4;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "dst"),
mrb_intern_lit(mrb, "position"),
mrb_intern_lit(mrb, "size"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_dst = DATA_GET_PTR(mrb, kw_values[0], &mrb_Image_struct, Image);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_position = DATA_GET_PTR(mrb, kw_values[1], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_size = DATA_GET_PTR(mrb, kw_values[2], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[3], &mrb_Color_struct, Color);

}
        

ImageDrawRectangleV(parameter_dst, *parameter_position, *parameter_size, *parameter_color);
return mrb_nil_value();
}
      
//void ImageDrawText
static mrb_value
mrb_ImageDrawText(mrb_state* mrb, mrb_value self) {
Image *parameter_dst;
char * parameter_text;
int parameter_posX;
int parameter_posY;
int parameter_fontSize;
Color *parameter_color;

uint32_t kw_num = 6;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "dst"),
mrb_intern_lit(mrb, "text"),
mrb_intern_lit(mrb, "posX"),
mrb_intern_lit(mrb, "posY"),
mrb_intern_lit(mrb, "fontSize"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_dst = DATA_GET_PTR(mrb, kw_values[0], &mrb_Image_struct, Image);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_text = mrb_str_to_cstr(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_posX = mrb_as_int(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_posY = mrb_as_int(mrb, kw_values[3]);
}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_fontSize = mrb_as_int(mrb, kw_values[4]);
}
        
if (mrb_undef_p(kw_values[5])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[5], &mrb_Color_struct, Color);

}
        

ImageDrawText(parameter_dst, parameter_text, parameter_posX, parameter_posY, parameter_fontSize, *parameter_color);
return mrb_nil_value();
}
      
//void ImageDrawTextEx
static mrb_value
mrb_ImageDrawTextEx(mrb_state* mrb, mrb_value self) {
Image *parameter_dst;
Font *parameter_font;
char * parameter_text;
Vector2 *parameter_position;
float parameter_fontSize;
float parameter_spacing;
Color *parameter_tint;

uint32_t kw_num = 7;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "dst"),
mrb_intern_lit(mrb, "font"),
mrb_intern_lit(mrb, "text"),
mrb_intern_lit(mrb, "position"),
mrb_intern_lit(mrb, "fontSize"),
mrb_intern_lit(mrb, "spacing"),
mrb_intern_lit(mrb, "tint")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_dst = DATA_GET_PTR(mrb, kw_values[0], &mrb_Image_struct, Image);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_font = DATA_GET_PTR(mrb, kw_values[1], &mrb_Font_struct, Font);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_text = mrb_str_to_cstr(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_position = DATA_GET_PTR(mrb, kw_values[3], &mrb_Vector2_struct, Vector2);

}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_fontSize = mrb_as_float(mrb, kw_values[4]);
}
        
if (mrb_undef_p(kw_values[5])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_spacing = mrb_as_float(mrb, kw_values[5]);
}
        
if (mrb_undef_p(kw_values[6])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_tint = DATA_GET_PTR(mrb, kw_values[6], &mrb_Color_struct, Color);

}
        

ImageDrawTextEx(parameter_dst, *parameter_font, parameter_text, *parameter_position, parameter_fontSize, parameter_spacing, *parameter_tint);
return mrb_nil_value();
}
      
//void ImageFlipHorizontal
static mrb_value
mrb_ImageFlipHorizontal(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_image;

mrb_get_args(mrb, "o", &parameter_mrb_image);
Image *parameter_image;
parameter_image = DATA_GET_PTR(mrb, parameter_mrb_image, &mrb_Image_struct, Image);

ImageFlipHorizontal(parameter_image);
return mrb_nil_value();
}
      
//void ImageFlipVertical
static mrb_value
mrb_ImageFlipVertical(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_image;

mrb_get_args(mrb, "o", &parameter_mrb_image);
Image *parameter_image;
parameter_image = DATA_GET_PTR(mrb, parameter_mrb_image, &mrb_Image_struct, Image);

ImageFlipVertical(parameter_image);
return mrb_nil_value();
}
      
//void ImageFormat
static mrb_value
mrb_ImageFormat(mrb_state* mrb, mrb_value self) {
Image *parameter_image;
int parameter_newFormat;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "image"),
mrb_intern_lit(mrb, "newFormat")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_image = DATA_GET_PTR(mrb, kw_values[0], &mrb_Image_struct, Image);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_newFormat = mrb_as_int(mrb, kw_values[1]);
}
        

ImageFormat(parameter_image, parameter_newFormat);
return mrb_nil_value();
}
      
//Image ImageFromImage
static mrb_value
mrb_ImageFromImage(mrb_state* mrb, mrb_value self) {
Image *parameter_image;
Rectangle *parameter_rec;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "image"),
mrb_intern_lit(mrb, "rec")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_image = DATA_GET_PTR(mrb, kw_values[0], &mrb_Image_struct, Image);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_rec = DATA_GET_PTR(mrb, kw_values[1], &mrb_Rectangle_struct, Rectangle);

}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *image_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Image_struct.struct_name);
Image *return_of_ImageFromImage = (Image *)mrb_malloc(mrb, sizeof(Image));

*return_of_ImageFromImage = ImageFromImage(*parameter_image, *parameter_rec);
return mrb_obj_value(Data_Wrap_Struct(mrb, image_mrb_class, &mrb_Image_struct, return_of_ImageFromImage));
}
      
//void ImageMipmaps
static mrb_value
mrb_ImageMipmaps(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_image;

mrb_get_args(mrb, "o", &parameter_mrb_image);
Image *parameter_image;
parameter_image = DATA_GET_PTR(mrb, parameter_mrb_image, &mrb_Image_struct, Image);

ImageMipmaps(parameter_image);
return mrb_nil_value();
}
      
//void ImageResize
static mrb_value
mrb_ImageResize(mrb_state* mrb, mrb_value self) {
Image *parameter_image;
int parameter_newWidth;
int parameter_newHeight;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "image"),
mrb_intern_lit(mrb, "newWidth"),
mrb_intern_lit(mrb, "newHeight")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_image = DATA_GET_PTR(mrb, kw_values[0], &mrb_Image_struct, Image);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_newWidth = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_newHeight = mrb_as_int(mrb, kw_values[2]);
}
        

ImageResize(parameter_image, parameter_newWidth, parameter_newHeight);
return mrb_nil_value();
}
      
//void ImageResizeCanvas
static mrb_value
mrb_ImageResizeCanvas(mrb_state* mrb, mrb_value self) {
Image *parameter_image;
int parameter_newWidth;
int parameter_newHeight;
int parameter_offsetX;
int parameter_offsetY;
Color *parameter_fill;

uint32_t kw_num = 6;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "image"),
mrb_intern_lit(mrb, "newWidth"),
mrb_intern_lit(mrb, "newHeight"),
mrb_intern_lit(mrb, "offsetX"),
mrb_intern_lit(mrb, "offsetY"),
mrb_intern_lit(mrb, "fill")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_image = DATA_GET_PTR(mrb, kw_values[0], &mrb_Image_struct, Image);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_newWidth = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_newHeight = mrb_as_int(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_offsetX = mrb_as_int(mrb, kw_values[3]);
}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_offsetY = mrb_as_int(mrb, kw_values[4]);
}
        
if (mrb_undef_p(kw_values[5])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_fill = DATA_GET_PTR(mrb, kw_values[5], &mrb_Color_struct, Color);

}
        

ImageResizeCanvas(parameter_image, parameter_newWidth, parameter_newHeight, parameter_offsetX, parameter_offsetY, *parameter_fill);
return mrb_nil_value();
}
      
//void ImageResizeNN
static mrb_value
mrb_ImageResizeNN(mrb_state* mrb, mrb_value self) {
Image *parameter_image;
int parameter_newWidth;
int parameter_newHeight;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "image"),
mrb_intern_lit(mrb, "newWidth"),
mrb_intern_lit(mrb, "newHeight")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_image = DATA_GET_PTR(mrb, kw_values[0], &mrb_Image_struct, Image);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_newWidth = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_newHeight = mrb_as_int(mrb, kw_values[2]);
}
        

ImageResizeNN(parameter_image, parameter_newWidth, parameter_newHeight);
return mrb_nil_value();
}
      
//void ImageRotateCCW
static mrb_value
mrb_ImageRotateCCW(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_image;

mrb_get_args(mrb, "o", &parameter_mrb_image);
Image *parameter_image;
parameter_image = DATA_GET_PTR(mrb, parameter_mrb_image, &mrb_Image_struct, Image);

ImageRotateCCW(parameter_image);
return mrb_nil_value();
}
      
//void ImageRotateCW
static mrb_value
mrb_ImageRotateCW(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_image;

mrb_get_args(mrb, "o", &parameter_mrb_image);
Image *parameter_image;
parameter_image = DATA_GET_PTR(mrb, parameter_mrb_image, &mrb_Image_struct, Image);

ImageRotateCW(parameter_image);
return mrb_nil_value();
}
      
//Image ImageText
static mrb_value
mrb_ImageText(mrb_state* mrb, mrb_value self) {
char * parameter_text;
int parameter_fontSize;
Color *parameter_color;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "text"),
mrb_intern_lit(mrb, "fontSize"),
mrb_intern_lit(mrb, "color")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_text = mrb_str_to_cstr(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_fontSize = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_color = DATA_GET_PTR(mrb, kw_values[2], &mrb_Color_struct, Color);

}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *image_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Image_struct.struct_name);
Image *return_of_ImageText = (Image *)mrb_malloc(mrb, sizeof(Image));

*return_of_ImageText = ImageText(parameter_text, parameter_fontSize, *parameter_color);
return mrb_obj_value(Data_Wrap_Struct(mrb, image_mrb_class, &mrb_Image_struct, return_of_ImageText));
}
      
//Image ImageTextEx
static mrb_value
mrb_ImageTextEx(mrb_state* mrb, mrb_value self) {
Font *parameter_font;
char * parameter_text;
float parameter_fontSize;
float parameter_spacing;
Color *parameter_tint;

uint32_t kw_num = 5;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "font"),
mrb_intern_lit(mrb, "text"),
mrb_intern_lit(mrb, "fontSize"),
mrb_intern_lit(mrb, "spacing"),
mrb_intern_lit(mrb, "tint")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_font = DATA_GET_PTR(mrb, kw_values[0], &mrb_Font_struct, Font);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_text = mrb_str_to_cstr(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_fontSize = mrb_as_float(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_spacing = mrb_as_float(mrb, kw_values[3]);
}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_tint = DATA_GET_PTR(mrb, kw_values[4], &mrb_Color_struct, Color);

}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *image_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Image_struct.struct_name);
Image *return_of_ImageTextEx = (Image *)mrb_malloc(mrb, sizeof(Image));

*return_of_ImageTextEx = ImageTextEx(*parameter_font, parameter_text, parameter_fontSize, parameter_spacing, *parameter_tint);
return mrb_obj_value(Data_Wrap_Struct(mrb, image_mrb_class, &mrb_Image_struct, return_of_ImageTextEx));
}
      
//void ImageToPOT
static mrb_value
mrb_ImageToPOT(mrb_state* mrb, mrb_value self) {
Image *parameter_image;
Color *parameter_fill;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "image"),
mrb_intern_lit(mrb, "fill")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_image = DATA_GET_PTR(mrb, kw_values[0], &mrb_Image_struct, Image);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_fill = DATA_GET_PTR(mrb, kw_values[1], &mrb_Color_struct, Color);

}
        

ImageToPOT(parameter_image, *parameter_fill);
return mrb_nil_value();
}
      
//void InitAudioDevice
static mrb_value
mrb_InitAudioDevice(mrb_state* mrb, mrb_value self) {

InitAudioDevice();
return mrb_nil_value();
}
      
//void InitWindow
static mrb_value
mrb_InitWindow(mrb_state* mrb, mrb_value self) {
int parameter_width;
int parameter_height;
char * parameter_title;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "width"),
mrb_intern_lit(mrb, "height"),
mrb_intern_lit(mrb, "title")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_width = mrb_as_int(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_height = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_title = mrb_str_to_cstr(mrb, kw_values[2]);
}
        

InitWindow(parameter_width, parameter_height, parameter_title);
return mrb_nil_value();
}
      
//bool IsAudioDeviceReady
static mrb_value
mrb_IsAudioDeviceReady(mrb_state* mrb, mrb_value self) {
bool return_of_IsAudioDeviceReady;

return_of_IsAudioDeviceReady = IsAudioDeviceReady();
return mrb_bool_value(return_of_IsAudioDeviceReady);
}
      
//bool IsAudioStreamPlaying
static mrb_value
mrb_IsAudioStreamPlaying(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_stream;

mrb_get_args(mrb, "o", &parameter_mrb_stream);
AudioStream *parameter_stream;
parameter_stream = DATA_GET_PTR(mrb, parameter_mrb_stream, &mrb_AudioStream_struct, AudioStream);
bool return_of_IsAudioStreamPlaying;

return_of_IsAudioStreamPlaying = IsAudioStreamPlaying(*parameter_stream);
return mrb_bool_value(return_of_IsAudioStreamPlaying);
}
      
//bool IsAudioStreamProcessed
static mrb_value
mrb_IsAudioStreamProcessed(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_stream;

mrb_get_args(mrb, "o", &parameter_mrb_stream);
AudioStream *parameter_stream;
parameter_stream = DATA_GET_PTR(mrb, parameter_mrb_stream, &mrb_AudioStream_struct, AudioStream);
bool return_of_IsAudioStreamProcessed;

return_of_IsAudioStreamProcessed = IsAudioStreamProcessed(*parameter_stream);
return mrb_bool_value(return_of_IsAudioStreamProcessed);
}
      
//bool IsCursorHidden
static mrb_value
mrb_IsCursorHidden(mrb_state* mrb, mrb_value self) {
bool return_of_IsCursorHidden;

return_of_IsCursorHidden = IsCursorHidden();
return mrb_bool_value(return_of_IsCursorHidden);
}
      
//bool IsCursorOnScreen
static mrb_value
mrb_IsCursorOnScreen(mrb_state* mrb, mrb_value self) {
bool return_of_IsCursorOnScreen;

return_of_IsCursorOnScreen = IsCursorOnScreen();
return mrb_bool_value(return_of_IsCursorOnScreen);
}
      
//bool IsFileDropped
static mrb_value
mrb_IsFileDropped(mrb_state* mrb, mrb_value self) {
bool return_of_IsFileDropped;

return_of_IsFileDropped = IsFileDropped();
return mrb_bool_value(return_of_IsFileDropped);
}
      
//bool IsFileExtension
static mrb_value
mrb_IsFileExtension(mrb_state* mrb, mrb_value self) {
char * parameter_fileName;
char * parameter_ext;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "fileName"),
mrb_intern_lit(mrb, "ext")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_fileName = mrb_str_to_cstr(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_ext = mrb_str_to_cstr(mrb, kw_values[1]);
}
        
bool return_of_IsFileExtension;

return_of_IsFileExtension = IsFileExtension(parameter_fileName, parameter_ext);
return mrb_bool_value(return_of_IsFileExtension);
}
      
//bool IsGamepadAvailable
static mrb_value
mrb_IsGamepadAvailable(mrb_state* mrb, mrb_value self) {
mrb_int parameter_gamepad;

mrb_get_args(mrb, "i", &parameter_gamepad);
bool return_of_IsGamepadAvailable;

return_of_IsGamepadAvailable = IsGamepadAvailable(parameter_gamepad);
return mrb_bool_value(return_of_IsGamepadAvailable);
}
      
//bool IsGamepadButtonDown
static mrb_value
mrb_IsGamepadButtonDown(mrb_state* mrb, mrb_value self) {
int parameter_gamepad;
int parameter_button;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "gamepad"),
mrb_intern_lit(mrb, "button")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_gamepad = mrb_as_int(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_button = mrb_as_int(mrb, kw_values[1]);
}
        
bool return_of_IsGamepadButtonDown;

return_of_IsGamepadButtonDown = IsGamepadButtonDown(parameter_gamepad, parameter_button);
return mrb_bool_value(return_of_IsGamepadButtonDown);
}
      
//bool IsGamepadButtonPressed
static mrb_value
mrb_IsGamepadButtonPressed(mrb_state* mrb, mrb_value self) {
int parameter_gamepad;
int parameter_button;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "gamepad"),
mrb_intern_lit(mrb, "button")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_gamepad = mrb_as_int(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_button = mrb_as_int(mrb, kw_values[1]);
}
        
bool return_of_IsGamepadButtonPressed;

return_of_IsGamepadButtonPressed = IsGamepadButtonPressed(parameter_gamepad, parameter_button);
return mrb_bool_value(return_of_IsGamepadButtonPressed);
}
      
//bool IsGamepadButtonReleased
static mrb_value
mrb_IsGamepadButtonReleased(mrb_state* mrb, mrb_value self) {
int parameter_gamepad;
int parameter_button;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "gamepad"),
mrb_intern_lit(mrb, "button")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_gamepad = mrb_as_int(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_button = mrb_as_int(mrb, kw_values[1]);
}
        
bool return_of_IsGamepadButtonReleased;

return_of_IsGamepadButtonReleased = IsGamepadButtonReleased(parameter_gamepad, parameter_button);
return mrb_bool_value(return_of_IsGamepadButtonReleased);
}
      
//bool IsGamepadButtonUp
static mrb_value
mrb_IsGamepadButtonUp(mrb_state* mrb, mrb_value self) {
int parameter_gamepad;
int parameter_button;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "gamepad"),
mrb_intern_lit(mrb, "button")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_gamepad = mrb_as_int(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_button = mrb_as_int(mrb, kw_values[1]);
}
        
bool return_of_IsGamepadButtonUp;

return_of_IsGamepadButtonUp = IsGamepadButtonUp(parameter_gamepad, parameter_button);
return mrb_bool_value(return_of_IsGamepadButtonUp);
}
      
//bool IsGestureDetected
static mrb_value
mrb_IsGestureDetected(mrb_state* mrb, mrb_value self) {
mrb_int parameter_gesture;

mrb_get_args(mrb, "i", &parameter_gesture);
bool return_of_IsGestureDetected;

return_of_IsGestureDetected = IsGestureDetected(parameter_gesture);
return mrb_bool_value(return_of_IsGestureDetected);
}
      
//bool IsKeyDown
static mrb_value
mrb_IsKeyDown(mrb_state* mrb, mrb_value self) {
mrb_int parameter_key;

mrb_get_args(mrb, "i", &parameter_key);
bool return_of_IsKeyDown;

return_of_IsKeyDown = IsKeyDown(parameter_key);
return mrb_bool_value(return_of_IsKeyDown);
}
      
//bool IsKeyPressed
static mrb_value
mrb_IsKeyPressed(mrb_state* mrb, mrb_value self) {
mrb_int parameter_key;

mrb_get_args(mrb, "i", &parameter_key);
bool return_of_IsKeyPressed;

return_of_IsKeyPressed = IsKeyPressed(parameter_key);
return mrb_bool_value(return_of_IsKeyPressed);
}
      
//bool IsKeyReleased
static mrb_value
mrb_IsKeyReleased(mrb_state* mrb, mrb_value self) {
mrb_int parameter_key;

mrb_get_args(mrb, "i", &parameter_key);
bool return_of_IsKeyReleased;

return_of_IsKeyReleased = IsKeyReleased(parameter_key);
return mrb_bool_value(return_of_IsKeyReleased);
}
      
//bool IsKeyUp
static mrb_value
mrb_IsKeyUp(mrb_state* mrb, mrb_value self) {
mrb_int parameter_key;

mrb_get_args(mrb, "i", &parameter_key);
bool return_of_IsKeyUp;

return_of_IsKeyUp = IsKeyUp(parameter_key);
return mrb_bool_value(return_of_IsKeyUp);
}
      
//bool IsModelAnimationValid
static mrb_value
mrb_IsModelAnimationValid(mrb_state* mrb, mrb_value self) {
Model *parameter_model;
ModelAnimation *parameter_anim;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "model"),
mrb_intern_lit(mrb, "anim")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_model = DATA_GET_PTR(mrb, kw_values[0], &mrb_Model_struct, Model);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_anim = DATA_GET_PTR(mrb, kw_values[1], &mrb_ModelAnimation_struct, ModelAnimation);

}
        
bool return_of_IsModelAnimationValid;

return_of_IsModelAnimationValid = IsModelAnimationValid(*parameter_model, *parameter_anim);
return mrb_bool_value(return_of_IsModelAnimationValid);
}
      
//bool IsMouseButtonDown
static mrb_value
mrb_IsMouseButtonDown(mrb_state* mrb, mrb_value self) {
mrb_int parameter_button;

mrb_get_args(mrb, "i", &parameter_button);
bool return_of_IsMouseButtonDown;

return_of_IsMouseButtonDown = IsMouseButtonDown(parameter_button);
return mrb_bool_value(return_of_IsMouseButtonDown);
}
      
//bool IsMouseButtonPressed
static mrb_value
mrb_IsMouseButtonPressed(mrb_state* mrb, mrb_value self) {
mrb_int parameter_button;

mrb_get_args(mrb, "i", &parameter_button);
bool return_of_IsMouseButtonPressed;

return_of_IsMouseButtonPressed = IsMouseButtonPressed(parameter_button);
return mrb_bool_value(return_of_IsMouseButtonPressed);
}
      
//bool IsMouseButtonReleased
static mrb_value
mrb_IsMouseButtonReleased(mrb_state* mrb, mrb_value self) {
mrb_int parameter_button;

mrb_get_args(mrb, "i", &parameter_button);
bool return_of_IsMouseButtonReleased;

return_of_IsMouseButtonReleased = IsMouseButtonReleased(parameter_button);
return mrb_bool_value(return_of_IsMouseButtonReleased);
}
      
//bool IsMouseButtonUp
static mrb_value
mrb_IsMouseButtonUp(mrb_state* mrb, mrb_value self) {
mrb_int parameter_button;

mrb_get_args(mrb, "i", &parameter_button);
bool return_of_IsMouseButtonUp;

return_of_IsMouseButtonUp = IsMouseButtonUp(parameter_button);
return mrb_bool_value(return_of_IsMouseButtonUp);
}
      
//bool IsMusicStreamPlaying
static mrb_value
mrb_IsMusicStreamPlaying(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_music;

mrb_get_args(mrb, "o", &parameter_mrb_music);
Music *parameter_music;
parameter_music = DATA_GET_PTR(mrb, parameter_mrb_music, &mrb_Music_struct, Music);
bool return_of_IsMusicStreamPlaying;

return_of_IsMusicStreamPlaying = IsMusicStreamPlaying(*parameter_music);
return mrb_bool_value(return_of_IsMusicStreamPlaying);
}
      
//bool IsSoundPlaying
static mrb_value
mrb_IsSoundPlaying(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_sound;

mrb_get_args(mrb, "o", &parameter_mrb_sound);
Sound *parameter_sound;
parameter_sound = DATA_GET_PTR(mrb, parameter_mrb_sound, &mrb_Sound_struct, Sound);
bool return_of_IsSoundPlaying;

return_of_IsSoundPlaying = IsSoundPlaying(*parameter_sound);
return mrb_bool_value(return_of_IsSoundPlaying);
}
      
//bool IsWindowFocused
static mrb_value
mrb_IsWindowFocused(mrb_state* mrb, mrb_value self) {
bool return_of_IsWindowFocused;

return_of_IsWindowFocused = IsWindowFocused();
return mrb_bool_value(return_of_IsWindowFocused);
}
      
//bool IsWindowFullscreen
static mrb_value
mrb_IsWindowFullscreen(mrb_state* mrb, mrb_value self) {
bool return_of_IsWindowFullscreen;

return_of_IsWindowFullscreen = IsWindowFullscreen();
return mrb_bool_value(return_of_IsWindowFullscreen);
}
      
//bool IsWindowHidden
static mrb_value
mrb_IsWindowHidden(mrb_state* mrb, mrb_value self) {
bool return_of_IsWindowHidden;

return_of_IsWindowHidden = IsWindowHidden();
return mrb_bool_value(return_of_IsWindowHidden);
}
      
//bool IsWindowMaximized
static mrb_value
mrb_IsWindowMaximized(mrb_state* mrb, mrb_value self) {
bool return_of_IsWindowMaximized;

return_of_IsWindowMaximized = IsWindowMaximized();
return mrb_bool_value(return_of_IsWindowMaximized);
}
      
//bool IsWindowMinimized
static mrb_value
mrb_IsWindowMinimized(mrb_state* mrb, mrb_value self) {
bool return_of_IsWindowMinimized;

return_of_IsWindowMinimized = IsWindowMinimized();
return mrb_bool_value(return_of_IsWindowMinimized);
}
      
//bool IsWindowReady
static mrb_value
mrb_IsWindowReady(mrb_state* mrb, mrb_value self) {
bool return_of_IsWindowReady;

return_of_IsWindowReady = IsWindowReady();
return mrb_bool_value(return_of_IsWindowReady);
}
      
//bool IsWindowResized
static mrb_value
mrb_IsWindowResized(mrb_state* mrb, mrb_value self) {
bool return_of_IsWindowResized;

return_of_IsWindowResized = IsWindowResized();
return mrb_bool_value(return_of_IsWindowResized);
}
      
//bool IsWindowState
static mrb_value
mrb_IsWindowState(mrb_state* mrb, mrb_value self) {
mrb_int parameter_flag;

mrb_get_args(mrb, "i", &parameter_flag);
bool return_of_IsWindowState;

return_of_IsWindowState = IsWindowState(parameter_flag);
return mrb_bool_value(return_of_IsWindowState);
}
      
//AudioStream LoadAudioStream
static mrb_value
mrb_LoadAudioStream(mrb_state* mrb, mrb_value self) {
int parameter_sampleRate;
int parameter_sampleSize;
int parameter_channels;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "sampleRate"),
mrb_intern_lit(mrb, "sampleSize"),
mrb_intern_lit(mrb, "channels")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_sampleRate = mrb_as_int(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_sampleSize = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_channels = mrb_as_int(mrb, kw_values[2]);
}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *audiostream_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_AudioStream_struct.struct_name);
AudioStream *return_of_LoadAudioStream = (AudioStream *)mrb_malloc(mrb, sizeof(AudioStream));

*return_of_LoadAudioStream = LoadAudioStream(parameter_sampleRate, parameter_sampleSize, parameter_channels);
return mrb_obj_value(Data_Wrap_Struct(mrb, audiostream_mrb_class, &mrb_AudioStream_struct, return_of_LoadAudioStream));
}
      
//int * LoadCodepoints
static mrb_value
mrb_LoadCodepoints(mrb_state* mrb, mrb_value self) {
char * parameter_text;
int parameter_count;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "text"),
mrb_intern_lit(mrb, "count")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_text = mrb_str_to_cstr(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_count = mrb_as_int(mrb, kw_values[1]);
}
        
int * return_of_LoadCodepoints;

return_of_LoadCodepoints = LoadCodepoints(parameter_text, (int *)&parameter_count);
return mrb_fixnum_value(*return_of_LoadCodepoints);
}
      
//unsigned char * LoadFileData
static mrb_value
mrb_LoadFileData(mrb_state* mrb, mrb_value self) {
char * parameter_fileName;
int parameter_bytesRead;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "fileName"),
mrb_intern_lit(mrb, "bytesRead")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_fileName = mrb_str_to_cstr(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_bytesRead = mrb_as_int(mrb, kw_values[1]);
}
        
unsigned char * return_of_LoadFileData;

return_of_LoadFileData = LoadFileData(parameter_fileName, (unsigned int *)&parameter_bytesRead);
return mrb_fixnum_value(*return_of_LoadFileData);
}
      
//char * LoadFileText
static mrb_value
mrb_LoadFileText(mrb_state* mrb, mrb_value self) {
char * parameter_fileName;

mrb_get_args(mrb, "z", &parameter_fileName);
char * return_of_LoadFileText;

return_of_LoadFileText = LoadFileText(parameter_fileName);
return mrb_str_new_cstr(mrb, return_of_LoadFileText);
}
      
//Font LoadFont
static mrb_value
mrb_LoadFont(mrb_state* mrb, mrb_value self) {
char * parameter_fileName;

mrb_get_args(mrb, "z", &parameter_fileName);
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *font_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Font_struct.struct_name);
Font *return_of_LoadFont = (Font *)mrb_malloc(mrb, sizeof(Font));

*return_of_LoadFont = LoadFont(parameter_fileName);
return mrb_obj_value(Data_Wrap_Struct(mrb, font_mrb_class, &mrb_Font_struct, return_of_LoadFont));
}
      
//Font LoadFontEx
static mrb_value
mrb_LoadFontEx(mrb_state* mrb, mrb_value self) {
char * parameter_fileName;
int parameter_fontSize;
int parameter_fontChars;
int parameter_glyphCount;

uint32_t kw_num = 4;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "fileName"),
mrb_intern_lit(mrb, "fontSize"),
mrb_intern_lit(mrb, "fontChars"),
mrb_intern_lit(mrb, "glyphCount")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_fileName = mrb_str_to_cstr(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_fontSize = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_fontChars = mrb_as_int(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_glyphCount = mrb_as_int(mrb, kw_values[3]);
}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *font_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Font_struct.struct_name);
Font *return_of_LoadFontEx = (Font *)mrb_malloc(mrb, sizeof(Font));

*return_of_LoadFontEx = LoadFontEx(parameter_fileName, parameter_fontSize, (int *)&parameter_fontChars, parameter_glyphCount);
return mrb_obj_value(Data_Wrap_Struct(mrb, font_mrb_class, &mrb_Font_struct, return_of_LoadFontEx));
}
      
//Font LoadFontFromImage
static mrb_value
mrb_LoadFontFromImage(mrb_state* mrb, mrb_value self) {
Image *parameter_image;
Color *parameter_key;
int parameter_firstChar;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "image"),
mrb_intern_lit(mrb, "key"),
mrb_intern_lit(mrb, "firstChar")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_image = DATA_GET_PTR(mrb, kw_values[0], &mrb_Image_struct, Image);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_key = DATA_GET_PTR(mrb, kw_values[1], &mrb_Color_struct, Color);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_firstChar = mrb_as_int(mrb, kw_values[2]);
}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *font_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Font_struct.struct_name);
Font *return_of_LoadFontFromImage = (Font *)mrb_malloc(mrb, sizeof(Font));

*return_of_LoadFontFromImage = LoadFontFromImage(*parameter_image, *parameter_key, parameter_firstChar);
return mrb_obj_value(Data_Wrap_Struct(mrb, font_mrb_class, &mrb_Font_struct, return_of_LoadFontFromImage));
}
      
//Image LoadImage
static mrb_value
mrb_LoadImage(mrb_state* mrb, mrb_value self) {
char * parameter_fileName;

mrb_get_args(mrb, "z", &parameter_fileName);
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *image_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Image_struct.struct_name);
Image *return_of_LoadImage = (Image *)mrb_malloc(mrb, sizeof(Image));

*return_of_LoadImage = LoadImage(parameter_fileName);
return mrb_obj_value(Data_Wrap_Struct(mrb, image_mrb_class, &mrb_Image_struct, return_of_LoadImage));
}
      
//Image LoadImageAnim
static mrb_value
mrb_LoadImageAnim(mrb_state* mrb, mrb_value self) {
char * parameter_fileName;
int parameter_frames;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "fileName"),
mrb_intern_lit(mrb, "frames")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_fileName = mrb_str_to_cstr(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_frames = mrb_as_int(mrb, kw_values[1]);
}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *image_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Image_struct.struct_name);
Image *return_of_LoadImageAnim = (Image *)mrb_malloc(mrb, sizeof(Image));

*return_of_LoadImageAnim = LoadImageAnim(parameter_fileName, (int *)&parameter_frames);
return mrb_obj_value(Data_Wrap_Struct(mrb, image_mrb_class, &mrb_Image_struct, return_of_LoadImageAnim));
}
      
//Color * LoadImageColors
static mrb_value
mrb_LoadImageColors(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_image;

mrb_get_args(mrb, "o", &parameter_mrb_image);
Image *parameter_image;
parameter_image = DATA_GET_PTR(mrb, parameter_mrb_image, &mrb_Image_struct, Image);
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *color_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Color_struct.struct_name);
Color *return_of_LoadImageColors = (Color *)mrb_malloc(mrb, sizeof(Color));

*return_of_LoadImageColors = *LoadImageColors(*parameter_image);
return mrb_obj_value(Data_Wrap_Struct(mrb, color_mrb_class, &mrb_Color_struct, return_of_LoadImageColors));
}
      
//Image LoadImageFromScreen
static mrb_value
mrb_LoadImageFromScreen(mrb_state* mrb, mrb_value self) {
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *image_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Image_struct.struct_name);
Image *return_of_LoadImageFromScreen = (Image *)mrb_malloc(mrb, sizeof(Image));

*return_of_LoadImageFromScreen = LoadImageFromScreen();
return mrb_obj_value(Data_Wrap_Struct(mrb, image_mrb_class, &mrb_Image_struct, return_of_LoadImageFromScreen));
}
      
//Image LoadImageFromTexture
static mrb_value
mrb_LoadImageFromTexture(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_texture;

mrb_get_args(mrb, "o", &parameter_mrb_texture);
Texture *parameter_texture;
parameter_texture = DATA_GET_PTR(mrb, parameter_mrb_texture, &mrb_Texture_struct, Texture);
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *image_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Image_struct.struct_name);
Image *return_of_LoadImageFromTexture = (Image *)mrb_malloc(mrb, sizeof(Image));

*return_of_LoadImageFromTexture = LoadImageFromTexture(*parameter_texture);
return mrb_obj_value(Data_Wrap_Struct(mrb, image_mrb_class, &mrb_Image_struct, return_of_LoadImageFromTexture));
}
      
//Color * LoadImagePalette
static mrb_value
mrb_LoadImagePalette(mrb_state* mrb, mrb_value self) {
Image *parameter_image;
int parameter_maxPaletteSize;
int parameter_colorCount;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "image"),
mrb_intern_lit(mrb, "maxPaletteSize"),
mrb_intern_lit(mrb, "colorCount")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_image = DATA_GET_PTR(mrb, kw_values[0], &mrb_Image_struct, Image);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_maxPaletteSize = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_colorCount = mrb_as_int(mrb, kw_values[2]);
}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *color_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Color_struct.struct_name);
Color *return_of_LoadImagePalette = (Color *)mrb_malloc(mrb, sizeof(Color));

*return_of_LoadImagePalette = *LoadImagePalette(*parameter_image, parameter_maxPaletteSize, (int *)&parameter_colorCount);
return mrb_obj_value(Data_Wrap_Struct(mrb, color_mrb_class, &mrb_Color_struct, return_of_LoadImagePalette));
}
      
//Image LoadImageRaw
static mrb_value
mrb_LoadImageRaw(mrb_state* mrb, mrb_value self) {
char * parameter_fileName;
int parameter_width;
int parameter_height;
int parameter_format;
int parameter_headerSize;

uint32_t kw_num = 5;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "fileName"),
mrb_intern_lit(mrb, "width"),
mrb_intern_lit(mrb, "height"),
mrb_intern_lit(mrb, "format"),
mrb_intern_lit(mrb, "headerSize")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_fileName = mrb_str_to_cstr(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_width = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_height = mrb_as_int(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_format = mrb_as_int(mrb, kw_values[3]);
}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_headerSize = mrb_as_int(mrb, kw_values[4]);
}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *image_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Image_struct.struct_name);
Image *return_of_LoadImageRaw = (Image *)mrb_malloc(mrb, sizeof(Image));

*return_of_LoadImageRaw = LoadImageRaw(parameter_fileName, parameter_width, parameter_height, parameter_format, parameter_headerSize);
return mrb_obj_value(Data_Wrap_Struct(mrb, image_mrb_class, &mrb_Image_struct, return_of_LoadImageRaw));
}
      
//Material LoadMaterialDefault
static mrb_value
mrb_LoadMaterialDefault(mrb_state* mrb, mrb_value self) {
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *material_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Material_struct.struct_name);
Material *return_of_LoadMaterialDefault = (Material *)mrb_malloc(mrb, sizeof(Material));

*return_of_LoadMaterialDefault = LoadMaterialDefault();
return mrb_obj_value(Data_Wrap_Struct(mrb, material_mrb_class, &mrb_Material_struct, return_of_LoadMaterialDefault));
}
      
//Material * LoadMaterials
static mrb_value
mrb_LoadMaterials(mrb_state* mrb, mrb_value self) {
char * parameter_fileName;
int parameter_materialCount;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "fileName"),
mrb_intern_lit(mrb, "materialCount")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_fileName = mrb_str_to_cstr(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_materialCount = mrb_as_int(mrb, kw_values[1]);
}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *material_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Material_struct.struct_name);
Material *return_of_LoadMaterials = (Material *)mrb_malloc(mrb, sizeof(Material));

*return_of_LoadMaterials = *LoadMaterials(parameter_fileName, (int *)&parameter_materialCount);
return mrb_obj_value(Data_Wrap_Struct(mrb, material_mrb_class, &mrb_Material_struct, return_of_LoadMaterials));
}
      
//Model LoadModel
static mrb_value
mrb_LoadModel(mrb_state* mrb, mrb_value self) {
char * parameter_fileName;

mrb_get_args(mrb, "z", &parameter_fileName);
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *model_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Model_struct.struct_name);
Model *return_of_LoadModel = (Model *)mrb_malloc(mrb, sizeof(Model));

*return_of_LoadModel = LoadModel(parameter_fileName);
return mrb_obj_value(Data_Wrap_Struct(mrb, model_mrb_class, &mrb_Model_struct, return_of_LoadModel));
}
      
//ModelAnimation * LoadModelAnimations
static mrb_value
mrb_LoadModelAnimations(mrb_state* mrb, mrb_value self) {
char * parameter_fileName;
int parameter_animCount;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "fileName"),
mrb_intern_lit(mrb, "animCount")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_fileName = mrb_str_to_cstr(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_animCount = mrb_as_int(mrb, kw_values[1]);
}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *modelanimation_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_ModelAnimation_struct.struct_name);
ModelAnimation *return_of_LoadModelAnimations = (ModelAnimation *)mrb_malloc(mrb, sizeof(ModelAnimation));

*return_of_LoadModelAnimations = *LoadModelAnimations(parameter_fileName, (unsigned int *)&parameter_animCount);
return mrb_obj_value(Data_Wrap_Struct(mrb, modelanimation_mrb_class, &mrb_ModelAnimation_struct, return_of_LoadModelAnimations));
}
      
//Model LoadModelFromMesh
static mrb_value
mrb_LoadModelFromMesh(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_mesh;

mrb_get_args(mrb, "o", &parameter_mrb_mesh);
Mesh *parameter_mesh;
parameter_mesh = DATA_GET_PTR(mrb, parameter_mrb_mesh, &mrb_Mesh_struct, Mesh);
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *model_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Model_struct.struct_name);
Model *return_of_LoadModelFromMesh = (Model *)mrb_malloc(mrb, sizeof(Model));

*return_of_LoadModelFromMesh = LoadModelFromMesh(*parameter_mesh);
return mrb_obj_value(Data_Wrap_Struct(mrb, model_mrb_class, &mrb_Model_struct, return_of_LoadModelFromMesh));
}
      
//Music LoadMusicStream
static mrb_value
mrb_LoadMusicStream(mrb_state* mrb, mrb_value self) {
char * parameter_fileName;

mrb_get_args(mrb, "z", &parameter_fileName);
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *music_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Music_struct.struct_name);
Music *return_of_LoadMusicStream = (Music *)mrb_malloc(mrb, sizeof(Music));

*return_of_LoadMusicStream = LoadMusicStream(parameter_fileName);
return mrb_obj_value(Data_Wrap_Struct(mrb, music_mrb_class, &mrb_Music_struct, return_of_LoadMusicStream));
}
      
//Shader LoadShader
static mrb_value
mrb_LoadShader(mrb_state* mrb, mrb_value self) {
char * parameter_vsFileName;
char * parameter_fsFileName;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "vsFileName"),
mrb_intern_lit(mrb, "fsFileName")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_vsFileName = mrb_str_to_cstr(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_fsFileName = mrb_str_to_cstr(mrb, kw_values[1]);
}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *shader_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Shader_struct.struct_name);
Shader *return_of_LoadShader = (Shader *)mrb_malloc(mrb, sizeof(Shader));

*return_of_LoadShader = LoadShader(parameter_vsFileName, parameter_fsFileName);
return mrb_obj_value(Data_Wrap_Struct(mrb, shader_mrb_class, &mrb_Shader_struct, return_of_LoadShader));
}
      
//Shader LoadShaderFromMemory
static mrb_value
mrb_LoadShaderFromMemory(mrb_state* mrb, mrb_value self) {
char * parameter_vsCode;
char * parameter_fsCode;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "vsCode"),
mrb_intern_lit(mrb, "fsCode")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_vsCode = mrb_str_to_cstr(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_fsCode = mrb_str_to_cstr(mrb, kw_values[1]);
}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *shader_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Shader_struct.struct_name);
Shader *return_of_LoadShaderFromMemory = (Shader *)mrb_malloc(mrb, sizeof(Shader));

*return_of_LoadShaderFromMemory = LoadShaderFromMemory(parameter_vsCode, parameter_fsCode);
return mrb_obj_value(Data_Wrap_Struct(mrb, shader_mrb_class, &mrb_Shader_struct, return_of_LoadShaderFromMemory));
}
      
//Sound LoadSound
static mrb_value
mrb_LoadSound(mrb_state* mrb, mrb_value self) {
char * parameter_fileName;

mrb_get_args(mrb, "z", &parameter_fileName);
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *sound_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Sound_struct.struct_name);
Sound *return_of_LoadSound = (Sound *)mrb_malloc(mrb, sizeof(Sound));

*return_of_LoadSound = LoadSound(parameter_fileName);
return mrb_obj_value(Data_Wrap_Struct(mrb, sound_mrb_class, &mrb_Sound_struct, return_of_LoadSound));
}
      
//Sound LoadSoundFromWave
static mrb_value
mrb_LoadSoundFromWave(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_wave;

mrb_get_args(mrb, "o", &parameter_mrb_wave);
Wave *parameter_wave;
parameter_wave = DATA_GET_PTR(mrb, parameter_mrb_wave, &mrb_Wave_struct, Wave);
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *sound_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Sound_struct.struct_name);
Sound *return_of_LoadSoundFromWave = (Sound *)mrb_malloc(mrb, sizeof(Sound));

*return_of_LoadSoundFromWave = LoadSoundFromWave(*parameter_wave);
return mrb_obj_value(Data_Wrap_Struct(mrb, sound_mrb_class, &mrb_Sound_struct, return_of_LoadSoundFromWave));
}
      
//int LoadStorageValue
static mrb_value
mrb_LoadStorageValue(mrb_state* mrb, mrb_value self) {
mrb_int parameter_position;

mrb_get_args(mrb, "i", &parameter_position);
int return_of_LoadStorageValue;

return_of_LoadStorageValue = LoadStorageValue(parameter_position);
return mrb_fixnum_value(return_of_LoadStorageValue);
}
      
//VrStereoConfig LoadVrStereoConfig
static mrb_value
mrb_LoadVrStereoConfig(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_device;

mrb_get_args(mrb, "o", &parameter_mrb_device);
VrDeviceInfo *parameter_device;
parameter_device = DATA_GET_PTR(mrb, parameter_mrb_device, &mrb_VrDeviceInfo_struct, VrDeviceInfo);
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *vrstereoconfig_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_VrStereoConfig_struct.struct_name);
VrStereoConfig *return_of_LoadVrStereoConfig = (VrStereoConfig *)mrb_malloc(mrb, sizeof(VrStereoConfig));

*return_of_LoadVrStereoConfig = LoadVrStereoConfig(*parameter_device);
return mrb_obj_value(Data_Wrap_Struct(mrb, vrstereoconfig_mrb_class, &mrb_VrStereoConfig_struct, return_of_LoadVrStereoConfig));
}
      
//Wave LoadWave
static mrb_value
mrb_LoadWave(mrb_state* mrb, mrb_value self) {
char * parameter_fileName;

mrb_get_args(mrb, "z", &parameter_fileName);
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *wave_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Wave_struct.struct_name);
Wave *return_of_LoadWave = (Wave *)mrb_malloc(mrb, sizeof(Wave));

*return_of_LoadWave = LoadWave(parameter_fileName);
return mrb_obj_value(Data_Wrap_Struct(mrb, wave_mrb_class, &mrb_Wave_struct, return_of_LoadWave));
}
      
//float * LoadWaveSamples
static mrb_value
mrb_LoadWaveSamples(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_wave;

mrb_get_args(mrb, "o", &parameter_mrb_wave);
Wave *parameter_wave;
parameter_wave = DATA_GET_PTR(mrb, parameter_mrb_wave, &mrb_Wave_struct, Wave);
float * return_of_LoadWaveSamples;

return_of_LoadWaveSamples = LoadWaveSamples(*parameter_wave);
return mrb_float_value(mrb, *return_of_LoadWaveSamples);
}
      
//void MaximizeWindow
static mrb_value
mrb_MaximizeWindow(mrb_state* mrb, mrb_value self) {

MaximizeWindow();
return mrb_nil_value();
}
      
//int MeasureText
static mrb_value
mrb_MeasureText(mrb_state* mrb, mrb_value self) {
char * parameter_text;
int parameter_fontSize;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "text"),
mrb_intern_lit(mrb, "fontSize")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_text = mrb_str_to_cstr(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_fontSize = mrb_as_int(mrb, kw_values[1]);
}
        
int return_of_MeasureText;

return_of_MeasureText = MeasureText(parameter_text, parameter_fontSize);
return mrb_fixnum_value(return_of_MeasureText);
}
      
//Vector2 MeasureTextEx
static mrb_value
mrb_MeasureTextEx(mrb_state* mrb, mrb_value self) {
Font *parameter_font;
char * parameter_text;
float parameter_fontSize;
float parameter_spacing;

uint32_t kw_num = 4;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "font"),
mrb_intern_lit(mrb, "text"),
mrb_intern_lit(mrb, "fontSize"),
mrb_intern_lit(mrb, "spacing")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_font = DATA_GET_PTR(mrb, kw_values[0], &mrb_Font_struct, Font);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_text = mrb_str_to_cstr(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_fontSize = mrb_as_float(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_spacing = mrb_as_float(mrb, kw_values[3]);
}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *vector2_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Vector2_struct.struct_name);
Vector2 *return_of_MeasureTextEx = (Vector2 *)mrb_malloc(mrb, sizeof(Vector2));

*return_of_MeasureTextEx = MeasureTextEx(*parameter_font, parameter_text, parameter_fontSize, parameter_spacing);
return mrb_obj_value(Data_Wrap_Struct(mrb, vector2_mrb_class, &mrb_Vector2_struct, return_of_MeasureTextEx));
}
      
//void MinimizeWindow
static mrb_value
mrb_MinimizeWindow(mrb_state* mrb, mrb_value self) {

MinimizeWindow();
return mrb_nil_value();
}
      
//void OpenURL
static mrb_value
mrb_OpenURL(mrb_state* mrb, mrb_value self) {
char * parameter_url;

mrb_get_args(mrb, "z", &parameter_url);

OpenURL(parameter_url);
return mrb_nil_value();
}
      
//void PauseAudioStream
static mrb_value
mrb_PauseAudioStream(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_stream;

mrb_get_args(mrb, "o", &parameter_mrb_stream);
AudioStream *parameter_stream;
parameter_stream = DATA_GET_PTR(mrb, parameter_mrb_stream, &mrb_AudioStream_struct, AudioStream);

PauseAudioStream(*parameter_stream);
return mrb_nil_value();
}
      
//void PauseMusicStream
static mrb_value
mrb_PauseMusicStream(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_music;

mrb_get_args(mrb, "o", &parameter_mrb_music);
Music *parameter_music;
parameter_music = DATA_GET_PTR(mrb, parameter_mrb_music, &mrb_Music_struct, Music);

PauseMusicStream(*parameter_music);
return mrb_nil_value();
}
      
//void PauseSound
static mrb_value
mrb_PauseSound(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_sound;

mrb_get_args(mrb, "o", &parameter_mrb_sound);
Sound *parameter_sound;
parameter_sound = DATA_GET_PTR(mrb, parameter_mrb_sound, &mrb_Sound_struct, Sound);

PauseSound(*parameter_sound);
return mrb_nil_value();
}
      
//void PlayAudioStream
static mrb_value
mrb_PlayAudioStream(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_stream;

mrb_get_args(mrb, "o", &parameter_mrb_stream);
AudioStream *parameter_stream;
parameter_stream = DATA_GET_PTR(mrb, parameter_mrb_stream, &mrb_AudioStream_struct, AudioStream);

PlayAudioStream(*parameter_stream);
return mrb_nil_value();
}
      
//void PlayMusicStream
static mrb_value
mrb_PlayMusicStream(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_music;

mrb_get_args(mrb, "o", &parameter_mrb_music);
Music *parameter_music;
parameter_music = DATA_GET_PTR(mrb, parameter_mrb_music, &mrb_Music_struct, Music);

PlayMusicStream(*parameter_music);
return mrb_nil_value();
}
      
//void PlaySound
static mrb_value
mrb_PlaySound(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_sound;

mrb_get_args(mrb, "o", &parameter_mrb_sound);
Sound *parameter_sound;
parameter_sound = DATA_GET_PTR(mrb, parameter_mrb_sound, &mrb_Sound_struct, Sound);

PlaySound(*parameter_sound);
return mrb_nil_value();
}
      
//void PlaySoundMulti
static mrb_value
mrb_PlaySoundMulti(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_sound;

mrb_get_args(mrb, "o", &parameter_mrb_sound);
Sound *parameter_sound;
parameter_sound = DATA_GET_PTR(mrb, parameter_mrb_sound, &mrb_Sound_struct, Sound);

PlaySoundMulti(*parameter_sound);
return mrb_nil_value();
}
      
//void PollInputEvents
static mrb_value
mrb_PollInputEvents(mrb_state* mrb, mrb_value self) {

PollInputEvents();
return mrb_nil_value();
}
      
//void RestoreWindow
static mrb_value
mrb_RestoreWindow(mrb_state* mrb, mrb_value self) {

RestoreWindow();
return mrb_nil_value();
}
      
//void ResumeAudioStream
static mrb_value
mrb_ResumeAudioStream(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_stream;

mrb_get_args(mrb, "o", &parameter_mrb_stream);
AudioStream *parameter_stream;
parameter_stream = DATA_GET_PTR(mrb, parameter_mrb_stream, &mrb_AudioStream_struct, AudioStream);

ResumeAudioStream(*parameter_stream);
return mrb_nil_value();
}
      
//void ResumeMusicStream
static mrb_value
mrb_ResumeMusicStream(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_music;

mrb_get_args(mrb, "o", &parameter_mrb_music);
Music *parameter_music;
parameter_music = DATA_GET_PTR(mrb, parameter_mrb_music, &mrb_Music_struct, Music);

ResumeMusicStream(*parameter_music);
return mrb_nil_value();
}
      
//void ResumeSound
static mrb_value
mrb_ResumeSound(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_sound;

mrb_get_args(mrb, "o", &parameter_mrb_sound);
Sound *parameter_sound;
parameter_sound = DATA_GET_PTR(mrb, parameter_mrb_sound, &mrb_Sound_struct, Sound);

ResumeSound(*parameter_sound);
return mrb_nil_value();
}
      
//bool SaveFileText
static mrb_value
mrb_SaveFileText(mrb_state* mrb, mrb_value self) {
char * parameter_fileName;
char * parameter_text;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "fileName"),
mrb_intern_lit(mrb, "text")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_fileName = mrb_str_to_cstr(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_text = mrb_str_to_cstr(mrb, kw_values[1]);
}
        
bool return_of_SaveFileText;

return_of_SaveFileText = SaveFileText(parameter_fileName, parameter_text);
return mrb_bool_value(return_of_SaveFileText);
}
      
//bool SaveStorageValue
static mrb_value
mrb_SaveStorageValue(mrb_state* mrb, mrb_value self) {
int parameter_position;
int parameter_value;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "position"),
mrb_intern_lit(mrb, "value")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_position = mrb_as_int(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_value = mrb_as_int(mrb, kw_values[1]);
}
        
bool return_of_SaveStorageValue;

return_of_SaveStorageValue = SaveStorageValue(parameter_position, parameter_value);
return mrb_bool_value(return_of_SaveStorageValue);
}
      
//void SeekMusicStream
static mrb_value
mrb_SeekMusicStream(mrb_state* mrb, mrb_value self) {
Music *parameter_music;
float parameter_position;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "music"),
mrb_intern_lit(mrb, "position")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_music = DATA_GET_PTR(mrb, kw_values[0], &mrb_Music_struct, Music);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_position = mrb_as_float(mrb, kw_values[1]);
}
        

SeekMusicStream(*parameter_music, parameter_position);
return mrb_nil_value();
}
      
//void SetAudioStreamBufferSizeDefault
static mrb_value
mrb_SetAudioStreamBufferSizeDefault(mrb_state* mrb, mrb_value self) {
mrb_int parameter_size;

mrb_get_args(mrb, "i", &parameter_size);

SetAudioStreamBufferSizeDefault(parameter_size);
return mrb_nil_value();
}
      
//void SetAudioStreamPan
static mrb_value
mrb_SetAudioStreamPan(mrb_state* mrb, mrb_value self) {
AudioStream *parameter_stream;
float parameter_pan;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "stream"),
mrb_intern_lit(mrb, "pan")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_stream = DATA_GET_PTR(mrb, kw_values[0], &mrb_AudioStream_struct, AudioStream);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_pan = mrb_as_float(mrb, kw_values[1]);
}
        

SetAudioStreamPan(*parameter_stream, parameter_pan);
return mrb_nil_value();
}
      
//void SetAudioStreamPitch
static mrb_value
mrb_SetAudioStreamPitch(mrb_state* mrb, mrb_value self) {
AudioStream *parameter_stream;
float parameter_pitch;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "stream"),
mrb_intern_lit(mrb, "pitch")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_stream = DATA_GET_PTR(mrb, kw_values[0], &mrb_AudioStream_struct, AudioStream);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_pitch = mrb_as_float(mrb, kw_values[1]);
}
        

SetAudioStreamPitch(*parameter_stream, parameter_pitch);
return mrb_nil_value();
}
      
//void SetAudioStreamVolume
static mrb_value
mrb_SetAudioStreamVolume(mrb_state* mrb, mrb_value self) {
AudioStream *parameter_stream;
float parameter_volume;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "stream"),
mrb_intern_lit(mrb, "volume")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_stream = DATA_GET_PTR(mrb, kw_values[0], &mrb_AudioStream_struct, AudioStream);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_volume = mrb_as_float(mrb, kw_values[1]);
}
        

SetAudioStreamVolume(*parameter_stream, parameter_volume);
return mrb_nil_value();
}
      
//void SetCameraAltControl
static mrb_value
mrb_SetCameraAltControl(mrb_state* mrb, mrb_value self) {
mrb_int parameter_keyAlt;

mrb_get_args(mrb, "i", &parameter_keyAlt);

SetCameraAltControl(parameter_keyAlt);
return mrb_nil_value();
}
      
//void SetCameraMoveControls
static mrb_value
mrb_SetCameraMoveControls(mrb_state* mrb, mrb_value self) {
int parameter_keyFront;
int parameter_keyBack;
int parameter_keyRight;
int parameter_keyLeft;
int parameter_keyUp;
int parameter_keyDown;

uint32_t kw_num = 6;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "keyFront"),
mrb_intern_lit(mrb, "keyBack"),
mrb_intern_lit(mrb, "keyRight"),
mrb_intern_lit(mrb, "keyLeft"),
mrb_intern_lit(mrb, "keyUp"),
mrb_intern_lit(mrb, "keyDown")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_keyFront = mrb_as_int(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_keyBack = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_keyRight = mrb_as_int(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_keyLeft = mrb_as_int(mrb, kw_values[3]);
}
        
if (mrb_undef_p(kw_values[4])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_keyUp = mrb_as_int(mrb, kw_values[4]);
}
        
if (mrb_undef_p(kw_values[5])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_keyDown = mrb_as_int(mrb, kw_values[5]);
}
        

SetCameraMoveControls(parameter_keyFront, parameter_keyBack, parameter_keyRight, parameter_keyLeft, parameter_keyUp, parameter_keyDown);
return mrb_nil_value();
}
      
//void SetCameraPanControl
static mrb_value
mrb_SetCameraPanControl(mrb_state* mrb, mrb_value self) {
mrb_int parameter_keyPan;

mrb_get_args(mrb, "i", &parameter_keyPan);

SetCameraPanControl(parameter_keyPan);
return mrb_nil_value();
}
      
//void SetCameraSmoothZoomControl
static mrb_value
mrb_SetCameraSmoothZoomControl(mrb_state* mrb, mrb_value self) {
mrb_int parameter_keySmoothZoom;

mrb_get_args(mrb, "i", &parameter_keySmoothZoom);

SetCameraSmoothZoomControl(parameter_keySmoothZoom);
return mrb_nil_value();
}
      
//void SetClipboardText
static mrb_value
mrb_SetClipboardText(mrb_state* mrb, mrb_value self) {
char * parameter_text;

mrb_get_args(mrb, "z", &parameter_text);

SetClipboardText(parameter_text);
return mrb_nil_value();
}
      
//void SetConfigFlags
static mrb_value
mrb_SetConfigFlags(mrb_state* mrb, mrb_value self) {
mrb_int parameter_flags;

mrb_get_args(mrb, "i", &parameter_flags);

SetConfigFlags(parameter_flags);
return mrb_nil_value();
}
      
//void SetExitKey
static mrb_value
mrb_SetExitKey(mrb_state* mrb, mrb_value self) {
mrb_int parameter_key;

mrb_get_args(mrb, "i", &parameter_key);

SetExitKey(parameter_key);
return mrb_nil_value();
}
      
//int SetGamepadMappings
static mrb_value
mrb_SetGamepadMappings(mrb_state* mrb, mrb_value self) {
char * parameter_mappings;

mrb_get_args(mrb, "z", &parameter_mappings);
int return_of_SetGamepadMappings;

return_of_SetGamepadMappings = SetGamepadMappings(parameter_mappings);
return mrb_fixnum_value(return_of_SetGamepadMappings);
}
      
//void SetGesturesEnabled
static mrb_value
mrb_SetGesturesEnabled(mrb_state* mrb, mrb_value self) {
mrb_int parameter_flags;

mrb_get_args(mrb, "i", &parameter_flags);

SetGesturesEnabled(parameter_flags);
return mrb_nil_value();
}
      
//void SetMasterVolume
static mrb_value
mrb_SetMasterVolume(mrb_state* mrb, mrb_value self) {
mrb_float parameter_volume;

mrb_get_args(mrb, "f", &parameter_volume);

SetMasterVolume(parameter_volume);
return mrb_nil_value();
}
      
//void SetMaterialTexture
static mrb_value
mrb_SetMaterialTexture(mrb_state* mrb, mrb_value self) {
Material *parameter_material;
int parameter_mapType;
Texture *parameter_texture;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "material"),
mrb_intern_lit(mrb, "mapType"),
mrb_intern_lit(mrb, "texture")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_material = DATA_GET_PTR(mrb, kw_values[0], &mrb_Material_struct, Material);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_mapType = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_texture = DATA_GET_PTR(mrb, kw_values[2], &mrb_Texture_struct, Texture);

}
        

SetMaterialTexture(parameter_material, parameter_mapType, *parameter_texture);
return mrb_nil_value();
}
      
//void SetModelMeshMaterial
static mrb_value
mrb_SetModelMeshMaterial(mrb_state* mrb, mrb_value self) {
Model *parameter_model;
int parameter_meshId;
int parameter_materialId;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "model"),
mrb_intern_lit(mrb, "meshId"),
mrb_intern_lit(mrb, "materialId")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_model = DATA_GET_PTR(mrb, kw_values[0], &mrb_Model_struct, Model);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_meshId = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_materialId = mrb_as_int(mrb, kw_values[2]);
}
        

SetModelMeshMaterial(parameter_model, parameter_meshId, parameter_materialId);
return mrb_nil_value();
}
      
//void SetMouseCursor
static mrb_value
mrb_SetMouseCursor(mrb_state* mrb, mrb_value self) {
mrb_int parameter_cursor;

mrb_get_args(mrb, "i", &parameter_cursor);

SetMouseCursor(parameter_cursor);
return mrb_nil_value();
}
      
//void SetMouseOffset
static mrb_value
mrb_SetMouseOffset(mrb_state* mrb, mrb_value self) {
int parameter_offsetX;
int parameter_offsetY;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "offsetX"),
mrb_intern_lit(mrb, "offsetY")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_offsetX = mrb_as_int(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_offsetY = mrb_as_int(mrb, kw_values[1]);
}
        

SetMouseOffset(parameter_offsetX, parameter_offsetY);
return mrb_nil_value();
}
      
//void SetMousePosition
static mrb_value
mrb_SetMousePosition(mrb_state* mrb, mrb_value self) {
int parameter_x;
int parameter_y;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "x"),
mrb_intern_lit(mrb, "y")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_x = mrb_as_int(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_y = mrb_as_int(mrb, kw_values[1]);
}
        

SetMousePosition(parameter_x, parameter_y);
return mrb_nil_value();
}
      
//void SetMouseScale
static mrb_value
mrb_SetMouseScale(mrb_state* mrb, mrb_value self) {
float parameter_scaleX;
float parameter_scaleY;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "scaleX"),
mrb_intern_lit(mrb, "scaleY")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_scaleX = mrb_as_float(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_scaleY = mrb_as_float(mrb, kw_values[1]);
}
        

SetMouseScale(parameter_scaleX, parameter_scaleY);
return mrb_nil_value();
}
      
//void SetMusicPan
static mrb_value
mrb_SetMusicPan(mrb_state* mrb, mrb_value self) {
Music *parameter_music;
float parameter_pan;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "music"),
mrb_intern_lit(mrb, "pan")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_music = DATA_GET_PTR(mrb, kw_values[0], &mrb_Music_struct, Music);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_pan = mrb_as_float(mrb, kw_values[1]);
}
        

SetMusicPan(*parameter_music, parameter_pan);
return mrb_nil_value();
}
      
//void SetMusicPitch
static mrb_value
mrb_SetMusicPitch(mrb_state* mrb, mrb_value self) {
Music *parameter_music;
float parameter_pitch;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "music"),
mrb_intern_lit(mrb, "pitch")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_music = DATA_GET_PTR(mrb, kw_values[0], &mrb_Music_struct, Music);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_pitch = mrb_as_float(mrb, kw_values[1]);
}
        

SetMusicPitch(*parameter_music, parameter_pitch);
return mrb_nil_value();
}
      
//void SetMusicVolume
static mrb_value
mrb_SetMusicVolume(mrb_state* mrb, mrb_value self) {
Music *parameter_music;
float parameter_volume;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "music"),
mrb_intern_lit(mrb, "volume")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_music = DATA_GET_PTR(mrb, kw_values[0], &mrb_Music_struct, Music);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_volume = mrb_as_float(mrb, kw_values[1]);
}
        

SetMusicVolume(*parameter_music, parameter_volume);
return mrb_nil_value();
}
      
//void SetRandomSeed
static mrb_value
mrb_SetRandomSeed(mrb_state* mrb, mrb_value self) {
mrb_int parameter_seed;

mrb_get_args(mrb, "i", &parameter_seed);

SetRandomSeed(parameter_seed);
return mrb_nil_value();
}
      
//void SetShaderValueMatrix
static mrb_value
mrb_SetShaderValueMatrix(mrb_state* mrb, mrb_value self) {
Shader *parameter_shader;
int parameter_locIndex;
Matrix *parameter_mat;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "shader"),
mrb_intern_lit(mrb, "locIndex"),
mrb_intern_lit(mrb, "mat")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_shader = DATA_GET_PTR(mrb, kw_values[0], &mrb_Shader_struct, Shader);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_locIndex = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_mat = DATA_GET_PTR(mrb, kw_values[2], &mrb_Matrix_struct, Matrix);

}
        

SetShaderValueMatrix(*parameter_shader, parameter_locIndex, *parameter_mat);
return mrb_nil_value();
}
      
//void SetShaderValueTexture
static mrb_value
mrb_SetShaderValueTexture(mrb_state* mrb, mrb_value self) {
Shader *parameter_shader;
int parameter_locIndex;
Texture *parameter_texture;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "shader"),
mrb_intern_lit(mrb, "locIndex"),
mrb_intern_lit(mrb, "texture")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_shader = DATA_GET_PTR(mrb, kw_values[0], &mrb_Shader_struct, Shader);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_locIndex = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_texture = DATA_GET_PTR(mrb, kw_values[2], &mrb_Texture_struct, Texture);

}
        

SetShaderValueTexture(*parameter_shader, parameter_locIndex, *parameter_texture);
return mrb_nil_value();
}
      
//void SetShapesTexture
static mrb_value
mrb_SetShapesTexture(mrb_state* mrb, mrb_value self) {
Texture *parameter_texture;
Rectangle *parameter_source;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "texture"),
mrb_intern_lit(mrb, "source")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_texture = DATA_GET_PTR(mrb, kw_values[0], &mrb_Texture_struct, Texture);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_source = DATA_GET_PTR(mrb, kw_values[1], &mrb_Rectangle_struct, Rectangle);

}
        

SetShapesTexture(*parameter_texture, *parameter_source);
return mrb_nil_value();
}
      
//void SetSoundPan
static mrb_value
mrb_SetSoundPan(mrb_state* mrb, mrb_value self) {
Sound *parameter_sound;
float parameter_pan;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "sound"),
mrb_intern_lit(mrb, "pan")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_sound = DATA_GET_PTR(mrb, kw_values[0], &mrb_Sound_struct, Sound);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_pan = mrb_as_float(mrb, kw_values[1]);
}
        

SetSoundPan(*parameter_sound, parameter_pan);
return mrb_nil_value();
}
      
//void SetSoundPitch
static mrb_value
mrb_SetSoundPitch(mrb_state* mrb, mrb_value self) {
Sound *parameter_sound;
float parameter_pitch;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "sound"),
mrb_intern_lit(mrb, "pitch")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_sound = DATA_GET_PTR(mrb, kw_values[0], &mrb_Sound_struct, Sound);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_pitch = mrb_as_float(mrb, kw_values[1]);
}
        

SetSoundPitch(*parameter_sound, parameter_pitch);
return mrb_nil_value();
}
      
//void SetSoundVolume
static mrb_value
mrb_SetSoundVolume(mrb_state* mrb, mrb_value self) {
Sound *parameter_sound;
float parameter_volume;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "sound"),
mrb_intern_lit(mrb, "volume")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_sound = DATA_GET_PTR(mrb, kw_values[0], &mrb_Sound_struct, Sound);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_volume = mrb_as_float(mrb, kw_values[1]);
}
        

SetSoundVolume(*parameter_sound, parameter_volume);
return mrb_nil_value();
}
      
//void SetTargetFPS
static mrb_value
mrb_SetTargetFPS(mrb_state* mrb, mrb_value self) {
mrb_int parameter_fps;

mrb_get_args(mrb, "i", &parameter_fps);

SetTargetFPS(parameter_fps);
return mrb_nil_value();
}
      
//void SetTextureFilter
static mrb_value
mrb_SetTextureFilter(mrb_state* mrb, mrb_value self) {
Texture *parameter_texture;
int parameter_filter;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "texture"),
mrb_intern_lit(mrb, "filter")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_texture = DATA_GET_PTR(mrb, kw_values[0], &mrb_Texture_struct, Texture);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_filter = mrb_as_int(mrb, kw_values[1]);
}
        

SetTextureFilter(*parameter_texture, parameter_filter);
return mrb_nil_value();
}
      
//void SetTextureWrap
static mrb_value
mrb_SetTextureWrap(mrb_state* mrb, mrb_value self) {
Texture *parameter_texture;
int parameter_wrap;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "texture"),
mrb_intern_lit(mrb, "wrap")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_texture = DATA_GET_PTR(mrb, kw_values[0], &mrb_Texture_struct, Texture);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_wrap = mrb_as_int(mrb, kw_values[1]);
}
        

SetTextureWrap(*parameter_texture, parameter_wrap);
return mrb_nil_value();
}
      
//void SetTraceLogLevel
static mrb_value
mrb_SetTraceLogLevel(mrb_state* mrb, mrb_value self) {
mrb_int parameter_logLevel;

mrb_get_args(mrb, "i", &parameter_logLevel);

SetTraceLogLevel(parameter_logLevel);
return mrb_nil_value();
}
      
//void SetWindowIcon
static mrb_value
mrb_SetWindowIcon(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_image;

mrb_get_args(mrb, "o", &parameter_mrb_image);
Image *parameter_image;
parameter_image = DATA_GET_PTR(mrb, parameter_mrb_image, &mrb_Image_struct, Image);

SetWindowIcon(*parameter_image);
return mrb_nil_value();
}
      
//void SetWindowMinSize
static mrb_value
mrb_SetWindowMinSize(mrb_state* mrb, mrb_value self) {
int parameter_width;
int parameter_height;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "width"),
mrb_intern_lit(mrb, "height")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_width = mrb_as_int(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_height = mrb_as_int(mrb, kw_values[1]);
}
        

SetWindowMinSize(parameter_width, parameter_height);
return mrb_nil_value();
}
      
//void SetWindowMonitor
static mrb_value
mrb_SetWindowMonitor(mrb_state* mrb, mrb_value self) {
mrb_int parameter_monitor;

mrb_get_args(mrb, "i", &parameter_monitor);

SetWindowMonitor(parameter_monitor);
return mrb_nil_value();
}
      
//void SetWindowOpacity
static mrb_value
mrb_SetWindowOpacity(mrb_state* mrb, mrb_value self) {
mrb_float parameter_opacity;

mrb_get_args(mrb, "f", &parameter_opacity);

SetWindowOpacity(parameter_opacity);
return mrb_nil_value();
}
      
//void SetWindowPosition
static mrb_value
mrb_SetWindowPosition(mrb_state* mrb, mrb_value self) {
int parameter_x;
int parameter_y;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "x"),
mrb_intern_lit(mrb, "y")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_x = mrb_as_int(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_y = mrb_as_int(mrb, kw_values[1]);
}
        

SetWindowPosition(parameter_x, parameter_y);
return mrb_nil_value();
}
      
//void SetWindowSize
static mrb_value
mrb_SetWindowSize(mrb_state* mrb, mrb_value self) {
int parameter_width;
int parameter_height;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "width"),
mrb_intern_lit(mrb, "height")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_width = mrb_as_int(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_height = mrb_as_int(mrb, kw_values[1]);
}
        

SetWindowSize(parameter_width, parameter_height);
return mrb_nil_value();
}
      
//void SetWindowState
static mrb_value
mrb_SetWindowState(mrb_state* mrb, mrb_value self) {
mrb_int parameter_flags;

mrb_get_args(mrb, "i", &parameter_flags);

SetWindowState(parameter_flags);
return mrb_nil_value();
}
      
//void SetWindowTitle
static mrb_value
mrb_SetWindowTitle(mrb_state* mrb, mrb_value self) {
char * parameter_title;

mrb_get_args(mrb, "z", &parameter_title);

SetWindowTitle(parameter_title);
return mrb_nil_value();
}
      
//void ShowCursor
static mrb_value
mrb_ShowCursor(mrb_state* mrb, mrb_value self) {

ShowCursor();
return mrb_nil_value();
}
      
//void StopAudioStream
static mrb_value
mrb_StopAudioStream(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_stream;

mrb_get_args(mrb, "o", &parameter_mrb_stream);
AudioStream *parameter_stream;
parameter_stream = DATA_GET_PTR(mrb, parameter_mrb_stream, &mrb_AudioStream_struct, AudioStream);

StopAudioStream(*parameter_stream);
return mrb_nil_value();
}
      
//void StopMusicStream
static mrb_value
mrb_StopMusicStream(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_music;

mrb_get_args(mrb, "o", &parameter_mrb_music);
Music *parameter_music;
parameter_music = DATA_GET_PTR(mrb, parameter_mrb_music, &mrb_Music_struct, Music);

StopMusicStream(*parameter_music);
return mrb_nil_value();
}
      
//void StopSound
static mrb_value
mrb_StopSound(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_sound;

mrb_get_args(mrb, "o", &parameter_mrb_sound);
Sound *parameter_sound;
parameter_sound = DATA_GET_PTR(mrb, parameter_mrb_sound, &mrb_Sound_struct, Sound);

StopSound(*parameter_sound);
return mrb_nil_value();
}
      
//void StopSoundMulti
static mrb_value
mrb_StopSoundMulti(mrb_state* mrb, mrb_value self) {

StopSoundMulti();
return mrb_nil_value();
}
      
//void SwapScreenBuffer
static mrb_value
mrb_SwapScreenBuffer(mrb_state* mrb, mrb_value self) {

SwapScreenBuffer();
return mrb_nil_value();
}
      
//void TakeScreenshot
static mrb_value
mrb_TakeScreenshot(mrb_state* mrb, mrb_value self) {
char * parameter_fileName;

mrb_get_args(mrb, "z", &parameter_fileName);

TakeScreenshot(parameter_fileName);
return mrb_nil_value();
}
      
//void TextAppend
static mrb_value
mrb_TextAppend(mrb_state* mrb, mrb_value self) {
char * parameter_text;
char * parameter_append;
int parameter_position;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "text"),
mrb_intern_lit(mrb, "append"),
mrb_intern_lit(mrb, "position")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_text = mrb_str_to_cstr(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_append = mrb_str_to_cstr(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_position = mrb_as_int(mrb, kw_values[2]);
}
        

TextAppend(parameter_text, parameter_append, (int *)&parameter_position);
return mrb_nil_value();
}
      
//int TextCopy
static mrb_value
mrb_TextCopy(mrb_state* mrb, mrb_value self) {
char * parameter_dst;
char * parameter_src;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "dst"),
mrb_intern_lit(mrb, "src")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_dst = mrb_str_to_cstr(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_src = mrb_str_to_cstr(mrb, kw_values[1]);
}
        
int return_of_TextCopy;

return_of_TextCopy = TextCopy(parameter_dst, parameter_src);
return mrb_fixnum_value(return_of_TextCopy);
}
      
//int TextFindIndex
static mrb_value
mrb_TextFindIndex(mrb_state* mrb, mrb_value self) {
char * parameter_text;
char * parameter_find;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "text"),
mrb_intern_lit(mrb, "find")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_text = mrb_str_to_cstr(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_find = mrb_str_to_cstr(mrb, kw_values[1]);
}
        
int return_of_TextFindIndex;

return_of_TextFindIndex = TextFindIndex(parameter_text, parameter_find);
return mrb_fixnum_value(return_of_TextFindIndex);
}
      
//char * TextInsert
static mrb_value
mrb_TextInsert(mrb_state* mrb, mrb_value self) {
char * parameter_text;
char * parameter_insert;
int parameter_position;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "text"),
mrb_intern_lit(mrb, "insert"),
mrb_intern_lit(mrb, "position")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_text = mrb_str_to_cstr(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_insert = mrb_str_to_cstr(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_position = mrb_as_int(mrb, kw_values[2]);
}
        
char * return_of_TextInsert;

return_of_TextInsert = TextInsert(parameter_text, parameter_insert, parameter_position);
return mrb_str_new_cstr(mrb, return_of_TextInsert);
}
      
//bool TextIsEqual
static mrb_value
mrb_TextIsEqual(mrb_state* mrb, mrb_value self) {
char * parameter_text1;
char * parameter_text2;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "text1"),
mrb_intern_lit(mrb, "text2")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_text1 = mrb_str_to_cstr(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_text2 = mrb_str_to_cstr(mrb, kw_values[1]);
}
        
bool return_of_TextIsEqual;

return_of_TextIsEqual = TextIsEqual(parameter_text1, parameter_text2);
return mrb_bool_value(return_of_TextIsEqual);
}
      
//unsigned int TextLength
static mrb_value
mrb_TextLength(mrb_state* mrb, mrb_value self) {
char * parameter_text;

mrb_get_args(mrb, "z", &parameter_text);
unsigned int return_of_TextLength;

return_of_TextLength = TextLength(parameter_text);
return mrb_fixnum_value(return_of_TextLength);
}
      
//char * TextReplace
static mrb_value
mrb_TextReplace(mrb_state* mrb, mrb_value self) {
char * parameter_text;
char * parameter_replace;
char * parameter_by;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "text"),
mrb_intern_lit(mrb, "replace"),
mrb_intern_lit(mrb, "by")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_text = mrb_str_to_cstr(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_replace = mrb_str_to_cstr(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_by = mrb_str_to_cstr(mrb, kw_values[2]);
}
        
char * return_of_TextReplace;

return_of_TextReplace = TextReplace(parameter_text, parameter_replace, parameter_by);
return mrb_str_new_cstr(mrb, return_of_TextReplace);
}
      
//const char * TextSubtext
static mrb_value
mrb_TextSubtext(mrb_state* mrb, mrb_value self) {
char * parameter_text;
int parameter_position;
int parameter_length;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "text"),
mrb_intern_lit(mrb, "position"),
mrb_intern_lit(mrb, "length")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_text = mrb_str_to_cstr(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_position = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_length = mrb_as_int(mrb, kw_values[2]);
}
        
const char * return_of_TextSubtext;

return_of_TextSubtext = TextSubtext(parameter_text, parameter_position, parameter_length);
return mrb_str_new_cstr(mrb, return_of_TextSubtext);
}
      
//int TextToInteger
static mrb_value
mrb_TextToInteger(mrb_state* mrb, mrb_value self) {
char * parameter_text;

mrb_get_args(mrb, "z", &parameter_text);
int return_of_TextToInteger;

return_of_TextToInteger = TextToInteger(parameter_text);
return mrb_fixnum_value(return_of_TextToInteger);
}
      
//const char * TextToLower
static mrb_value
mrb_TextToLower(mrb_state* mrb, mrb_value self) {
char * parameter_text;

mrb_get_args(mrb, "z", &parameter_text);
const char * return_of_TextToLower;

return_of_TextToLower = TextToLower(parameter_text);
return mrb_str_new_cstr(mrb, return_of_TextToLower);
}
      
//const char * TextToPascal
static mrb_value
mrb_TextToPascal(mrb_state* mrb, mrb_value self) {
char * parameter_text;

mrb_get_args(mrb, "z", &parameter_text);
const char * return_of_TextToPascal;

return_of_TextToPascal = TextToPascal(parameter_text);
return mrb_str_new_cstr(mrb, return_of_TextToPascal);
}
      
//const char * TextToUpper
static mrb_value
mrb_TextToUpper(mrb_state* mrb, mrb_value self) {
char * parameter_text;

mrb_get_args(mrb, "z", &parameter_text);
const char * return_of_TextToUpper;

return_of_TextToUpper = TextToUpper(parameter_text);
return mrb_str_new_cstr(mrb, return_of_TextToUpper);
}
      
//void ToggleFullscreen
static mrb_value
mrb_ToggleFullscreen(mrb_state* mrb, mrb_value self) {

ToggleFullscreen();
return mrb_nil_value();
}
      
//void UnloadAudioStream
static mrb_value
mrb_UnloadAudioStream(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_stream;

mrb_get_args(mrb, "o", &parameter_mrb_stream);
AudioStream *parameter_stream;
parameter_stream = DATA_GET_PTR(mrb, parameter_mrb_stream, &mrb_AudioStream_struct, AudioStream);

UnloadAudioStream(*parameter_stream);
return mrb_nil_value();
}
      
//void UnloadCodepoints
static mrb_value
mrb_UnloadCodepoints(mrb_state* mrb, mrb_value self) {
mrb_int parameter_codepoints;

mrb_get_args(mrb, "i", &parameter_codepoints);

UnloadCodepoints((int *)&parameter_codepoints);
return mrb_nil_value();
}
      
//void UnloadFileData
static mrb_value
mrb_UnloadFileData(mrb_state* mrb, mrb_value self) {
mrb_int parameter_data;

mrb_get_args(mrb, "i", &parameter_data);

UnloadFileData((unsigned char *)&parameter_data);
return mrb_nil_value();
}
      
//void UnloadFileText
static mrb_value
mrb_UnloadFileText(mrb_state* mrb, mrb_value self) {
char * parameter_text;

mrb_get_args(mrb, "z", &parameter_text);

UnloadFileText(parameter_text);
return mrb_nil_value();
}
      
//void UnloadFont
static mrb_value
mrb_UnloadFont(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_font;

mrb_get_args(mrb, "o", &parameter_mrb_font);
Font *parameter_font;
parameter_font = DATA_GET_PTR(mrb, parameter_mrb_font, &mrb_Font_struct, Font);

UnloadFont(*parameter_font);
return mrb_nil_value();
}
      
//void UnloadFontData
static mrb_value
mrb_UnloadFontData(mrb_state* mrb, mrb_value self) {
GlyphInfo *parameter_chars;
int parameter_glyphCount;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "chars"),
mrb_intern_lit(mrb, "glyphCount")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_chars = DATA_GET_PTR(mrb, kw_values[0], &mrb_GlyphInfo_struct, GlyphInfo);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_glyphCount = mrb_as_int(mrb, kw_values[1]);
}
        

UnloadFontData(parameter_chars, parameter_glyphCount);
return mrb_nil_value();
}
      
//void UnloadImage
static mrb_value
mrb_UnloadImage(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_image;

mrb_get_args(mrb, "o", &parameter_mrb_image);
Image *parameter_image;
parameter_image = DATA_GET_PTR(mrb, parameter_mrb_image, &mrb_Image_struct, Image);

UnloadImage(*parameter_image);
return mrb_nil_value();
}
      
//void UnloadImageColors
static mrb_value
mrb_UnloadImageColors(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_colors;

mrb_get_args(mrb, "o", &parameter_mrb_colors);
Color *parameter_colors;
parameter_colors = DATA_GET_PTR(mrb, parameter_mrb_colors, &mrb_Color_struct, Color);

UnloadImageColors(parameter_colors);
return mrb_nil_value();
}
      
//void UnloadImagePalette
static mrb_value
mrb_UnloadImagePalette(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_colors;

mrb_get_args(mrb, "o", &parameter_mrb_colors);
Color *parameter_colors;
parameter_colors = DATA_GET_PTR(mrb, parameter_mrb_colors, &mrb_Color_struct, Color);

UnloadImagePalette(parameter_colors);
return mrb_nil_value();
}
      
//void UnloadMaterial
static mrb_value
mrb_UnloadMaterial(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_material;

mrb_get_args(mrb, "o", &parameter_mrb_material);
Material *parameter_material;
parameter_material = DATA_GET_PTR(mrb, parameter_mrb_material, &mrb_Material_struct, Material);

UnloadMaterial(*parameter_material);
return mrb_nil_value();
}
      
//void UnloadMesh
static mrb_value
mrb_UnloadMesh(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_mesh;

mrb_get_args(mrb, "o", &parameter_mrb_mesh);
Mesh *parameter_mesh;
parameter_mesh = DATA_GET_PTR(mrb, parameter_mrb_mesh, &mrb_Mesh_struct, Mesh);

UnloadMesh(*parameter_mesh);
return mrb_nil_value();
}
      
//void UnloadModel
static mrb_value
mrb_UnloadModel(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_model;

mrb_get_args(mrb, "o", &parameter_mrb_model);
Model *parameter_model;
parameter_model = DATA_GET_PTR(mrb, parameter_mrb_model, &mrb_Model_struct, Model);

UnloadModel(*parameter_model);
return mrb_nil_value();
}
      
//void UnloadModelAnimation
static mrb_value
mrb_UnloadModelAnimation(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_anim;

mrb_get_args(mrb, "o", &parameter_mrb_anim);
ModelAnimation *parameter_anim;
parameter_anim = DATA_GET_PTR(mrb, parameter_mrb_anim, &mrb_ModelAnimation_struct, ModelAnimation);

UnloadModelAnimation(*parameter_anim);
return mrb_nil_value();
}
      
//void UnloadModelAnimations
static mrb_value
mrb_UnloadModelAnimations(mrb_state* mrb, mrb_value self) {
ModelAnimation *parameter_animations;
int parameter_count;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "animations"),
mrb_intern_lit(mrb, "count")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_animations = DATA_GET_PTR(mrb, kw_values[0], &mrb_ModelAnimation_struct, ModelAnimation);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_count = mrb_as_int(mrb, kw_values[1]);
}
        

UnloadModelAnimations(parameter_animations, parameter_count);
return mrb_nil_value();
}
      
//void UnloadModelKeepMeshes
static mrb_value
mrb_UnloadModelKeepMeshes(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_model;

mrb_get_args(mrb, "o", &parameter_mrb_model);
Model *parameter_model;
parameter_model = DATA_GET_PTR(mrb, parameter_mrb_model, &mrb_Model_struct, Model);

UnloadModelKeepMeshes(*parameter_model);
return mrb_nil_value();
}
      
//void UnloadMusicStream
static mrb_value
mrb_UnloadMusicStream(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_music;

mrb_get_args(mrb, "o", &parameter_mrb_music);
Music *parameter_music;
parameter_music = DATA_GET_PTR(mrb, parameter_mrb_music, &mrb_Music_struct, Music);

UnloadMusicStream(*parameter_music);
return mrb_nil_value();
}
      
//void UnloadRenderTexture
static mrb_value
mrb_UnloadRenderTexture(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_target;

mrb_get_args(mrb, "o", &parameter_mrb_target);
RenderTexture *parameter_target;
parameter_target = DATA_GET_PTR(mrb, parameter_mrb_target, &mrb_RenderTexture_struct, RenderTexture);

UnloadRenderTexture(*parameter_target);
return mrb_nil_value();
}
      
//void UnloadShader
static mrb_value
mrb_UnloadShader(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_shader;

mrb_get_args(mrb, "o", &parameter_mrb_shader);
Shader *parameter_shader;
parameter_shader = DATA_GET_PTR(mrb, parameter_mrb_shader, &mrb_Shader_struct, Shader);

UnloadShader(*parameter_shader);
return mrb_nil_value();
}
      
//void UnloadSound
static mrb_value
mrb_UnloadSound(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_sound;

mrb_get_args(mrb, "o", &parameter_mrb_sound);
Sound *parameter_sound;
parameter_sound = DATA_GET_PTR(mrb, parameter_mrb_sound, &mrb_Sound_struct, Sound);

UnloadSound(*parameter_sound);
return mrb_nil_value();
}
      
//void UnloadTexture
static mrb_value
mrb_UnloadTexture(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_texture;

mrb_get_args(mrb, "o", &parameter_mrb_texture);
Texture *parameter_texture;
parameter_texture = DATA_GET_PTR(mrb, parameter_mrb_texture, &mrb_Texture_struct, Texture);

UnloadTexture(*parameter_texture);
return mrb_nil_value();
}
      
//void UnloadVrStereoConfig
static mrb_value
mrb_UnloadVrStereoConfig(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_config;

mrb_get_args(mrb, "o", &parameter_mrb_config);
VrStereoConfig *parameter_config;
parameter_config = DATA_GET_PTR(mrb, parameter_mrb_config, &mrb_VrStereoConfig_struct, VrStereoConfig);

UnloadVrStereoConfig(*parameter_config);
return mrb_nil_value();
}
      
//void UnloadWave
static mrb_value
mrb_UnloadWave(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_wave;

mrb_get_args(mrb, "o", &parameter_mrb_wave);
Wave *parameter_wave;
parameter_wave = DATA_GET_PTR(mrb, parameter_mrb_wave, &mrb_Wave_struct, Wave);

UnloadWave(*parameter_wave);
return mrb_nil_value();
}
      
//void UnloadWaveSamples
static mrb_value
mrb_UnloadWaveSamples(mrb_state* mrb, mrb_value self) {
mrb_float parameter_samples;

mrb_get_args(mrb, "f", &parameter_samples);

UnloadWaveSamples((float *)&parameter_samples);
return mrb_nil_value();
}
      
//void UpdateModelAnimation
static mrb_value
mrb_UpdateModelAnimation(mrb_state* mrb, mrb_value self) {
Model *parameter_model;
ModelAnimation *parameter_anim;
int parameter_frame;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "model"),
mrb_intern_lit(mrb, "anim"),
mrb_intern_lit(mrb, "frame")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_model = DATA_GET_PTR(mrb, kw_values[0], &mrb_Model_struct, Model);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_anim = DATA_GET_PTR(mrb, kw_values[1], &mrb_ModelAnimation_struct, ModelAnimation);

}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_frame = mrb_as_int(mrb, kw_values[2]);
}
        

UpdateModelAnimation(*parameter_model, *parameter_anim, parameter_frame);
return mrb_nil_value();
}
      
//void UpdateMusicStream
static mrb_value
mrb_UpdateMusicStream(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_music;

mrb_get_args(mrb, "o", &parameter_mrb_music);
Music *parameter_music;
parameter_music = DATA_GET_PTR(mrb, parameter_mrb_music, &mrb_Music_struct, Music);

UpdateMusicStream(*parameter_music);
return mrb_nil_value();
}
      
//void UploadMesh
static mrb_value
mrb_UploadMesh(mrb_state* mrb, mrb_value self) {
Mesh *parameter_mesh;
bool parameter_dynamic;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "mesh"),
mrb_intern_lit(mrb, "dynamic")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_mesh = DATA_GET_PTR(mrb, kw_values[0], &mrb_Mesh_struct, Mesh);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_dynamic = mrb_as_int(mrb, kw_values[1]);
}
        

UploadMesh(parameter_mesh, parameter_dynamic);
return mrb_nil_value();
}
      
//void WaitTime
static mrb_value
mrb_WaitTime(mrb_state* mrb, mrb_value self) {
mrb_float parameter_ms;

mrb_get_args(mrb, "f", &parameter_ms);

WaitTime(parameter_ms);
return mrb_nil_value();
}
      
//Wave WaveCopy
static mrb_value
mrb_WaveCopy(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_wave;

mrb_get_args(mrb, "o", &parameter_mrb_wave);
Wave *parameter_wave;
parameter_wave = DATA_GET_PTR(mrb, parameter_mrb_wave, &mrb_Wave_struct, Wave);
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *wave_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Wave_struct.struct_name);
Wave *return_of_WaveCopy = (Wave *)mrb_malloc(mrb, sizeof(Wave));

*return_of_WaveCopy = WaveCopy(*parameter_wave);
return mrb_obj_value(Data_Wrap_Struct(mrb, wave_mrb_class, &mrb_Wave_struct, return_of_WaveCopy));
}
      
//void WaveCrop
static mrb_value
mrb_WaveCrop(mrb_state* mrb, mrb_value self) {
Wave *parameter_wave;
int parameter_initSample;
int parameter_finalSample;

uint32_t kw_num = 3;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "wave"),
mrb_intern_lit(mrb, "initSample"),
mrb_intern_lit(mrb, "finalSample")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_wave = DATA_GET_PTR(mrb, kw_values[0], &mrb_Wave_struct, Wave);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_initSample = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_finalSample = mrb_as_int(mrb, kw_values[2]);
}
        

WaveCrop(parameter_wave, parameter_initSample, parameter_finalSample);
return mrb_nil_value();
}
      
//void WaveFormat
static mrb_value
mrb_WaveFormat(mrb_state* mrb, mrb_value self) {
Wave *parameter_wave;
int parameter_sampleRate;
int parameter_sampleSize;
int parameter_channels;

uint32_t kw_num = 4;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "wave"),
mrb_intern_lit(mrb, "sampleRate"),
mrb_intern_lit(mrb, "sampleSize"),
mrb_intern_lit(mrb, "channels")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_wave = DATA_GET_PTR(mrb, kw_values[0], &mrb_Wave_struct, Wave);

}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_sampleRate = mrb_as_int(mrb, kw_values[1]);
}
        
if (mrb_undef_p(kw_values[2])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_sampleSize = mrb_as_int(mrb, kw_values[2]);
}
        
if (mrb_undef_p(kw_values[3])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_channels = mrb_as_int(mrb, kw_values[3]);
}
        

WaveFormat(parameter_wave, parameter_sampleRate, parameter_sampleSize, parameter_channels);
return mrb_nil_value();
}
      
//bool WindowShouldClose
static mrb_value
mrb_WindowShouldClose(mrb_state* mrb, mrb_value self) {
bool return_of_WindowShouldClose;

return_of_WindowShouldClose = WindowShouldClose();
return mrb_bool_value(return_of_WindowShouldClose);
}
      
//RenderTexture LoadRenderTexture
static mrb_value
mrb_LoadRenderTexture(mrb_state* mrb, mrb_value self) {
int parameter_width;
int parameter_height;

uint32_t kw_num = 2;
const mrb_sym kw_names[] = {
mrb_intern_lit(mrb, "width"),
mrb_intern_lit(mrb, "height")
};
mrb_value kw_values[kw_num];
const mrb_kwargs kwargs = { kw_num, 0, kw_names, kw_values, NULL };
mrb_get_args(mrb, "|:", &kwargs);
        
if (mrb_undef_p(kw_values[0])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_width = mrb_as_int(mrb, kw_values[0]);
}
        
if (mrb_undef_p(kw_values[1])) {
mrb_load_string(mrb, "raise ArgumentError.new \"Missing Keyword Argument\"");
} else {
parameter_height = mrb_as_int(mrb, kw_values[1]);
}
        
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *rendertexture_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_RenderTexture_struct.struct_name);
RenderTexture *return_of_LoadRenderTexture = (RenderTexture *)mrb_malloc(mrb, sizeof(RenderTexture));

*return_of_LoadRenderTexture = LoadRenderTexture(parameter_width, parameter_height);
return mrb_obj_value(Data_Wrap_Struct(mrb, rendertexture_mrb_class, &mrb_RenderTexture_struct, return_of_LoadRenderTexture));
}
      
//Texture LoadTexture
static mrb_value
mrb_LoadTexture(mrb_state* mrb, mrb_value self) {
char * parameter_fileName;

mrb_get_args(mrb, "z", &parameter_fileName);
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *texture_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Texture_struct.struct_name);
Texture *return_of_LoadTexture = (Texture *)mrb_malloc(mrb, sizeof(Texture));

*return_of_LoadTexture = LoadTexture(parameter_fileName);
return mrb_obj_value(Data_Wrap_Struct(mrb, texture_mrb_class, &mrb_Texture_struct, return_of_LoadTexture));
}
      
//Texture LoadTextureFromImage
static mrb_value
mrb_LoadTextureFromImage(mrb_state* mrb, mrb_value self) {
mrb_value parameter_mrb_image;

mrb_get_args(mrb, "o", &parameter_mrb_image);
Image *parameter_image;
parameter_image = DATA_GET_PTR(mrb, parameter_mrb_image, &mrb_Image_struct, Image);
struct RClass *test_mrb_module = mrb_module_get(mrb, "Test");
struct RClass *texture_mrb_class = mrb_class_get_under(mrb, test_mrb_module, mrb_Texture_struct.struct_name);
Texture *return_of_LoadTextureFromImage = (Texture *)mrb_malloc(mrb, sizeof(Texture));

*return_of_LoadTextureFromImage = LoadTextureFromImage(*parameter_image);
return mrb_obj_value(Data_Wrap_Struct(mrb, texture_mrb_class, &mrb_Texture_struct, return_of_LoadTextureFromImage));
}
      

      void
      mrb_mruby_test_gem_init(mrb_state* mrb) {
      struct RClass *test = mrb_define_module(mrb, "Test");
      
          struct RClass *color_class = mrb_define_class_under(mrb, test, "Color", mrb->object_class);
MRB_SET_INSTANCE_TT(color_class, MRB_TT_DATA);
      mrb_define_method(mrb, color_class, "a", mrb_Color_get_a, MRB_ARGS_NONE());
      mrb_define_method(mrb, color_class, "a=", mrb_Color_set_a, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, color_class, "b", mrb_Color_get_b, MRB_ARGS_NONE());
      mrb_define_method(mrb, color_class, "b=", mrb_Color_set_b, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, color_class, "g", mrb_Color_get_g, MRB_ARGS_NONE());
      mrb_define_method(mrb, color_class, "g=", mrb_Color_set_g, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, color_class, "r", mrb_Color_get_r, MRB_ARGS_NONE());
      mrb_define_method(mrb, color_class, "r=", mrb_Color_set_r, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, color_class, "initialize", mrb_Color_initialize, MRB_ARGS_OPT(1));
      
          struct RClass *glyphinfo_class = mrb_define_class_under(mrb, test, "GlyphInfo", mrb->object_class);
MRB_SET_INSTANCE_TT(glyphinfo_class, MRB_TT_DATA);
      mrb_define_method(mrb, glyphinfo_class, "advance_x", mrb_GlyphInfo_get_advanceX, MRB_ARGS_NONE());
      mrb_define_method(mrb, glyphinfo_class, "advance_x=", mrb_GlyphInfo_set_advanceX, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, glyphinfo_class, "offset_x", mrb_GlyphInfo_get_offsetX, MRB_ARGS_NONE());
      mrb_define_method(mrb, glyphinfo_class, "offset_x=", mrb_GlyphInfo_set_offsetX, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, glyphinfo_class, "offset_y", mrb_GlyphInfo_get_offsetY, MRB_ARGS_NONE());
      mrb_define_method(mrb, glyphinfo_class, "offset_y=", mrb_GlyphInfo_set_offsetY, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, glyphinfo_class, "value", mrb_GlyphInfo_get_value, MRB_ARGS_NONE());
      mrb_define_method(mrb, glyphinfo_class, "value=", mrb_GlyphInfo_set_value, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, glyphinfo_class, "initialize", mrb_GlyphInfo_initialize, MRB_ARGS_OPT(1));
      
          struct RClass *mesh_class = mrb_define_class_under(mrb, test, "Mesh", mrb->object_class);
MRB_SET_INSTANCE_TT(mesh_class, MRB_TT_DATA);
      mrb_define_method(mrb, mesh_class, "triangle_count", mrb_Mesh_get_triangleCount, MRB_ARGS_NONE());
      mrb_define_method(mrb, mesh_class, "triangle_count=", mrb_Mesh_set_triangleCount, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, mesh_class, "vao_id", mrb_Mesh_get_vaoId, MRB_ARGS_NONE());
      mrb_define_method(mrb, mesh_class, "vao_id=", mrb_Mesh_set_vaoId, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, mesh_class, "vertex_count", mrb_Mesh_get_vertexCount, MRB_ARGS_NONE());
      mrb_define_method(mrb, mesh_class, "vertex_count=", mrb_Mesh_set_vertexCount, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, mesh_class, "initialize", mrb_Mesh_initialize, MRB_ARGS_OPT(1));
      
          struct RClass *font_class = mrb_define_class_under(mrb, test, "Font", mrb->object_class);
MRB_SET_INSTANCE_TT(font_class, MRB_TT_DATA);
      mrb_define_method(mrb, font_class, "base_size", mrb_Font_get_baseSize, MRB_ARGS_NONE());
      mrb_define_method(mrb, font_class, "base_size=", mrb_Font_set_baseSize, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, font_class, "glyph_count", mrb_Font_get_glyphCount, MRB_ARGS_NONE());
      mrb_define_method(mrb, font_class, "glyph_count=", mrb_Font_set_glyphCount, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, font_class, "glyph_padding", mrb_Font_get_glyphPadding, MRB_ARGS_NONE());
      mrb_define_method(mrb, font_class, "glyph_padding=", mrb_Font_set_glyphPadding, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, font_class, "initialize", mrb_Font_initialize, MRB_ARGS_OPT(1));
      
          struct RClass *model_class = mrb_define_class_under(mrb, test, "Model", mrb->object_class);
MRB_SET_INSTANCE_TT(model_class, MRB_TT_DATA);
      mrb_define_method(mrb, model_class, "bone_count", mrb_Model_get_boneCount, MRB_ARGS_NONE());
      mrb_define_method(mrb, model_class, "bone_count=", mrb_Model_set_boneCount, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, model_class, "material_count", mrb_Model_get_materialCount, MRB_ARGS_NONE());
      mrb_define_method(mrb, model_class, "material_count=", mrb_Model_set_materialCount, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, model_class, "mesh_count", mrb_Model_get_meshCount, MRB_ARGS_NONE());
      mrb_define_method(mrb, model_class, "mesh_count=", mrb_Model_set_meshCount, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, model_class, "initialize", mrb_Model_initialize, MRB_ARGS_OPT(1));
      
          struct RClass *modelanimation_class = mrb_define_class_under(mrb, test, "ModelAnimation", mrb->object_class);
MRB_SET_INSTANCE_TT(modelanimation_class, MRB_TT_DATA);
      mrb_define_method(mrb, modelanimation_class, "bone_count", mrb_ModelAnimation_get_boneCount, MRB_ARGS_NONE());
      mrb_define_method(mrb, modelanimation_class, "bone_count=", mrb_ModelAnimation_set_boneCount, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, modelanimation_class, "frame_count", mrb_ModelAnimation_get_frameCount, MRB_ARGS_NONE());
      mrb_define_method(mrb, modelanimation_class, "frame_count=", mrb_ModelAnimation_set_frameCount, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, modelanimation_class, "initialize", mrb_ModelAnimation_initialize, MRB_ARGS_OPT(1));
      
          struct RClass *npatchinfo_class = mrb_define_class_under(mrb, test, "NPatchInfo", mrb->object_class);
MRB_SET_INSTANCE_TT(npatchinfo_class, MRB_TT_DATA);
      mrb_define_method(mrb, npatchinfo_class, "bottom", mrb_NPatchInfo_get_bottom, MRB_ARGS_NONE());
      mrb_define_method(mrb, npatchinfo_class, "bottom=", mrb_NPatchInfo_set_bottom, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, npatchinfo_class, "layout", mrb_NPatchInfo_get_layout, MRB_ARGS_NONE());
      mrb_define_method(mrb, npatchinfo_class, "layout=", mrb_NPatchInfo_set_layout, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, npatchinfo_class, "left", mrb_NPatchInfo_get_left, MRB_ARGS_NONE());
      mrb_define_method(mrb, npatchinfo_class, "left=", mrb_NPatchInfo_set_left, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, npatchinfo_class, "right", mrb_NPatchInfo_get_right, MRB_ARGS_NONE());
      mrb_define_method(mrb, npatchinfo_class, "right=", mrb_NPatchInfo_set_right, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, npatchinfo_class, "top", mrb_NPatchInfo_get_top, MRB_ARGS_NONE());
      mrb_define_method(mrb, npatchinfo_class, "top=", mrb_NPatchInfo_set_top, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, npatchinfo_class, "initialize", mrb_NPatchInfo_initialize, MRB_ARGS_OPT(1));
      
          struct RClass *audiostream_class = mrb_define_class_under(mrb, test, "AudioStream", mrb->object_class);
MRB_SET_INSTANCE_TT(audiostream_class, MRB_TT_DATA);
      mrb_define_method(mrb, audiostream_class, "channels", mrb_AudioStream_get_channels, MRB_ARGS_NONE());
      mrb_define_method(mrb, audiostream_class, "channels=", mrb_AudioStream_set_channels, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, audiostream_class, "sample_rate", mrb_AudioStream_get_sampleRate, MRB_ARGS_NONE());
      mrb_define_method(mrb, audiostream_class, "sample_rate=", mrb_AudioStream_set_sampleRate, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, audiostream_class, "sample_size", mrb_AudioStream_get_sampleSize, MRB_ARGS_NONE());
      mrb_define_method(mrb, audiostream_class, "sample_size=", mrb_AudioStream_set_sampleSize, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, audiostream_class, "initialize", mrb_AudioStream_initialize, MRB_ARGS_OPT(1));
      
          struct RClass *wave_class = mrb_define_class_under(mrb, test, "Wave", mrb->object_class);
MRB_SET_INSTANCE_TT(wave_class, MRB_TT_DATA);
      mrb_define_method(mrb, wave_class, "channels", mrb_Wave_get_channels, MRB_ARGS_NONE());
      mrb_define_method(mrb, wave_class, "channels=", mrb_Wave_set_channels, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, wave_class, "frame_count", mrb_Wave_get_frameCount, MRB_ARGS_NONE());
      mrb_define_method(mrb, wave_class, "frame_count=", mrb_Wave_set_frameCount, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, wave_class, "sample_rate", mrb_Wave_get_sampleRate, MRB_ARGS_NONE());
      mrb_define_method(mrb, wave_class, "sample_rate=", mrb_Wave_set_sampleRate, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, wave_class, "sample_size", mrb_Wave_get_sampleSize, MRB_ARGS_NONE());
      mrb_define_method(mrb, wave_class, "sample_size=", mrb_Wave_set_sampleSize, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, wave_class, "initialize", mrb_Wave_initialize, MRB_ARGS_OPT(1));
      
          struct RClass *vrdeviceinfo_class = mrb_define_class_under(mrb, test, "VrDeviceInfo", mrb->object_class);
MRB_SET_INSTANCE_TT(vrdeviceinfo_class, MRB_TT_DATA);
      mrb_define_method(mrb, vrdeviceinfo_class, "eye_to_screen_distance", mrb_VrDeviceInfo_get_eyeToScreenDistance, MRB_ARGS_NONE());
      mrb_define_method(mrb, vrdeviceinfo_class, "eye_to_screen_distance=", mrb_VrDeviceInfo_set_eyeToScreenDistance, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, vrdeviceinfo_class, "h_resolution", mrb_VrDeviceInfo_get_hResolution, MRB_ARGS_NONE());
      mrb_define_method(mrb, vrdeviceinfo_class, "h_resolution=", mrb_VrDeviceInfo_set_hResolution, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, vrdeviceinfo_class, "h_screen_size", mrb_VrDeviceInfo_get_hScreenSize, MRB_ARGS_NONE());
      mrb_define_method(mrb, vrdeviceinfo_class, "h_screen_size=", mrb_VrDeviceInfo_set_hScreenSize, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, vrdeviceinfo_class, "interpupillary_distance", mrb_VrDeviceInfo_get_interpupillaryDistance, MRB_ARGS_NONE());
      mrb_define_method(mrb, vrdeviceinfo_class, "interpupillary_distance=", mrb_VrDeviceInfo_set_interpupillaryDistance, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, vrdeviceinfo_class, "lens_separation_distance", mrb_VrDeviceInfo_get_lensSeparationDistance, MRB_ARGS_NONE());
      mrb_define_method(mrb, vrdeviceinfo_class, "lens_separation_distance=", mrb_VrDeviceInfo_set_lensSeparationDistance, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, vrdeviceinfo_class, "v_resolution", mrb_VrDeviceInfo_get_vResolution, MRB_ARGS_NONE());
      mrb_define_method(mrb, vrdeviceinfo_class, "v_resolution=", mrb_VrDeviceInfo_set_vResolution, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, vrdeviceinfo_class, "v_screen_center", mrb_VrDeviceInfo_get_vScreenCenter, MRB_ARGS_NONE());
      mrb_define_method(mrb, vrdeviceinfo_class, "v_screen_center=", mrb_VrDeviceInfo_set_vScreenCenter, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, vrdeviceinfo_class, "v_screen_size", mrb_VrDeviceInfo_get_vScreenSize, MRB_ARGS_NONE());
      mrb_define_method(mrb, vrdeviceinfo_class, "v_screen_size=", mrb_VrDeviceInfo_set_vScreenSize, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, vrdeviceinfo_class, "initialize", mrb_VrDeviceInfo_initialize, MRB_ARGS_OPT(1));
      
          struct RClass *materialmap_class = mrb_define_class_under(mrb, test, "MaterialMap", mrb->object_class);
MRB_SET_INSTANCE_TT(materialmap_class, MRB_TT_DATA);
      mrb_define_method(mrb, materialmap_class, "value", mrb_MaterialMap_get_value, MRB_ARGS_NONE());
      mrb_define_method(mrb, materialmap_class, "value=", mrb_MaterialMap_set_value, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, materialmap_class, "initialize", mrb_MaterialMap_initialize, MRB_ARGS_OPT(1));
      
          struct RClass *music_class = mrb_define_class_under(mrb, test, "Music", mrb->object_class);
MRB_SET_INSTANCE_TT(music_class, MRB_TT_DATA);
      mrb_define_method(mrb, music_class, "ctx_type", mrb_Music_get_ctxType, MRB_ARGS_NONE());
      mrb_define_method(mrb, music_class, "ctx_type=", mrb_Music_set_ctxType, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, music_class, "frame_count", mrb_Music_get_frameCount, MRB_ARGS_NONE());
      mrb_define_method(mrb, music_class, "frame_count=", mrb_Music_set_frameCount, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, music_class, "looping", mrb_Music_get_looping, MRB_ARGS_NONE());
      mrb_define_method(mrb, music_class, "looping=", mrb_Music_set_looping, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, music_class, "initialize", mrb_Music_initialize, MRB_ARGS_OPT(1));
      
          struct RClass *image_class = mrb_define_class_under(mrb, test, "Image", mrb->object_class);
MRB_SET_INSTANCE_TT(image_class, MRB_TT_DATA);
      mrb_define_method(mrb, image_class, "format", mrb_Image_get_format, MRB_ARGS_NONE());
      mrb_define_method(mrb, image_class, "format=", mrb_Image_set_format, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, image_class, "height", mrb_Image_get_height, MRB_ARGS_NONE());
      mrb_define_method(mrb, image_class, "height=", mrb_Image_set_height, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, image_class, "mipmaps", mrb_Image_get_mipmaps, MRB_ARGS_NONE());
      mrb_define_method(mrb, image_class, "mipmaps=", mrb_Image_set_mipmaps, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, image_class, "width", mrb_Image_get_width, MRB_ARGS_NONE());
      mrb_define_method(mrb, image_class, "width=", mrb_Image_set_width, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, image_class, "initialize", mrb_Image_initialize, MRB_ARGS_OPT(1));
      
          struct RClass *rendertexture_class = mrb_define_class_under(mrb, test, "RenderTexture", mrb->object_class);
MRB_SET_INSTANCE_TT(rendertexture_class, MRB_TT_DATA);
      mrb_define_method(mrb, rendertexture_class, "id", mrb_RenderTexture_get_id, MRB_ARGS_NONE());
      mrb_define_method(mrb, rendertexture_class, "id=", mrb_RenderTexture_set_id, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, rendertexture_class, "initialize", mrb_RenderTexture_initialize, MRB_ARGS_OPT(1));
      
          struct RClass *ray_class = mrb_define_class_under(mrb, test, "Ray", mrb->object_class);
MRB_SET_INSTANCE_TT(ray_class, MRB_TT_DATA);
      mrb_define_method(mrb, ray_class, "initialize", mrb_Ray_initialize, MRB_ARGS_OPT(1));
      
          struct RClass *raycollision_class = mrb_define_class_under(mrb, test, "RayCollision", mrb->object_class);
MRB_SET_INSTANCE_TT(raycollision_class, MRB_TT_DATA);
      mrb_define_method(mrb, raycollision_class, "distance", mrb_RayCollision_get_distance, MRB_ARGS_NONE());
      mrb_define_method(mrb, raycollision_class, "distance=", mrb_RayCollision_set_distance, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, raycollision_class, "hit", mrb_RayCollision_get_hit, MRB_ARGS_NONE());
      mrb_define_method(mrb, raycollision_class, "hit=", mrb_RayCollision_set_hit, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, raycollision_class, "initialize", mrb_RayCollision_initialize, MRB_ARGS_OPT(1));
      
          struct RClass *texture_class = mrb_define_class_under(mrb, test, "Texture", mrb->object_class);
MRB_SET_INSTANCE_TT(texture_class, MRB_TT_DATA);
      mrb_define_method(mrb, texture_class, "format", mrb_Texture_get_format, MRB_ARGS_NONE());
      mrb_define_method(mrb, texture_class, "format=", mrb_Texture_set_format, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, texture_class, "height", mrb_Texture_get_height, MRB_ARGS_NONE());
      mrb_define_method(mrb, texture_class, "height=", mrb_Texture_set_height, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, texture_class, "id", mrb_Texture_get_id, MRB_ARGS_NONE());
      mrb_define_method(mrb, texture_class, "id=", mrb_Texture_set_id, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, texture_class, "mipmaps", mrb_Texture_get_mipmaps, MRB_ARGS_NONE());
      mrb_define_method(mrb, texture_class, "mipmaps=", mrb_Texture_set_mipmaps, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, texture_class, "width", mrb_Texture_get_width, MRB_ARGS_NONE());
      mrb_define_method(mrb, texture_class, "width=", mrb_Texture_set_width, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, texture_class, "initialize", mrb_Texture_initialize, MRB_ARGS_OPT(1));
      
          struct RClass *camera3d_class = mrb_define_class_under(mrb, test, "Camera3D", mrb->object_class);
MRB_SET_INSTANCE_TT(camera3d_class, MRB_TT_DATA);
      mrb_define_method(mrb, camera3d_class, "fovy", mrb_Camera3D_get_fovy, MRB_ARGS_NONE());
      mrb_define_method(mrb, camera3d_class, "fovy=", mrb_Camera3D_set_fovy, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, camera3d_class, "projection", mrb_Camera3D_get_projection, MRB_ARGS_NONE());
      mrb_define_method(mrb, camera3d_class, "projection=", mrb_Camera3D_set_projection, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, camera3d_class, "initialize", mrb_Camera3D_initialize, MRB_ARGS_OPT(1));
      
          struct RClass *sound_class = mrb_define_class_under(mrb, test, "Sound", mrb->object_class);
MRB_SET_INSTANCE_TT(sound_class, MRB_TT_DATA);
      mrb_define_method(mrb, sound_class, "frame_count", mrb_Sound_get_frameCount, MRB_ARGS_NONE());
      mrb_define_method(mrb, sound_class, "frame_count=", mrb_Sound_set_frameCount, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, sound_class, "initialize", mrb_Sound_initialize, MRB_ARGS_OPT(1));
      
          struct RClass *rectangle_class = mrb_define_class_under(mrb, test, "Rectangle", mrb->object_class);
MRB_SET_INSTANCE_TT(rectangle_class, MRB_TT_DATA);
      mrb_define_method(mrb, rectangle_class, "height", mrb_Rectangle_get_height, MRB_ARGS_NONE());
      mrb_define_method(mrb, rectangle_class, "height=", mrb_Rectangle_set_height, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, rectangle_class, "width", mrb_Rectangle_get_width, MRB_ARGS_NONE());
      mrb_define_method(mrb, rectangle_class, "width=", mrb_Rectangle_set_width, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, rectangle_class, "x", mrb_Rectangle_get_x, MRB_ARGS_NONE());
      mrb_define_method(mrb, rectangle_class, "x=", mrb_Rectangle_set_x, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, rectangle_class, "y", mrb_Rectangle_get_y, MRB_ARGS_NONE());
      mrb_define_method(mrb, rectangle_class, "y=", mrb_Rectangle_set_y, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, rectangle_class, "initialize", mrb_Rectangle_initialize, MRB_ARGS_OPT(1));
      
          struct RClass *shader_class = mrb_define_class_under(mrb, test, "Shader", mrb->object_class);
MRB_SET_INSTANCE_TT(shader_class, MRB_TT_DATA);
      mrb_define_method(mrb, shader_class, "id", mrb_Shader_get_id, MRB_ARGS_NONE());
      mrb_define_method(mrb, shader_class, "id=", mrb_Shader_set_id, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, shader_class, "initialize", mrb_Shader_initialize, MRB_ARGS_OPT(1));
      
          struct RClass *vrstereoconfig_class = mrb_define_class_under(mrb, test, "VrStereoConfig", mrb->object_class);
MRB_SET_INSTANCE_TT(vrstereoconfig_class, MRB_TT_DATA);
      mrb_define_method(mrb, vrstereoconfig_class, "initialize", mrb_VrStereoConfig_initialize, MRB_ARGS_OPT(1));
      
          struct RClass *matrix_class = mrb_define_class_under(mrb, test, "Matrix", mrb->object_class);
MRB_SET_INSTANCE_TT(matrix_class, MRB_TT_DATA);
      mrb_define_method(mrb, matrix_class, "m0", mrb_Matrix_get_m0, MRB_ARGS_NONE());
      mrb_define_method(mrb, matrix_class, "m0=", mrb_Matrix_set_m0, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, matrix_class, "m1", mrb_Matrix_get_m1, MRB_ARGS_NONE());
      mrb_define_method(mrb, matrix_class, "m1=", mrb_Matrix_set_m1, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, matrix_class, "m10", mrb_Matrix_get_m10, MRB_ARGS_NONE());
      mrb_define_method(mrb, matrix_class, "m10=", mrb_Matrix_set_m10, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, matrix_class, "m11", mrb_Matrix_get_m11, MRB_ARGS_NONE());
      mrb_define_method(mrb, matrix_class, "m11=", mrb_Matrix_set_m11, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, matrix_class, "m12", mrb_Matrix_get_m12, MRB_ARGS_NONE());
      mrb_define_method(mrb, matrix_class, "m12=", mrb_Matrix_set_m12, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, matrix_class, "m13", mrb_Matrix_get_m13, MRB_ARGS_NONE());
      mrb_define_method(mrb, matrix_class, "m13=", mrb_Matrix_set_m13, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, matrix_class, "m14", mrb_Matrix_get_m14, MRB_ARGS_NONE());
      mrb_define_method(mrb, matrix_class, "m14=", mrb_Matrix_set_m14, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, matrix_class, "m15", mrb_Matrix_get_m15, MRB_ARGS_NONE());
      mrb_define_method(mrb, matrix_class, "m15=", mrb_Matrix_set_m15, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, matrix_class, "m2", mrb_Matrix_get_m2, MRB_ARGS_NONE());
      mrb_define_method(mrb, matrix_class, "m2=", mrb_Matrix_set_m2, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, matrix_class, "m3", mrb_Matrix_get_m3, MRB_ARGS_NONE());
      mrb_define_method(mrb, matrix_class, "m3=", mrb_Matrix_set_m3, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, matrix_class, "m4", mrb_Matrix_get_m4, MRB_ARGS_NONE());
      mrb_define_method(mrb, matrix_class, "m4=", mrb_Matrix_set_m4, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, matrix_class, "m5", mrb_Matrix_get_m5, MRB_ARGS_NONE());
      mrb_define_method(mrb, matrix_class, "m5=", mrb_Matrix_set_m5, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, matrix_class, "m6", mrb_Matrix_get_m6, MRB_ARGS_NONE());
      mrb_define_method(mrb, matrix_class, "m6=", mrb_Matrix_set_m6, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, matrix_class, "m7", mrb_Matrix_get_m7, MRB_ARGS_NONE());
      mrb_define_method(mrb, matrix_class, "m7=", mrb_Matrix_set_m7, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, matrix_class, "m8", mrb_Matrix_get_m8, MRB_ARGS_NONE());
      mrb_define_method(mrb, matrix_class, "m8=", mrb_Matrix_set_m8, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, matrix_class, "m9", mrb_Matrix_get_m9, MRB_ARGS_NONE());
      mrb_define_method(mrb, matrix_class, "m9=", mrb_Matrix_set_m9, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, matrix_class, "initialize", mrb_Matrix_initialize, MRB_ARGS_OPT(1));
      
          struct RClass *material_class = mrb_define_class_under(mrb, test, "Material", mrb->object_class);
MRB_SET_INSTANCE_TT(material_class, MRB_TT_DATA);
      mrb_define_method(mrb, material_class, "initialize", mrb_Material_initialize, MRB_ARGS_OPT(1));
      
          struct RClass *boundingbox_class = mrb_define_class_under(mrb, test, "BoundingBox", mrb->object_class);
MRB_SET_INSTANCE_TT(boundingbox_class, MRB_TT_DATA);
      mrb_define_method(mrb, boundingbox_class, "initialize", mrb_BoundingBox_initialize, MRB_ARGS_OPT(1));
      
          struct RClass *boneinfo_class = mrb_define_class_under(mrb, test, "BoneInfo", mrb->object_class);
MRB_SET_INSTANCE_TT(boneinfo_class, MRB_TT_DATA);
      mrb_define_method(mrb, boneinfo_class, "parent", mrb_BoneInfo_get_parent, MRB_ARGS_NONE());
      mrb_define_method(mrb, boneinfo_class, "parent=", mrb_BoneInfo_set_parent, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, boneinfo_class, "initialize", mrb_BoneInfo_initialize, MRB_ARGS_OPT(1));
      
          struct RClass *camera2d_class = mrb_define_class_under(mrb, test, "Camera2D", mrb->object_class);
MRB_SET_INSTANCE_TT(camera2d_class, MRB_TT_DATA);
      mrb_define_method(mrb, camera2d_class, "rotation", mrb_Camera2D_get_rotation, MRB_ARGS_NONE());
      mrb_define_method(mrb, camera2d_class, "rotation=", mrb_Camera2D_set_rotation, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, camera2d_class, "zoom", mrb_Camera2D_get_zoom, MRB_ARGS_NONE());
      mrb_define_method(mrb, camera2d_class, "zoom=", mrb_Camera2D_set_zoom, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, camera2d_class, "initialize", mrb_Camera2D_initialize, MRB_ARGS_OPT(1));
      
          struct RClass *transform_class = mrb_define_class_under(mrb, test, "Transform", mrb->object_class);
MRB_SET_INSTANCE_TT(transform_class, MRB_TT_DATA);
      mrb_define_method(mrb, transform_class, "initialize", mrb_Transform_initialize, MRB_ARGS_OPT(1));
      
          struct RClass *vector4_class = mrb_define_class_under(mrb, test, "Vector4", mrb->object_class);
MRB_SET_INSTANCE_TT(vector4_class, MRB_TT_DATA);
      mrb_define_method(mrb, vector4_class, "w", mrb_Vector4_get_w, MRB_ARGS_NONE());
      mrb_define_method(mrb, vector4_class, "w=", mrb_Vector4_set_w, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, vector4_class, "x", mrb_Vector4_get_x, MRB_ARGS_NONE());
      mrb_define_method(mrb, vector4_class, "x=", mrb_Vector4_set_x, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, vector4_class, "y", mrb_Vector4_get_y, MRB_ARGS_NONE());
      mrb_define_method(mrb, vector4_class, "y=", mrb_Vector4_set_y, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, vector4_class, "z", mrb_Vector4_get_z, MRB_ARGS_NONE());
      mrb_define_method(mrb, vector4_class, "z=", mrb_Vector4_set_z, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, vector4_class, "initialize", mrb_Vector4_initialize, MRB_ARGS_OPT(1));
      
          struct RClass *vector2_class = mrb_define_class_under(mrb, test, "Vector2", mrb->object_class);
MRB_SET_INSTANCE_TT(vector2_class, MRB_TT_DATA);
      mrb_define_method(mrb, vector2_class, "x", mrb_Vector2_get_x, MRB_ARGS_NONE());
      mrb_define_method(mrb, vector2_class, "x=", mrb_Vector2_set_x, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, vector2_class, "y", mrb_Vector2_get_y, MRB_ARGS_NONE());
      mrb_define_method(mrb, vector2_class, "y=", mrb_Vector2_set_y, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, vector2_class, "initialize", mrb_Vector2_initialize, MRB_ARGS_OPT(1));
      
          struct RClass *vector3_class = mrb_define_class_under(mrb, test, "Vector3", mrb->object_class);
MRB_SET_INSTANCE_TT(vector3_class, MRB_TT_DATA);
      mrb_define_method(mrb, vector3_class, "x", mrb_Vector3_get_x, MRB_ARGS_NONE());
      mrb_define_method(mrb, vector3_class, "x=", mrb_Vector3_set_x, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, vector3_class, "y", mrb_Vector3_get_y, MRB_ARGS_NONE());
      mrb_define_method(mrb, vector3_class, "y=", mrb_Vector3_set_y, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, vector3_class, "z", mrb_Vector3_get_z, MRB_ARGS_NONE());
      mrb_define_method(mrb, vector3_class, "z=", mrb_Vector3_set_z, MRB_ARGS_REQ(1));
      mrb_define_method(mrb, vector3_class, "initialize", mrb_Vector3_initialize, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "begin_blend_mode", mrb_BeginBlendMode, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "begin_drawing", mrb_BeginDrawing, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "begin_mode2_d", mrb_BeginMode2D, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "begin_mode3_d", mrb_BeginMode3D, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "begin_scissor_mode", mrb_BeginScissorMode, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "begin_shader_mode", mrb_BeginShaderMode, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "begin_texture_mode", mrb_BeginTextureMode, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "begin_vr_stereo_mode", mrb_BeginVrStereoMode, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "change_directory", mrb_ChangeDirectory, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "check_collision_box_sphere", mrb_CheckCollisionBoxSphere, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "check_collision_boxes", mrb_CheckCollisionBoxes, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "check_collision_circle_rec", mrb_CheckCollisionCircleRec, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "check_collision_circles", mrb_CheckCollisionCircles, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "check_collision_lines", mrb_CheckCollisionLines, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "check_collision_point_circle", mrb_CheckCollisionPointCircle, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "check_collision_point_line", mrb_CheckCollisionPointLine, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "check_collision_point_rec", mrb_CheckCollisionPointRec, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "check_collision_point_triangle", mrb_CheckCollisionPointTriangle, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "check_collision_recs", mrb_CheckCollisionRecs, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "check_collision_spheres", mrb_CheckCollisionSpheres, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "clear_background", mrb_ClearBackground, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "clear_directory_files", mrb_ClearDirectoryFiles, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "clear_dropped_files", mrb_ClearDroppedFiles, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "clear_window_state", mrb_ClearWindowState, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "close_audio_device", mrb_CloseAudioDevice, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "close_window", mrb_CloseWindow, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "codepoint_to_utf8", mrb_CodepointToUTF8, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "color_alpha", mrb_ColorAlpha, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "color_alpha_blend", mrb_ColorAlphaBlend, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "color_from_hsv", mrb_ColorFromHSV, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "color_from_normalized", mrb_ColorFromNormalized, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "color_normalize", mrb_ColorNormalize, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "color_to_hsv", mrb_ColorToHSV, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "color_to_int", mrb_ColorToInt, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "directory_exists", mrb_DirectoryExists, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "disable_cursor", mrb_DisableCursor, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_bounding_box", mrb_DrawBoundingBox, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_circle", mrb_DrawCircle, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_circle3_d", mrb_DrawCircle3D, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_circle_gradient", mrb_DrawCircleGradient, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_circle_lines", mrb_DrawCircleLines, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_circle_sector", mrb_DrawCircleSector, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_circle_sector_lines", mrb_DrawCircleSectorLines, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_circle_v", mrb_DrawCircleV, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_cube", mrb_DrawCube, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_cube_texture", mrb_DrawCubeTexture, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_cube_texture_rec", mrb_DrawCubeTextureRec, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_cube_v", mrb_DrawCubeV, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_cube_wires", mrb_DrawCubeWires, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_cube_wires_v", mrb_DrawCubeWiresV, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_cylinder", mrb_DrawCylinder, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_cylinder_ex", mrb_DrawCylinderEx, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_cylinder_wires", mrb_DrawCylinderWires, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_cylinder_wires_ex", mrb_DrawCylinderWiresEx, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_ellipse", mrb_DrawEllipse, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_ellipse_lines", mrb_DrawEllipseLines, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_fps", mrb_DrawFPS, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_grid", mrb_DrawGrid, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_line", mrb_DrawLine, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_line3_d", mrb_DrawLine3D, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_line_bezier", mrb_DrawLineBezier, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_line_bezier_cubic", mrb_DrawLineBezierCubic, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_line_bezier_quad", mrb_DrawLineBezierQuad, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_line_ex", mrb_DrawLineEx, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_line_strip", mrb_DrawLineStrip, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_line_v", mrb_DrawLineV, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_mesh", mrb_DrawMesh, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_model", mrb_DrawModel, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_model_ex", mrb_DrawModelEx, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_model_wires", mrb_DrawModelWires, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_model_wires_ex", mrb_DrawModelWiresEx, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_pixel", mrb_DrawPixel, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_pixel_v", mrb_DrawPixelV, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_plane", mrb_DrawPlane, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_point3_d", mrb_DrawPoint3D, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_poly", mrb_DrawPoly, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_poly_lines", mrb_DrawPolyLines, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_poly_lines_ex", mrb_DrawPolyLinesEx, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_ray", mrb_DrawRay, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_rectangle", mrb_DrawRectangle, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_rectangle_gradient_ex", mrb_DrawRectangleGradientEx, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_rectangle_gradient_h", mrb_DrawRectangleGradientH, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_rectangle_gradient_v", mrb_DrawRectangleGradientV, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_rectangle_lines", mrb_DrawRectangleLines, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_rectangle_lines_ex", mrb_DrawRectangleLinesEx, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_rectangle_pro", mrb_DrawRectanglePro, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_rectangle_rec", mrb_DrawRectangleRec, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_rectangle_rounded", mrb_DrawRectangleRounded, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_rectangle_rounded_lines", mrb_DrawRectangleRoundedLines, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_rectangle_v", mrb_DrawRectangleV, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_ring", mrb_DrawRing, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_ring_lines", mrb_DrawRingLines, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_sphere", mrb_DrawSphere, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_sphere_ex", mrb_DrawSphereEx, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_sphere_wires", mrb_DrawSphereWires, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_text", mrb_DrawText, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_text_codepoint", mrb_DrawTextCodepoint, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_text_ex", mrb_DrawTextEx, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_text_pro", mrb_DrawTextPro, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_texture", mrb_DrawTexture, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_texture_ex", mrb_DrawTextureEx, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_texture_n_patch", mrb_DrawTextureNPatch, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_texture_poly", mrb_DrawTexturePoly, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_texture_pro", mrb_DrawTexturePro, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_texture_quad", mrb_DrawTextureQuad, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_texture_rec", mrb_DrawTextureRec, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_texture_tiled", mrb_DrawTextureTiled, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_texture_v", mrb_DrawTextureV, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_triangle", mrb_DrawTriangle, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_triangle3_d", mrb_DrawTriangle3D, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_triangle_fan", mrb_DrawTriangleFan, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_triangle_lines", mrb_DrawTriangleLines, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_triangle_strip", mrb_DrawTriangleStrip, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "draw_triangle_strip3_d", mrb_DrawTriangleStrip3D, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "enable_cursor", mrb_EnableCursor, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "end_blend_mode", mrb_EndBlendMode, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "end_drawing", mrb_EndDrawing, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "end_mode2_d", mrb_EndMode2D, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "end_mode3_d", mrb_EndMode3D, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "end_scissor_mode", mrb_EndScissorMode, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "end_shader_mode", mrb_EndShaderMode, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "end_texture_mode", mrb_EndTextureMode, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "end_vr_stereo_mode", mrb_EndVrStereoMode, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "export_font_as_code", mrb_ExportFontAsCode, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "export_image", mrb_ExportImage, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "export_image_as_code", mrb_ExportImageAsCode, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "export_mesh", mrb_ExportMesh, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "export_wave", mrb_ExportWave, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "export_wave_as_code", mrb_ExportWaveAsCode, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "fade", mrb_Fade, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "file_exists", mrb_FileExists, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "gen_image_cellular", mrb_GenImageCellular, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "gen_image_checked", mrb_GenImageChecked, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "gen_image_color", mrb_GenImageColor, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "gen_image_gradient_h", mrb_GenImageGradientH, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "gen_image_gradient_radial", mrb_GenImageGradientRadial, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "gen_image_gradient_v", mrb_GenImageGradientV, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "gen_image_white_noise", mrb_GenImageWhiteNoise, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "gen_mesh_binormals", mrb_GenMeshBinormals, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "gen_mesh_cone", mrb_GenMeshCone, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "gen_mesh_cube", mrb_GenMeshCube, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "gen_mesh_cubicmap", mrb_GenMeshCubicmap, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "gen_mesh_cylinder", mrb_GenMeshCylinder, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "gen_mesh_heightmap", mrb_GenMeshHeightmap, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "gen_mesh_hemi_sphere", mrb_GenMeshHemiSphere, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "gen_mesh_knot", mrb_GenMeshKnot, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "gen_mesh_plane", mrb_GenMeshPlane, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "gen_mesh_poly", mrb_GenMeshPoly, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "gen_mesh_sphere", mrb_GenMeshSphere, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "gen_mesh_tangents", mrb_GenMeshTangents, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "gen_mesh_torus", mrb_GenMeshTorus, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "application_directory", mrb_GetApplicationDirectory, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "camera_matrix2_d", mrb_GetCameraMatrix2D, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "char_pressed", mrb_GetCharPressed, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "clipboard_text", mrb_GetClipboardText, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "codepoint", mrb_GetCodepoint, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "codepoint_count", mrb_GetCodepointCount, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "collision_rec", mrb_GetCollisionRec, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "color", mrb_GetColor, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "current_monitor", mrb_GetCurrentMonitor, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "directory_path", mrb_GetDirectoryPath, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "fps", mrb_GetFPS, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "file_extension", mrb_GetFileExtension, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "file_length", mrb_GetFileLength, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "file_mod_time", mrb_GetFileModTime, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "file_name", mrb_GetFileName, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "file_name_without_ext", mrb_GetFileNameWithoutExt, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "font_default", mrb_GetFontDefault, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "frame_time", mrb_GetFrameTime, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "gamepad_axis_count", mrb_GetGamepadAxisCount, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "gamepad_axis_movement", mrb_GetGamepadAxisMovement, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "gamepad_button_pressed", mrb_GetGamepadButtonPressed, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "gamepad_name", mrb_GetGamepadName, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "gesture_detected", mrb_GetGestureDetected, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "gesture_drag_angle", mrb_GetGestureDragAngle, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "gesture_drag_vector", mrb_GetGestureDragVector, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "gesture_hold_duration", mrb_GetGestureHoldDuration, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "gesture_pinch_angle", mrb_GetGesturePinchAngle, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "gesture_pinch_vector", mrb_GetGesturePinchVector, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "glyph_atlas_rec", mrb_GetGlyphAtlasRec, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "glyph_index", mrb_GetGlyphIndex, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "glyph_info", mrb_GetGlyphInfo, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "image_alpha_border", mrb_GetImageAlphaBorder, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "image_color", mrb_GetImageColor, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "key_pressed", mrb_GetKeyPressed, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "mesh_bounding_box", mrb_GetMeshBoundingBox, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "model_bounding_box", mrb_GetModelBoundingBox, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "monitor_count", mrb_GetMonitorCount, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "monitor_height", mrb_GetMonitorHeight, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "monitor_name", mrb_GetMonitorName, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "monitor_physical_height", mrb_GetMonitorPhysicalHeight, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "monitor_physical_width", mrb_GetMonitorPhysicalWidth, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "monitor_position", mrb_GetMonitorPosition, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "monitor_refresh_rate", mrb_GetMonitorRefreshRate, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "monitor_width", mrb_GetMonitorWidth, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "mouse_delta", mrb_GetMouseDelta, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "mouse_position", mrb_GetMousePosition, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "mouse_wheel_move", mrb_GetMouseWheelMove, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "mouse_x", mrb_GetMouseX, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "mouse_y", mrb_GetMouseY, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "music_time_length", mrb_GetMusicTimeLength, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "music_time_played", mrb_GetMusicTimePlayed, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "pixel_data_size", mrb_GetPixelDataSize, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "prev_directory_path", mrb_GetPrevDirectoryPath, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "random_value", mrb_GetRandomValue, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "ray_collision_box", mrb_GetRayCollisionBox, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "ray_collision_mesh", mrb_GetRayCollisionMesh, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "ray_collision_quad", mrb_GetRayCollisionQuad, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "ray_collision_sphere", mrb_GetRayCollisionSphere, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "ray_collision_triangle", mrb_GetRayCollisionTriangle, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "render_height", mrb_GetRenderHeight, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "render_width", mrb_GetRenderWidth, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "screen_height", mrb_GetScreenHeight, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "screen_to_world2_d", mrb_GetScreenToWorld2D, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "screen_width", mrb_GetScreenWidth, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "shader_location", mrb_GetShaderLocation, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "shader_location_attrib", mrb_GetShaderLocationAttrib, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "sounds_playing", mrb_GetSoundsPlaying, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "time", mrb_GetTime, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "touch_point_count", mrb_GetTouchPointCount, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "touch_point_id", mrb_GetTouchPointId, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "touch_position", mrb_GetTouchPosition, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "touch_x", mrb_GetTouchX, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "touch_y", mrb_GetTouchY, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "window_position", mrb_GetWindowPosition, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "window_scale_dpi", mrb_GetWindowScaleDPI, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "working_directory", mrb_GetWorkingDirectory, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "world_to_screen2_d", mrb_GetWorldToScreen2D, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "hide_cursor", mrb_HideCursor, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "image_alpha_clear", mrb_ImageAlphaClear, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "image_alpha_crop", mrb_ImageAlphaCrop, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "image_alpha_mask", mrb_ImageAlphaMask, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "image_alpha_premultiply", mrb_ImageAlphaPremultiply, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "image_clear_background", mrb_ImageClearBackground, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "image_color_brightness", mrb_ImageColorBrightness, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "image_color_contrast", mrb_ImageColorContrast, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "image_color_grayscale", mrb_ImageColorGrayscale, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "image_color_invert", mrb_ImageColorInvert, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "image_color_replace", mrb_ImageColorReplace, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "image_color_tint", mrb_ImageColorTint, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "image_copy", mrb_ImageCopy, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "image_crop", mrb_ImageCrop, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "image_dither", mrb_ImageDither, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "image_draw", mrb_ImageDraw, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "image_draw_circle", mrb_ImageDrawCircle, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "image_draw_circle_v", mrb_ImageDrawCircleV, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "image_draw_line", mrb_ImageDrawLine, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "image_draw_line_v", mrb_ImageDrawLineV, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "image_draw_pixel", mrb_ImageDrawPixel, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "image_draw_pixel_v", mrb_ImageDrawPixelV, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "image_draw_rectangle", mrb_ImageDrawRectangle, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "image_draw_rectangle_lines", mrb_ImageDrawRectangleLines, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "image_draw_rectangle_rec", mrb_ImageDrawRectangleRec, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "image_draw_rectangle_v", mrb_ImageDrawRectangleV, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "image_draw_text", mrb_ImageDrawText, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "image_draw_text_ex", mrb_ImageDrawTextEx, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "image_flip_horizontal", mrb_ImageFlipHorizontal, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "image_flip_vertical", mrb_ImageFlipVertical, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "image_format", mrb_ImageFormat, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "image_from_image", mrb_ImageFromImage, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "image_mipmaps", mrb_ImageMipmaps, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "image_resize", mrb_ImageResize, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "image_resize_canvas", mrb_ImageResizeCanvas, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "image_resize_nn", mrb_ImageResizeNN, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "image_rotate_ccw", mrb_ImageRotateCCW, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "image_rotate_cw", mrb_ImageRotateCW, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "image_text", mrb_ImageText, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "image_text_ex", mrb_ImageTextEx, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "image_to_pot", mrb_ImageToPOT, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "init_audio_device", mrb_InitAudioDevice, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "init_window", mrb_InitWindow, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "audio_device_ready?", mrb_IsAudioDeviceReady, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "audio_stream_playing?", mrb_IsAudioStreamPlaying, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "audio_stream_processed?", mrb_IsAudioStreamProcessed, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "cursor_hidden?", mrb_IsCursorHidden, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "cursor_on_screen?", mrb_IsCursorOnScreen, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "file_dropped?", mrb_IsFileDropped, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "file_extension?", mrb_IsFileExtension, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "gamepad_available?", mrb_IsGamepadAvailable, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "gamepad_button_down?", mrb_IsGamepadButtonDown, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "gamepad_button_pressed?", mrb_IsGamepadButtonPressed, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "gamepad_button_released?", mrb_IsGamepadButtonReleased, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "gamepad_button_up?", mrb_IsGamepadButtonUp, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "gesture_detected?", mrb_IsGestureDetected, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "key_down?", mrb_IsKeyDown, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "key_pressed?", mrb_IsKeyPressed, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "key_released?", mrb_IsKeyReleased, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "key_up?", mrb_IsKeyUp, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "model_animation_valid?", mrb_IsModelAnimationValid, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "mouse_button_down?", mrb_IsMouseButtonDown, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "mouse_button_pressed?", mrb_IsMouseButtonPressed, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "mouse_button_released?", mrb_IsMouseButtonReleased, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "mouse_button_up?", mrb_IsMouseButtonUp, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "music_stream_playing?", mrb_IsMusicStreamPlaying, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "sound_playing?", mrb_IsSoundPlaying, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "window_focused?", mrb_IsWindowFocused, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "window_fullscreen?", mrb_IsWindowFullscreen, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "window_hidden?", mrb_IsWindowHidden, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "window_maximized?", mrb_IsWindowMaximized, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "window_minimized?", mrb_IsWindowMinimized, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "window_ready?", mrb_IsWindowReady, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "window_resized?", mrb_IsWindowResized, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "window_state?", mrb_IsWindowState, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "load_audio_stream", mrb_LoadAudioStream, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "load_codepoints", mrb_LoadCodepoints, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "load_file_data", mrb_LoadFileData, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "load_file_text", mrb_LoadFileText, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "load_font", mrb_LoadFont, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "load_font_ex", mrb_LoadFontEx, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "load_font_from_image", mrb_LoadFontFromImage, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "load_image", mrb_LoadImage, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "load_image_anim", mrb_LoadImageAnim, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "load_image_colors", mrb_LoadImageColors, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "load_image_from_screen", mrb_LoadImageFromScreen, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "load_image_from_texture", mrb_LoadImageFromTexture, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "load_image_palette", mrb_LoadImagePalette, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "load_image_raw", mrb_LoadImageRaw, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "load_material_default", mrb_LoadMaterialDefault, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "load_materials", mrb_LoadMaterials, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "load_model", mrb_LoadModel, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "load_model_animations", mrb_LoadModelAnimations, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "load_model_from_mesh", mrb_LoadModelFromMesh, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "load_music_stream", mrb_LoadMusicStream, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "load_shader", mrb_LoadShader, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "load_shader_from_memory", mrb_LoadShaderFromMemory, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "load_sound", mrb_LoadSound, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "load_sound_from_wave", mrb_LoadSoundFromWave, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "load_storage_value", mrb_LoadStorageValue, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "load_vr_stereo_config", mrb_LoadVrStereoConfig, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "load_wave", mrb_LoadWave, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "load_wave_samples", mrb_LoadWaveSamples, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "maximize_window", mrb_MaximizeWindow, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "measure_text", mrb_MeasureText, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "measure_text_ex", mrb_MeasureTextEx, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "minimize_window", mrb_MinimizeWindow, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "open_url", mrb_OpenURL, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "pause_audio_stream", mrb_PauseAudioStream, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "pause_music_stream", mrb_PauseMusicStream, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "pause_sound", mrb_PauseSound, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "play_audio_stream", mrb_PlayAudioStream, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "play_music_stream", mrb_PlayMusicStream, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "play_sound", mrb_PlaySound, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "play_sound_multi", mrb_PlaySoundMulti, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "poll_input_events", mrb_PollInputEvents, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "restore_window", mrb_RestoreWindow, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "resume_audio_stream", mrb_ResumeAudioStream, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "resume_music_stream", mrb_ResumeMusicStream, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "resume_sound", mrb_ResumeSound, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "save_file_text", mrb_SaveFileText, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "save_storage_value", mrb_SaveStorageValue, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "seek_music_stream", mrb_SeekMusicStream, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "audio_stream_buffer_size_default=", mrb_SetAudioStreamBufferSizeDefault, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "set_audio_stream_pan", mrb_SetAudioStreamPan, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "set_audio_stream_pitch", mrb_SetAudioStreamPitch, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "set_audio_stream_volume", mrb_SetAudioStreamVolume, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "camera_alt_control=", mrb_SetCameraAltControl, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "set_camera_move_controls", mrb_SetCameraMoveControls, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "camera_pan_control=", mrb_SetCameraPanControl, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "camera_smooth_zoom_control=", mrb_SetCameraSmoothZoomControl, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "clipboard_text=", mrb_SetClipboardText, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "config_flags=", mrb_SetConfigFlags, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "exit_key=", mrb_SetExitKey, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "gamepad_mappings=", mrb_SetGamepadMappings, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "gestures_enabled=", mrb_SetGesturesEnabled, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "master_volume=", mrb_SetMasterVolume, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "set_material_texture", mrb_SetMaterialTexture, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "set_model_mesh_material", mrb_SetModelMeshMaterial, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "mouse_cursor=", mrb_SetMouseCursor, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "set_mouse_offset", mrb_SetMouseOffset, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "set_mouse_position", mrb_SetMousePosition, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "set_mouse_scale", mrb_SetMouseScale, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "set_music_pan", mrb_SetMusicPan, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "set_music_pitch", mrb_SetMusicPitch, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "set_music_volume", mrb_SetMusicVolume, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "random_seed=", mrb_SetRandomSeed, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "set_shader_value_matrix", mrb_SetShaderValueMatrix, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "set_shader_value_texture", mrb_SetShaderValueTexture, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "set_shapes_texture", mrb_SetShapesTexture, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "set_sound_pan", mrb_SetSoundPan, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "set_sound_pitch", mrb_SetSoundPitch, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "set_sound_volume", mrb_SetSoundVolume, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "target_fps=", mrb_SetTargetFPS, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "set_texture_filter", mrb_SetTextureFilter, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "set_texture_wrap", mrb_SetTextureWrap, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "trace_log_level=", mrb_SetTraceLogLevel, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "window_icon=", mrb_SetWindowIcon, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "set_window_min_size", mrb_SetWindowMinSize, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "window_monitor=", mrb_SetWindowMonitor, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "window_opacity=", mrb_SetWindowOpacity, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "set_window_position", mrb_SetWindowPosition, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "set_window_size", mrb_SetWindowSize, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "window_state=", mrb_SetWindowState, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "window_title=", mrb_SetWindowTitle, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "show_cursor", mrb_ShowCursor, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "stop_audio_stream", mrb_StopAudioStream, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "stop_music_stream", mrb_StopMusicStream, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "stop_sound", mrb_StopSound, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "stop_sound_multi", mrb_StopSoundMulti, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "swap_screen_buffer", mrb_SwapScreenBuffer, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "take_screenshot", mrb_TakeScreenshot, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "text_append", mrb_TextAppend, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "text_copy", mrb_TextCopy, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "text_find_index", mrb_TextFindIndex, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "text_insert", mrb_TextInsert, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "text_is_equal", mrb_TextIsEqual, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "text_length", mrb_TextLength, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "text_replace", mrb_TextReplace, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "text_subtext", mrb_TextSubtext, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "text_to_integer", mrb_TextToInteger, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "text_to_lower", mrb_TextToLower, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "text_to_pascal", mrb_TextToPascal, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "text_to_upper", mrb_TextToUpper, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "toggle_fullscreen", mrb_ToggleFullscreen, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "unload_audio_stream", mrb_UnloadAudioStream, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "unload_codepoints", mrb_UnloadCodepoints, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "unload_file_data", mrb_UnloadFileData, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "unload_file_text", mrb_UnloadFileText, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "unload_font", mrb_UnloadFont, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "unload_font_data", mrb_UnloadFontData, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "unload_image", mrb_UnloadImage, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "unload_image_colors", mrb_UnloadImageColors, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "unload_image_palette", mrb_UnloadImagePalette, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "unload_material", mrb_UnloadMaterial, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "unload_mesh", mrb_UnloadMesh, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "unload_model", mrb_UnloadModel, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "unload_model_animation", mrb_UnloadModelAnimation, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "unload_model_animations", mrb_UnloadModelAnimations, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "unload_model_keep_meshes", mrb_UnloadModelKeepMeshes, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "unload_music_stream", mrb_UnloadMusicStream, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "unload_render_texture", mrb_UnloadRenderTexture, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "unload_shader", mrb_UnloadShader, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "unload_sound", mrb_UnloadSound, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "unload_texture", mrb_UnloadTexture, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "unload_vr_stereo_config", mrb_UnloadVrStereoConfig, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "unload_wave", mrb_UnloadWave, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "unload_wave_samples", mrb_UnloadWaveSamples, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "update_model_animation", mrb_UpdateModelAnimation, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "update_music_stream", mrb_UpdateMusicStream, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "upload_mesh", mrb_UploadMesh, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "wait_time", mrb_WaitTime, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "wave_copy", mrb_WaveCopy, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "wave_crop", mrb_WaveCrop, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "wave_format", mrb_WaveFormat, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "window_should_close", mrb_WindowShouldClose, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "load_render_texture", mrb_LoadRenderTexture, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "load_texture", mrb_LoadTexture, MRB_ARGS_OPT(1));
      
      mrb_define_module_function(mrb, test, "load_texture_from_image", mrb_LoadTextureFromImage, MRB_ARGS_OPT(1));
      
}

void
mrb_mruby_test_gem_final(mrb_state* mrb) {

}
      
/* Unbound:
void * MemAlloc
void AttachAudioStreamProcessor
unsigned char * CompressData
unsigned char * DecodeDataBase64
unsigned char * DecompressData
void DetachAudioStreamProcessor
void DrawBillboard
void DrawBillboardPro
void DrawBillboardRec
void DrawMeshInstanced
void DrawTextCodepoints
char * EncodeDataBase64
Image GenImageFontAtlas
void GenTextureMipmaps
Matrix GetCameraMatrix
char ** GetDirectoryFiles
char ** GetDroppedFiles
Ray GetMouseRay
Color GetPixelColor
void * GetWindowHandle
Vector2 GetWorldToScreen
Vector2 GetWorldToScreenEx
GlyphInfo * LoadFontData
Font LoadFontFromMemory
Image LoadImageFromMemory
Music LoadMusicStreamFromMemory
TextureCubemap LoadTextureCubemap
Wave LoadWaveFromMemory
void MemFree
void * MemRealloc
bool SaveFileData
void SetAudioStreamCallback
void SetCameraMode
void SetLoadFileDataCallback
void SetLoadFileTextCallback
void SetPixelColor
void SetSaveFileDataCallback
void SetSaveFileTextCallback
void SetShaderValue
void SetShaderValueV
void SetTraceLogCallback
char * TextCodepointsToUTF8
const char * TextFormat
const char * TextJoin
const char ** TextSplit
void TraceLog
void UpdateAudioStream
void UpdateCamera
void UpdateMeshBuffer
void UpdateSound
void UpdateTexture
void UpdateTextureRec
*/
//Bound Functions: 447 / 499
//---
//Struct Accessors: 91 / 156
//---

/*
["Image image",
 "float * animNormals",
 "float * animVertices",
 "unsigned char * boneIds",
 "float * boneWeights",
 "unsigned char * colors",
 "unsigned short * indices",
 "float * normals",
 "float * tangents",
 "float * texcoords",
 "float * texcoords2",
 "unsigned int * vboId",
 "float * vertices",
 "GlyphInfo * glyphs",
 "Rectangle * recs",
 "Texture2D texture",
 "Transform * bindPose",
 "BoneInfo * bones",
 "Material * materials",
 "int * meshMaterial",
 "Mesh * meshes",
 "Matrix transform",
 "BoneInfo * bones",
 "Transform ** framePoses",
 "Rectangle source",
 "rAudioBuffer * buffer",
 "rAudioProcessor * processor",
 "void * data",
 "float[4] chromaAbCorrection",
 "float[4] lensDistortionValues",
 "Color color",
 "Texture2D texture",
 "void * ctxData",
 "AudioStream stream",
 "void * data",
 "Texture depth",
 "Texture texture",
 "Vector3 direction",
 "Vector3 position",
 "Vector3 normal",
 "Vector3 point",
 "Vector3 position",
 "Vector3 target",
 "Vector3 up",
 "AudioStream stream",
 "int * locs",
 "float[2] leftLensCenter",
 "float[2] leftScreenCenter",
 "Matrix[2] projection",
 "float[2] rightLensCenter",
 "float[2] rightScreenCenter",
 "float[2] scale",
 "float[2] scaleIn",
 "Matrix[2] viewOffset",
 "MaterialMap * maps",
 "float[4] params",
 "Shader shader",
 "Vector3 max",
 "Vector3 min",
 "char[32] name",
 "Vector2 offset",
 "Vector2 target",
 "Quaternion rotation",
 "Vector3 scale",
 "Vector3 translation"]

["unsigned char a",
 "unsigned char b",
 "unsigned char g",
 "unsigned char r",
 "int advanceX",
 "int offsetX",
 "int offsetY",
 "int value",
 "int triangleCount",
 "unsigned int vaoId",
 "int vertexCount",
 "int baseSize",
 "int glyphCount",
 "int glyphPadding",
 "int boneCount",
 "int materialCount",
 "int meshCount",
 "int boneCount",
 "int frameCount",
 "int bottom",
 "int layout",
 "int left",
 "int right",
 "int top",
 "unsigned int channels",
 "unsigned int sampleRate",
 "unsigned int sampleSize",
 "unsigned int channels",
 "unsigned int frameCount",
 "unsigned int sampleRate",
 "unsigned int sampleSize",
 "float eyeToScreenDistance",
 "int hResolution",
 "float hScreenSize",
 "float interpupillaryDistance",
 "float lensSeparationDistance",
 "int vResolution",
 "float vScreenCenter",
 "float vScreenSize",
 "float value",
 "int ctxType",
 "unsigned int frameCount",
 "bool looping",
 "int format",
 "int height",
 "int mipmaps",
 "int width",
 "unsigned int id",
 "float distance",
 "bool hit",
 "int format",
 "int height",
 "unsigned int id",
 "int mipmaps",
 "int width",
 "float fovy",
 "int projection",
 "unsigned int frameCount",
 "float height",
 "float width",
 "float x",
 "float y",
 "unsigned int id",
 "float m0",
 "float m1",
 "float m10",
 "float m11",
 "float m12",
 "float m13",
 "float m14",
 "float m15",
 "float m2",
 "float m3",
 "float m4",
 "float m5",
 "float m6",
 "float m7",
 "float m8",
 "float m9",
 "int parent",
 "float rotation",
 "float zoom",
 "float w",
 "float x",
 "float y",
 "float z",
 "float x",
 "float y",
 "float x",
 "float y",
 "float z"]
*/
