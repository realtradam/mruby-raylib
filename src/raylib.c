#include <raylib.h>
#include <mruby.h>
#include <mruby/array.h>
#include <mruby/data.h>
#include <mruby/class.h>
#include <mruby/numeric.h>
#include <stdlib.h>
#if defined(PLATFORM_WEB)
#include <emscripten/emscripten.h>
#endif

#if defined(PLATFORM_WEB)
void execute_emscripten_block(void*);
#endif
void helper_texture_free(mrb_state*, void*);

bool check_collision_circle_rec(mrb_state* mrb, mrb_value circle_obj, mrb_value rec_obj);

static const struct mrb_data_type Color_type = {
    "Color", mrb_free
};

static const struct mrb_data_type Texture_type = {
    "Texture", helper_texture_free
};

void
helper_texture_free(mrb_state* mrb, void*ptr) {
    Texture *texture = (Texture*)ptr;
    UnloadTexture(*texture);
    mrb_free(mrb, ptr);
}

static const struct mrb_data_type Sound_type = {
    "Sound", mrb_free
};

static const struct mrb_data_type Vector2_type = {
    "Vector2", mrb_free
};

static const struct mrb_data_type Rectangle_type = {
    "Rectangle", mrb_free
};

static const struct mrb_data_type NPatchInfo_type = {
	"NPatchInfo", mrb_free
};

static mrb_value
mrb_NPatchInfo_initialize(mrb_state* mrb, mrb_value self) {
	mrb_value rect_source_obj;
    mrb_int left = 10;
    mrb_int top = 10;
    mrb_int right = 10;
    mrb_int bottom = 10;
    mrb_int layout = NPATCH_NINE_PATCH;
    mrb_get_args(mrb, "o|iiiii", &rect_source_obj, &left, &top, &right, &bottom, &layout);

    NPatchInfo *npatch_info = (NPatchInfo *)DATA_PTR(self);
    if(npatch_info) { mrb_free(mrb, npatch_info ); }
    mrb_data_init(self, NULL, &NPatchInfo_type);
    npatch_info = (NPatchInfo *)mrb_malloc(mrb, sizeof(NPatchInfo));

    Rectangle *rect_source = DATA_GET_PTR(mrb, rect_source_obj, &Rectangle_type, Rectangle);

	npatch_info->source = *rect_source;
	npatch_info->left = left;
	npatch_info->top = top;
	npatch_info->right = right;
	npatch_info->bottom = bottom;
	npatch_info->layout = layout;

    mrb_data_init(self, npatch_info, &NPatchInfo_type);
	return self;
}

/* accessors probably not needed
static mrb_value
mrb_NPatchInfo_get_source_rec(mrb_state* mrb, mrb_value self) {
    NPatchInfo *npi = DATA_GET_PTR(mrb, self, &NPatchInfo_type, NPatchInfo);
    struct RClass *c = mrb_module_get(mrb, "Raylib");
	struct RClass *rec_class = mrb_class_get_under(mrb, c, Rectangle_type.struct_name);
	return mrb_obj_value(Data_Wrap_Struct(mrb, rec_class, &Rectangle_type, &npi->source));
}

static mrb_value
mrb_NPatchInfo_get_left(mrb_state* mrb, mrb_value self) {
    NPatchInfo *npi = DATA_GET_PTR(mrb, self, &NPatchInfo_type, NPatchInfo);
    return mrb_fixnum_value(npi->left);
}

static mrb_value
mrb_NPatchInfo_get_top(mrb_state* mrb, mrb_value self) {
    NPatchInfo *npi = DATA_GET_PTR(mrb, self, &NPatchInfo_type, NPatchInfo);
    return mrb_fixnum_value(npi->top);
}

static mrb_value
mrb_NPatchInfo_get_right(mrb_state* mrb, mrb_value self) {
    NPatchInfo *npi = DATA_GET_PTR(mrb, self, &NPatchInfo_type, NPatchInfo);
    return mrb_fixnum_value(npi->right);
}

static mrb_value
mrb_NPatchInfo_get_bottom(mrb_state* mrb, mrb_value self) {
    NPatchInfo *npi = DATA_GET_PTR(mrb, self, &NPatchInfo_type, NPatchInfo);
    return mrb_fixnum_value(npi->bottom);
}

static mrb_value
mrb_NPatchInfo_get_layout(mrb_state* mrb, mrb_value self) {
    NPatchInfo *npi = DATA_GET_PTR(mrb, self, &NPatchInfo_type, NPatchInfo);
    return mrb_fixnum_value(npi->layout);
}*/

static mrb_value
mrb_Rectangle_initialize(mrb_state* mrb, mrb_value self) {
    mrb_float x = 0.0;
    mrb_float y = 0.0;
    mrb_float w = 10.0;
    mrb_float h = 10.0;
    mrb_get_args(mrb, "|ffff", &x, &y, &w, &h);

    Rectangle *rectangle = (Rectangle *)DATA_PTR(self);
    if(rectangle) { mrb_free(mrb, rectangle); }
    mrb_data_init(self, NULL, &Rectangle_type);
    rectangle = (Rectangle *)mrb_malloc(mrb, sizeof(Rectangle));

    rectangle->x = x;
    rectangle->y = y;
    rectangle->width = w;
    rectangle->height= h;

    mrb_data_init(self, rectangle, &Rectangle_type);
    return self;
}

static mrb_value
mrb_Rectangle_get_x(mrb_state* mrb, mrb_value self) {
    Rectangle *rect = DATA_GET_PTR(mrb, self, &Rectangle_type, Rectangle);
    return mrb_fixnum_value(rect->x);
}

static mrb_value
mrb_Rectangle_set_x(mrb_state* mrb, mrb_value self) {
    Rectangle *rect = DATA_GET_PTR(mrb, self, &Rectangle_type, Rectangle);
    mrb_float x;
    mrb_get_args(mrb, "f", &x);
    rect->x = x;
    return mrb_fixnum_value(rect->x);
}

static mrb_value
mrb_Rectangle_get_y(mrb_state* mrb, mrb_value self) {
    Rectangle *rect = DATA_GET_PTR(mrb, self, &Rectangle_type, Rectangle);
    return mrb_fixnum_value(rect->y);
}

static mrb_value
mrb_Rectangle_set_y(mrb_state* mrb, mrb_value self) {
    Rectangle *rect = DATA_GET_PTR(mrb, self, &Rectangle_type, Rectangle);
    mrb_float y;
    mrb_get_args(mrb, "f", &y);
    rect->y = y;
    return mrb_fixnum_value(rect->y);
}

static mrb_value
mrb_Rectangle_get_width(mrb_state* mrb, mrb_value self) {
    Rectangle *rect = DATA_GET_PTR(mrb, self, &Rectangle_type, Rectangle);
    return mrb_fixnum_value(rect->width);
}

static mrb_value
mrb_Rectangle_set_width(mrb_state* mrb, mrb_value self) {
    Rectangle *rect = DATA_GET_PTR(mrb, self, &Rectangle_type, Rectangle);
    mrb_float width;
    mrb_get_args(mrb, "f", &width);
    rect->x = width;
    return mrb_fixnum_value(rect->width);
}

static mrb_value
mrb_Rectangle_set_height(mrb_state* mrb, mrb_value self) {
    Rectangle *rect = DATA_GET_PTR(mrb, self, &Rectangle_type, Rectangle);
    mrb_float height;
    mrb_get_args(mrb, "f", &height);
    rect->x = height;
    return mrb_fixnum_value(rect->height);
}

static mrb_value
mrb_Rectangle_get_height(mrb_state* mrb, mrb_value self) {
    Rectangle *rect = DATA_GET_PTR(mrb, self, &Rectangle_type, Rectangle);
    return mrb_fixnum_value(rect->height);
}

static mrb_value
mrb_Vector2_initialize(mrb_state* mrb, mrb_value self) {
    mrb_float x = 1.0;
    mrb_float y = 1.0;
    mrb_get_args(mrb, "|ff", &x, &y);

    Vector2 *vector2 = (Vector2 *)DATA_PTR(self);
    if(vector2) { mrb_free(mrb, vector2); }
    mrb_data_init(self, NULL, &Vector2_type);
    vector2 = (Vector2 *)mrb_malloc(mrb, sizeof(Vector2));

    vector2->x = x;
    vector2->y = y;

    mrb_data_init(self, vector2, &Vector2_type);
    return self;
}

static mrb_value
mrb_Vector2_get_x(mrb_state* mrb, mrb_value self) {
    Vector2 *vec2 = DATA_GET_PTR(mrb, self, &Vector2_type, Vector2);
    return mrb_fixnum_value(vec2->x);
}

static mrb_value
mrb_Vector2_set_x(mrb_state* mrb, mrb_value self) {
    Vector2 *vec2 = DATA_GET_PTR(mrb, self, &Vector2_type, Vector2);
    mrb_float x;
    mrb_get_args(mrb, "f", &x);
    vec2->x = x;
    return mrb_fixnum_value(vec2->x);
}

static mrb_value
mrb_Vector2_get_y(mrb_state* mrb, mrb_value self) {
    Vector2 *vec2 = DATA_GET_PTR(mrb, self, &Vector2_type, Vector2);
    return mrb_fixnum_value(vec2->y);
}

static mrb_value
mrb_Vector2_set_y(mrb_state* mrb, mrb_value self) {
    Vector2 *vec2 = DATA_GET_PTR(mrb, self, &Vector2_type, Vector2);
    mrb_float y;
    mrb_get_args(mrb, "f", &y);
    vec2->y = y;
    return mrb_fixnum_value(vec2->y);
}

static mrb_value
mrb_Sound_initialize(mrb_state* mrb, mrb_value self) {
    char* path = NULL;
    mrb_get_args(mrb, "z", &path);

    Sound *sound = (Sound *)DATA_PTR(self);
    if(sound) { mrb_free(mrb, sound); }
    mrb_data_init(self, NULL, &Sound_type);
    sound = (Sound *)mrb_malloc(mrb, sizeof(Sound));

    *sound = LoadSound(path);

    mrb_data_init(self, sound, &Sound_type);
    return self;
}

static mrb_value
mrb_Texture_initialize(mrb_state* mrb, mrb_value self) {
    char* path = NULL;
    mrb_get_args(mrb, "z", &path);

    Texture *texture = (Texture *)DATA_PTR(self);
    if(texture) { mrb_free(mrb, texture); }
    mrb_data_init(self, NULL, &Texture_type);
    texture = (Texture *)mrb_malloc(mrb, sizeof(Texture));

    *texture = LoadTexture(path);

    mrb_data_init(self, texture, &Texture_type);
    return self;
}

static mrb_value
mrb_Texture_get_width(mrb_state* mrb, mrb_value self) {
    Texture *texture = DATA_GET_PTR(mrb, self, &Texture_type, Texture);
    return mrb_fixnum_value(texture->width);
}

static mrb_value
mrb_Texture_set_width(mrb_state* mrb, mrb_value self) {
    Texture *texture = DATA_GET_PTR(mrb, self, &Texture_type, Texture);
    mrb_int width;
    mrb_get_args(mrb, "i", &width);
    texture->width = width;
    return mrb_fixnum_value(texture->width);
}

static mrb_value
mrb_Texture_get_height(mrb_state* mrb, mrb_value self) {
    Texture *texture = DATA_GET_PTR(mrb, self, &Texture_type, Texture);
    return mrb_fixnum_value(texture->height);
}

static mrb_value
mrb_Texture_set_height(mrb_state* mrb, mrb_value self) {
    Texture *texture = DATA_GET_PTR(mrb, self, &Texture_type, Texture);
    mrb_int height;
    mrb_get_args(mrb, "i", &height);
    texture->height = height;
    return mrb_fixnum_value(texture->height);
}

static mrb_value
mrb_Texture_get_id(mrb_state* mrb, mrb_value self) {
    Texture *texture = DATA_GET_PTR(mrb, self, &Texture_type, Texture);
    return mrb_fixnum_value(texture->id);
}

static mrb_value
mrb_Texture_get_mipmaps(mrb_state* mrb, mrb_value self) {
    Texture *texture = DATA_GET_PTR(mrb, self, &Texture_type, Texture);
    return mrb_fixnum_value(texture->mipmaps);
}

static mrb_value
mrb_Texture_get_format(mrb_state* mrb, mrb_value self) {
    Texture *texture = DATA_GET_PTR(mrb, self, &Texture_type, Texture);
    return mrb_fixnum_value(texture->format);
}

static mrb_value
mrb_draw_texture(mrb_state* mrb, mrb_value self) {
    mrb_value texture_obj;
    mrb_int x;
    mrb_int y;
    mrb_value tint_obj;
    mrb_get_args(mrb, "oiio", &texture_obj, &x, &y, &tint_obj);

    Texture *texture_data = DATA_GET_PTR(mrb, texture_obj, &Texture_type, Texture);
    Color *tint_data = DATA_GET_PTR(mrb, tint_obj, &Color_type, Color);

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

static mrb_value
mrb_draw_texture_npatch(mrb_state* mrb, mrb_value self) {
	mrb_value texture_obj;
    mrb_value npi_obj;
    mrb_value dest_rec_obj;
    mrb_value pos_obj;
    mrb_float rotation;
    mrb_value tint_obj;
    mrb_get_args(mrb, "oooofo", &texture_obj, &npi_obj, &dest_rec_obj, &pos_obj, &rotation, &tint_obj);

    Texture *texture_data = DATA_GET_PTR(mrb, texture_obj, &Texture_type, Texture);
    NPatchInfo *npi_data = DATA_GET_PTR(mrb, npi_obj, &NPatchInfo_type, NPatchInfo);
    Rectangle *dest_rec_data = DATA_GET_PTR(mrb, dest_rec_obj, &Rectangle_type, Rectangle);
	Vector2 *pos_data = DATA_GET_PTR(mrb, pos_obj, &Vector2_type, Vector2);
    Color *tint_data = DATA_GET_PTR(mrb, tint_obj, &Color_type, Color);

    DrawTextureNPatch(*texture_data, *npi_data, *dest_rec_data, *pos_data, rotation, *tint_data);

    return mrb_nil_value();
}

static mrb_value
mrb_begin_scissor_mode(mrb_state* mrb, mrb_value self) {
    mrb_int x;
    mrb_int y;
    mrb_int width;
    mrb_int height;
    mrb_get_args(mrb, "iiii", &x, &y, &width, &height);

    BeginScissorMode(x, y, width, height);
    return mrb_nil_value();
}

static mrb_value
mrb_end_scissor_mode(mrb_state* mrb, mrb_value self) {
    EndScissorMode();
    return mrb_nil_value();
}

static mrb_value
mrb_begin_blend_mode(mrb_state* mrb, mrb_value self) {
    mrb_int mode;
    mrb_get_args(mrb, "i", &mode);

    BeginBlendMode(mode);
    return mrb_nil_value();
}

static mrb_value
mrb_end_blend_mode(mrb_state* mrb, mrb_value self) {
    EndBlendMode();
    return mrb_nil_value();
}


static mrb_value
mrb_Color_initialize(mrb_state* mrb, mrb_value self) {
    mrb_int r = 255;
    mrb_int g = 0;
    mrb_int b = 0;
    mrb_int a = 255;
    mrb_get_args(mrb, "|iiii", &r, &g, &b, &a);

    Color *color = (Color *)DATA_PTR(self);
    if(color) { mrb_free(mrb, color); }
    mrb_data_init(self, NULL, &Color_type);
    color = (Color *)mrb_malloc(mrb, sizeof(Color));

    color->r = r;
    color->g = g;
    color->b = b;
    color->a = a;

    mrb_data_init(self, color, &Color_type);
    return self;
}

static mrb_value
mrb_Color_get_red(mrb_state* mrb, mrb_value self) {
    Color *color = DATA_GET_PTR(mrb, self, &Color_type, Color);
    return mrb_fixnum_value(color->r);
}

static mrb_value
mrb_Color_set_red(mrb_state* mrb, mrb_value self) {
    Color *color = DATA_GET_PTR(mrb, self, &Color_type, Color);
    mrb_int r;
    mrb_get_args(mrb, "i", &r);
    color->r = r;

    return mrb_fixnum_value(color->r);
}

static mrb_value
mrb_Color_get_green(mrb_state* mrb, mrb_value self) {
    Color *color = DATA_GET_PTR(mrb, self, &Color_type, Color);
    return mrb_fixnum_value(color->g);
}

static mrb_value
mrb_Color_set_green(mrb_state* mrb, mrb_value self) {
    Color *color = DATA_GET_PTR(mrb, self, &Color_type, Color);
    mrb_int g;
    mrb_get_args(mrb, "i", &g);
    color->g = g;

    return mrb_fixnum_value(color->g);
}

static mrb_value
mrb_Color_get_blue(mrb_state* mrb, mrb_value self) {
    Color *color = DATA_GET_PTR(mrb, self, &Color_type, Color);

    return mrb_fixnum_value(color->b);
}

static mrb_value
mrb_Color_set_blue(mrb_state* mrb, mrb_value self) {
    Color *color = DATA_GET_PTR(mrb, self, &Color_type, Color);
    mrb_int b;
    mrb_get_args(mrb, "i", &b);
    color->b = b;

    return mrb_fixnum_value(color->b);
}

static mrb_value
mrb_Color_get_alpha(mrb_state* mrb, mrb_value self) {
    Color *color = DATA_GET_PTR(mrb, self, &Color_type, Color);
    return mrb_fixnum_value(color->a);
}

static mrb_value
mrb_Color_set_alpha(mrb_state* mrb, mrb_value self) {
    Color *color = DATA_GET_PTR(mrb, self, &Color_type, Color);
    mrb_int a;
    mrb_get_args(mrb, "i", &a);
    color->a = a;

    return mrb_fixnum_value(color->a);
}

static mrb_value
mrb_is_mouse_button_pressed(mrb_state* mrb, mrb_value self) {
    mrb_int button;
    mrb_get_args(mrb, "i", &button);

    return mrb_bool_value(IsMouseButtonPressed(button));
}

static mrb_value
mrb_is_mouse_button_down(mrb_state* mrb, mrb_value self) {
    mrb_int button;
    mrb_get_args(mrb, "i", &button);

    return mrb_bool_value(IsMouseButtonDown(button));
}

static mrb_value
mrb_is_mouse_button_released(mrb_state* mrb, mrb_value self) {
    mrb_int button;
    mrb_get_args(mrb, "i", &button);

    return mrb_bool_value(IsMouseButtonReleased(button));
}

static mrb_value
mrb_is_mouse_button_up(mrb_state* mrb, mrb_value self) {
    mrb_int button;
    mrb_get_args(mrb, "i", &button);

    return mrb_bool_value(IsMouseButtonUp(button));
}

static mrb_value
mrb_is_key_pressed(mrb_state* mrb, mrb_value self) {
    mrb_int key;
    mrb_get_args(mrb, "i", &key);

    return mrb_bool_value(IsKeyPressed(key));
}

static mrb_value
mrb_is_key_down(mrb_state* mrb, mrb_value self) {
    mrb_int key;
    mrb_get_args(mrb, "i", &key);

    return mrb_bool_value(IsKeyDown(key));
}


static mrb_value
mrb_is_key_released(mrb_state* mrb, mrb_value self) {
    mrb_int key;
    mrb_get_args(mrb, "i", &key);

    return mrb_bool_value(IsKeyReleased(key));
}

static mrb_value
mrb_is_key_up(mrb_state* mrb, mrb_value self) {
    mrb_int key;
    mrb_get_args(mrb, "i", &key);

    return mrb_bool_value(IsKeyUp(key));
}

static mrb_value
mrb_get_key_pressed(mrb_state* mrb, mrb_value self) {
    return mrb_fixnum_value(GetKeyPressed());
}

static mrb_value
mrb_get_mouse_x(mrb_state* mrb, mrb_value self) {
    return mrb_fixnum_value(GetMouseX());
}

static mrb_value
mrb_get_mouse_y(mrb_state* mrb, mrb_value self) {
    return mrb_fixnum_value(GetMouseY());
}

static mrb_value
mrb_get_mouse_wheel_move(mrb_state* mrb, mrb_value self) {
    return mrb_float_value(mrb, GetMouseWheelMove());
}

static mrb_value
mrb_init_audio_device(mrb_state* mrb, mrb_value self) {
    InitAudioDevice();

    return mrb_nil_value();
}


static mrb_value
mrb_init_window(mrb_state* mrb, mrb_value self) {
    mrb_int screenWidth = 800;
    mrb_int screenHeight = 600;
    char* title = "Hello World from FelFlame!";
    mrb_get_args(mrb, "|iiz", &screenWidth, &screenHeight, &title);

    InitWindow(screenWidth, screenHeight, title);

    return mrb_nil_value();
}

static mrb_value
mrb_platform(mrb_state* mrb, mrb_value self) {
#if defined(PLATFORM_WEB)
    return mrb_str_new_lit(mrb, "web");
#else
    return mrb_str_new_lit(mrb, "desktop");
#endif
}

//void DrawText(const char *text, int posX, int posY, int fontSize, Color color);
static mrb_value
mrb_draw_text(mrb_state* mrb, mrb_value self) {
    char* text = "Default Text";
    mrb_int x = 0;
    mrb_int y = 0;
    mrb_int fontSize = 16;
    mrb_value color_obj;


    mrb_get_args(mrb, "|ziiio", &text, &x, &y, &fontSize, &color_obj);
    Color *color = DATA_GET_PTR(mrb, color_obj, &Color_type, Color);
    DrawText(text, x, y, fontSize, *color);
    return mrb_nil_value();
}

static mrb_value
mrb_begin_drawing(mrb_state* mrb, mrb_value self) {
    BeginDrawing();
    return mrb_nil_value();
}

static mrb_value
mrb_end_drawing(mrb_state* mrb, mrb_value self) {
    EndDrawing();
    return mrb_nil_value();
}

static mrb_value
mrb_clear_background(mrb_state* mrb, mrb_value self) {
    mrb_value color_obj;
    mrb_get_args(mrb, "o", &color_obj);
    Color *color_data = DATA_GET_PTR(mrb, color_obj, &Color_type, Color);
    ClearBackground(*color_data);
    return mrb_nil_value();
}

static mrb_value 
mrb_call_main_loop(mrb_state* mrb, mrb_value self) {
    struct RClass *c = mrb_module_get(mrb, "Raylib");
    return mrb_funcall(mrb, mrb_obj_value(c), "main_loop", 0);
}

static mrb_value 
mrb_window_should_close(mrb_state* mrb, mrb_value self) {
    return mrb_bool_value(WindowShouldClose());
}

#if defined(PLATFORM_WEB)
static mrb_value 
mrb_emscripten_set_main_loop(mrb_state* mrb, mrb_value self) {
    emscripten_set_main_loop_arg(execute_emscripten_block, mrb, 0, 1);
    return mrb_nil_value();
}

void
execute_emscripten_block(void* mrb) {
    struct RClass *c = mrb_module_get(mrb, "Raylib");
    mrb_funcall(mrb, mrb_obj_value(c), "main_loop", 0);
}
#endif

static mrb_value
mrb_target_fps(mrb_state* mrb, mrb_value self) {
    mrb_int fps = 60;
    mrb_get_args(mrb, "i", &fps);
    SetTargetFPS(fps);
    return mrb_nil_value();
}

static mrb_value
mrb_fps(mrb_state* mrb, mrb_value self) {
    return mrb_fixnum_value(GetFPS());
}

static mrb_value
mrb_frame_time(mrb_state* mrb, mrb_value self) {
    return mrb_float_value(mrb, GetFrameTime());
}

static mrb_value
mrb_time(mrb_state* mrb, mrb_value self) {
    return mrb_float_value(mrb, GetTime());
}

static mrb_value
mrb_Circle_collide_with_circ(mrb_state* mrb, mrb_value self) {
    mrb_value circle_obj;
    mrb_get_args(mrb, "o", &circle_obj);

    mrb_value vector_obj1 = mrb_funcall(mrb, self, "vector", 0);
    Vector2 *center1 = DATA_GET_PTR(mrb, vector_obj1, &Vector2_type, Vector2);
    mrb_float radius1 = mrb_as_float(mrb, mrb_funcall(mrb, self, "radius", 0));

    mrb_value vector_obj2 = mrb_funcall(mrb, circle_obj, "vector", 0);
    Vector2 *center2 = DATA_GET_PTR(mrb, vector_obj2, &Vector2_type, Vector2);
    mrb_float radius2 = mrb_as_float(mrb, mrb_funcall(mrb, circle_obj, "radius", 0));

    return mrb_bool_value(CheckCollisionCircles(*center1, radius1, *center2, radius2));
}

static mrb_value
mrb_Rectangle_collide_with_rec(mrb_state* mrb, mrb_value self) {
    mrb_value rec1_obj;
    mrb_get_args(mrb, "o", &rec1_obj);

    Rectangle *rec1 = DATA_GET_PTR(mrb, rec1_obj, &Rectangle_type, Rectangle);
    Rectangle *rec2 = DATA_GET_PTR(mrb, self, &Rectangle_type, Rectangle);

    return mrb_bool_value(CheckCollisionRecs(*rec1, *rec2));
}

bool
check_collision_circle_rec(mrb_state* mrb, mrb_value circle_obj, mrb_value rec_obj) {
    mrb_value vector_obj = mrb_funcall(mrb, circle_obj, "vector", 0);
    mrb_float radius = mrb_as_float(mrb, mrb_funcall(mrb, circle_obj, "radius", 0));
    Vector2 *center = DATA_GET_PTR(mrb, vector_obj, &Vector2_type, Vector2);
    Rectangle *rec = DATA_GET_PTR(mrb, rec_obj, &Rectangle_type, Rectangle);

    return CheckCollisionCircleRec(*center, radius, *rec);
}

static mrb_value
mrb_Rectangle_collide_with_circ(mrb_state* mrb, mrb_value self) {
    mrb_value circle_obj;
    mrb_get_args(mrb, "o", &circle_obj);

    return mrb_bool_value(check_collision_circle_rec(mrb, circle_obj, self));
}

static mrb_value
mrb_Circle_collide_with_rec(mrb_state* mrb, mrb_value self) {
    mrb_value rec_obj;
    mrb_get_args(mrb, "o", &rec_obj);

    return mrb_bool_value(check_collision_circle_rec(mrb, self, rec_obj));
}

static mrb_value
mrb_Rectangle_get_collision_rec(mrb_state* mrb, mrb_value self) {
    mrb_value rec_obj;
    mrb_get_args(mrb, "o", &rec_obj);

    Rectangle *rec_self = DATA_GET_PTR(mrb, self, &Rectangle_type, Rectangle);
    Rectangle *rec_other = DATA_GET_PTR(mrb, rec_obj, &Rectangle_type, Rectangle);
    Rectangle *collision_rec = (Rectangle *)mrb_malloc(mrb, sizeof(Rectangle));
	*collision_rec = GetCollisionRec(*rec_self, *rec_other);

    struct RClass *c = mrb_module_get(mrb, "Raylib");
	struct RClass *rec_class = mrb_class_get_under(mrb, c, Rectangle_type.struct_name);
	return mrb_obj_value(Data_Wrap_Struct(mrb, rec_class, &Rectangle_type, collision_rec));
}

static mrb_value
mrb_Rectangle_draw_rectangle_rec(mrb_state* mrb, mrb_value self) {
    mrb_value color_obj;
    mrb_get_args(mrb, "o", &color_obj);

    Color *color = DATA_GET_PTR(mrb, color_obj, &Color_type, Color);
    Rectangle *rec_self = DATA_GET_PTR(mrb, self, &Rectangle_type, Rectangle);
    DrawRectangleRec(*rec_self, *color);

    return mrb_nil_value();
}

static mrb_value
mrb_Rectangle_draw_rectangle_lines_ex(mrb_state* mrb, mrb_value self) {
    mrb_value color_obj;
    mrb_float line_thick;
    mrb_get_args(mrb, "fo", &line_thick, &color_obj);

    Color *color = DATA_GET_PTR(mrb, color_obj, &Color_type, Color);
    Rectangle *rec_self = DATA_GET_PTR(mrb, self, &Rectangle_type, Rectangle);
    DrawRectangleLinesEx(*rec_self, line_thick, *color);

    return mrb_nil_value();
}

void
mrb_mruby_raylib_gem_init(mrb_state* mrb) {
    struct RClass *raylib = mrb_define_module(mrb, "Raylib");
    mrb_define_class_method(mrb, raylib, "init_window", mrb_init_window, MRB_ARGS_OPT(3));
    mrb_define_class_method(mrb, raylib, "platform", mrb_platform, MRB_ARGS_NONE());
    mrb_define_class_method(mrb, raylib, "_draw_text", mrb_draw_text, MRB_ARGS_OPT(5));
    mrb_define_class_method(mrb, raylib, "begin_drawing", mrb_begin_drawing, MRB_ARGS_NONE());
    mrb_define_class_method(mrb, raylib, "end_drawing", mrb_end_drawing, MRB_ARGS_NONE());
    mrb_define_class_method(mrb, raylib, "clear_background", mrb_clear_background, MRB_ARGS_REQ(1));
    mrb_define_class_method(mrb, raylib, "call_main_loop", mrb_call_main_loop, MRB_ARGS_NONE());
    mrb_define_class_method(mrb, raylib, "window_should_close?", mrb_window_should_close, MRB_ARGS_NONE());
    mrb_define_class_method(mrb, raylib, "target_fps=", mrb_target_fps, MRB_ARGS_REQ(1));
    mrb_define_class_method(mrb, raylib, "fps", mrb_fps, MRB_ARGS_NONE());
    mrb_define_class_method(mrb, raylib, "frame_time", mrb_frame_time, MRB_ARGS_NONE());
    mrb_define_class_method(mrb, raylib, "time", mrb_time, MRB_ARGS_NONE());
    mrb_define_class_method(mrb, raylib, "_draw_texture", mrb_draw_texture, MRB_ARGS_REQ(4));
    mrb_define_class_method(mrb, raylib, "_draw_texture_ex", mrb_draw_texture_ex, MRB_ARGS_REQ(5));
    mrb_define_class_method(mrb, raylib, "_draw_texture_pro", mrb_draw_texture_pro, MRB_ARGS_REQ(6));
    mrb_define_class_method(mrb, raylib, "mouse_button_pressed?", mrb_is_mouse_button_pressed, MRB_ARGS_REQ(1));
    mrb_define_class_method(mrb, raylib, "mouse_button_down?", mrb_is_mouse_button_down, MRB_ARGS_REQ(1));
    mrb_define_class_method(mrb, raylib, "mouse_button_released?", mrb_is_mouse_button_released, MRB_ARGS_REQ(1));
    mrb_define_class_method(mrb, raylib, "mouse_button_up?", mrb_is_mouse_button_up, MRB_ARGS_REQ(1));
    mrb_define_class_method(mrb, raylib, "key_pressed?", mrb_is_key_pressed, MRB_ARGS_REQ(1));
    mrb_define_class_method(mrb, raylib, "key_down?", mrb_is_key_down, MRB_ARGS_REQ(1));
    mrb_define_class_method(mrb, raylib, "key_released?", mrb_is_key_released, MRB_ARGS_REQ(1));
    mrb_define_class_method(mrb, raylib, "key_up?", mrb_is_key_up, MRB_ARGS_REQ(1));
    mrb_define_class_method(mrb, raylib, "_next_key_pressed", mrb_get_key_pressed, MRB_ARGS_NONE());
    mrb_define_class_method(mrb, raylib, "mouse_x", mrb_get_mouse_x, MRB_ARGS_NONE());
    mrb_define_class_method(mrb, raylib, "mouse_y", mrb_get_mouse_y, MRB_ARGS_NONE());
    mrb_define_class_method(mrb, raylib, "mouse_wheel", mrb_get_mouse_wheel_move, MRB_ARGS_NONE());
    mrb_define_class_method(mrb, raylib, "begin_scissor_mode", mrb_begin_scissor_mode, MRB_ARGS_REQ(4));
    mrb_define_class_method(mrb, raylib, "end_scissor_mode", mrb_end_scissor_mode, MRB_ARGS_NONE());
    mrb_define_class_method(mrb, raylib, "begin_blend_mode", mrb_begin_blend_mode, MRB_ARGS_REQ(1));
    mrb_define_class_method(mrb, raylib, "end_blend_mode", mrb_end_blend_mode, MRB_ARGS_NONE());

    struct RClass *color_class = mrb_define_class_under(mrb, raylib, "Color", mrb->object_class);
    MRB_SET_INSTANCE_TT(color_class, MRB_TT_DATA);
    mrb_define_method(mrb, color_class, "initialize", mrb_Color_initialize, MRB_ARGS_OPT(4));
    mrb_define_method(mrb, color_class, "r", mrb_Color_get_red, MRB_ARGS_NONE());
    mrb_define_method(mrb, color_class, "r=", mrb_Color_set_red, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, color_class, "g", mrb_Color_get_green, MRB_ARGS_NONE());
    mrb_define_method(mrb, color_class, "g=", mrb_Color_set_green, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, color_class, "b", mrb_Color_get_blue, MRB_ARGS_NONE());
    mrb_define_method(mrb, color_class, "b=", mrb_Color_set_blue, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, color_class, "a", mrb_Color_get_alpha, MRB_ARGS_NONE());
    mrb_define_method(mrb, color_class, "a=", mrb_Color_set_alpha, MRB_ARGS_REQ(1));

    struct RClass *sound_class = mrb_define_class_under(mrb, raylib, "Sound", mrb->object_class);
    MRB_SET_INSTANCE_TT(sound_class, MRB_TT_DATA);
    mrb_define_method(mrb, sound_class, "initialize", mrb_Sound_initialize, MRB_ARGS_REQ(1));
    mrb_define_class_method(mrb, raylib, "init_audio_device", mrb_init_audio_device, MRB_ARGS_NONE());

    struct RClass *texture_class = mrb_define_class_under(mrb, raylib, "Texture", mrb->object_class);
    MRB_SET_INSTANCE_TT(texture_class, MRB_TT_DATA);
    mrb_define_method(mrb, texture_class, "initialize", mrb_Texture_initialize, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, texture_class, "width", mrb_Texture_get_width, MRB_ARGS_NONE());
    mrb_define_method(mrb, texture_class, "width=", mrb_Texture_set_width, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, texture_class, "w", mrb_Texture_get_width, MRB_ARGS_NONE());
    mrb_define_method(mrb, texture_class, "w=", mrb_Texture_set_width, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, texture_class, "height", mrb_Texture_get_height, MRB_ARGS_NONE());
    mrb_define_method(mrb, texture_class, "height=", mrb_Texture_set_height, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, texture_class, "h", mrb_Texture_get_height, MRB_ARGS_NONE());
    mrb_define_method(mrb, texture_class, "h=", mrb_Texture_set_height, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, texture_class, "id", mrb_Texture_get_id, MRB_ARGS_NONE());
    mrb_define_method(mrb, texture_class, "mipmaps", mrb_Texture_get_mipmaps, MRB_ARGS_NONE());
    mrb_define_method(mrb, texture_class, "format", mrb_Texture_get_format, MRB_ARGS_NONE());

    struct RClass *vector2_class = mrb_define_class_under(mrb, raylib, "Vector2", mrb->object_class);
    MRB_SET_INSTANCE_TT(vector2_class, MRB_TT_DATA);
    mrb_define_method(mrb, vector2_class, "initialize", mrb_Vector2_initialize, MRB_ARGS_OPT(2));
    mrb_define_method(mrb, vector2_class, "x", mrb_Vector2_get_x, MRB_ARGS_NONE());
    mrb_define_method(mrb, vector2_class, "x=", mrb_Vector2_set_x, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, vector2_class, "y", mrb_Vector2_get_y, MRB_ARGS_NONE());
    mrb_define_method(mrb, vector2_class, "y=", mrb_Vector2_set_y, MRB_ARGS_REQ(1));

    struct RClass *rectangle_class = mrb_define_class_under(mrb, raylib, "Rectangle", mrb->object_class);
    MRB_SET_INSTANCE_TT(rectangle_class, MRB_TT_DATA);
    mrb_define_method(mrb, rectangle_class, "initialize", mrb_Rectangle_initialize, MRB_ARGS_OPT(4));
    mrb_define_method(mrb, rectangle_class, "x", mrb_Rectangle_get_x, MRB_ARGS_NONE());
    mrb_define_method(mrb, rectangle_class, "x=", mrb_Rectangle_set_x, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, rectangle_class, "y", mrb_Rectangle_get_y, MRB_ARGS_NONE());
    mrb_define_method(mrb, rectangle_class, "y=", mrb_Rectangle_set_y, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, rectangle_class, "width", mrb_Rectangle_get_width, MRB_ARGS_NONE());
    mrb_define_method(mrb, rectangle_class, "width=", mrb_Rectangle_set_width, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, rectangle_class, "w", mrb_Rectangle_get_width, MRB_ARGS_NONE());
    mrb_define_method(mrb, rectangle_class, "w=", mrb_Rectangle_set_width, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, rectangle_class, "height", mrb_Rectangle_get_height, MRB_ARGS_NONE());
    mrb_define_method(mrb, rectangle_class, "height=", mrb_Rectangle_set_height, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, rectangle_class, "h", mrb_Rectangle_get_height, MRB_ARGS_NONE());
    mrb_define_method(mrb, rectangle_class, "h=", mrb_Rectangle_set_height, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, rectangle_class, "collision_rec", mrb_Rectangle_get_collision_rec, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, rectangle_class, "collide_with_rec?", mrb_Rectangle_collide_with_rec, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, rectangle_class, "collide_with_circle?", mrb_Rectangle_collide_with_circ, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, rectangle_class, "_draw", mrb_Rectangle_draw_rectangle_rec, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, rectangle_class, "_draw_lines", mrb_Rectangle_draw_rectangle_lines_ex, MRB_ARGS_REQ(2));

    struct RClass *circle_class = mrb_define_class_under(mrb, raylib, "Circle", mrb->object_class);
    mrb_define_method(mrb, circle_class, "collide_with_rec?", mrb_Circle_collide_with_rec, MRB_ARGS_REQ(1));
    mrb_define_method(mrb, circle_class, "collide_with_circle?", mrb_Circle_collide_with_circ, MRB_ARGS_REQ(1));

    struct RClass *npatch_info_class = mrb_define_class_under(mrb, raylib, "NPatchInfo", mrb->object_class);
    mrb_define_method(mrb, npatch_info_class, "initialize", mrb_NPatchInfo_initialize, MRB_ARGS_REQ(1) | MRB_ARGS_OPT(5));
	/* accessors probably not needed
    mrb_define_method(mrb, npatch_info_class, "source_rec", mrb_NPatchInfo_get_source_rec, MRB_ARGS_NONE());
	mrb_define_method(mrb, npatch_info_class, "left", mrb_NPatchInfo_get_left, MRB_ARGS_NONE());
    mrb_define_method(mrb, npatch_info_class, "top", mrb_NPatchInfo_get_top, MRB_ARGS_NONE());
    mrb_define_method(mrb, npatch_info_class, "right", mrb_NPatchInfo_get_right, MRB_ARGS_NONE());
    mrb_define_method(mrb, npatch_info_class, "bottom", mrb_NPatchInfo_get_bottom, MRB_ARGS_NONE());
    mrb_define_method(mrb, npatch_info_class, "layout", mrb_NPatchInfo_get_layout, MRB_ARGS_NONE());*/

#if defined(PLATFORM_WEB)
    mrb_define_class_method(mrb, raylib, "emscripten_set_main_loop", mrb_emscripten_set_main_loop, MRB_ARGS_NONE());
#endif
}

void
mrb_mruby_raylib_gem_final(mrb_state* mrb) {
    /* finalizer */
}
