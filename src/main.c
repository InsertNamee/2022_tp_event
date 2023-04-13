/*
 * E89 Pedagogical & Technical Lab
 * project:     main
 * created on:  2023-02-21 - 15:27 +0100
 * 1st author:  nolan.vollet - nolan.vollet
 * description: execute
 */

#include "stu.h"

int main (void)
{
    struct display display;

    display.ds_mouv.x = 200;
    display.ds_mouv.y = 200;
    display.ds_win = bunny_start(400, 400, false, "fl: tp event");
    display.ds_px = bunny_new_pixelarray(400, 400);
    blit_at_origin(&display);
    bunny_set_key_response(my_key_event_response);
    bunny_loop(display.ds_win, 30, &display);
    bunny_stop(display.ds_win);
    return (0);
}
