#include "engine.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

void setup_textures();
void setup_decals();
void setup_actors();
void loop_handler();
bool should_continue_logic_loops();
void setup_bindings();

engine *engine_init(
        unsigned int width,
        unsigned int height)
{
    eng.fps = 10;
    eng.current_frame = 0;
    eng.score = 0;

    eng.start_time = 0;
    eng.should_start_logic_loop = true;
    eng.whole_frames_to_do = 0;

    SDL_Init(SDL_INIT_VIDEO);

    SDL_CreateWindowAndRenderer(width, height, 0, &eng.window, &eng.renderer);
    eng.width = width;
    eng.height = height;

    if(eng.window == NULL) {
        fprintf(
                stderr,
                "Window could not be created: %s\n", SDL_GetError());
        return NULL;
    }

    return &eng;
}

void engine_destroy()
{
}

void engine_start()
{
}

void engine_reset()
{
}

void setup_textures()
{
}

void setup_decals()
{
}

void setup_actors()
{
}

bool should_continue_logic_loops()
{
  return true;
}

void loop_handler()
{
}

void setup_bindings()
{
}

void engine_get_grid_coord(const int *pixel_coord, int *grid_coord)
{
}

void engine_get_pixel_coord(const int *grid_coord, int *pixel_coord)
{
}

void engine_apply_boundary_conditions(int *grid_coords)
{
}
