/*
 * E89 Pedagogical & Technical Lab
 * project:     stu.h
 * created on:  2022-11-14 - 10:02 +0100
 * 1st author:  nolan.vollet - nolan.vollet
 * description: my library
 */

#ifndef STU_H_
#define STU_H_

#include <lapin.h>

struct display {
    t_bunny_window *ds_win;
    t_bunny_pixelarray *ds_px;
    t_bunny_position ds_mouv;
};

void clear_pixelarray(t_bunny_pixelarray *pxa, unsigned int color);

void put_pixel(t_bunny_pixelarray *pxa,
               t_bunny_position *pos,
               unsigned int color);

void blit_at_origin(struct display *ds);

t_bunny_response my_key_event_response(t_bunny_event_state state,
                           t_bunny_keysym keycode,
                           void *my_data);

#endif
