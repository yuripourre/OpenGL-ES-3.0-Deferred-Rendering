/*! @file game.h
 *  @brief Main game code
 *  @copyright Copyright (c) 2013 Kyle Weicht. All rights reserved.
 */
#ifndef __game_h__
#define __game_h__

#include <stdint.h>
#include "vec_math.h"

typedef struct Game Game;

typedef struct TouchPoint
{
    intptr_t    index;
    Vec2        pos;
} TouchPoint;

Game* create_game(int width, int height);
void destroy_game(Game* game);
void resize_game(Game* game, int width, int height);

void update_game(Game* game);
void render_game(Game* game);

void add_touch_points(Game* game, int num_touch_points, TouchPoint* points);
void update_touch_points(Game* game, int num_touch_points, TouchPoint* points);
void remove_touch_points(Game* game, int num_touch_points, TouchPoint* points);

#endif /* include guard */
