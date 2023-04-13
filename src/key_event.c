/*
 * E89 Pedagogical & Technical Lab
 * project:     key event
 * created on:  2023-02-21 - 15:16 +0100
 * 1st author:  nolan.vollet - nolan.vollet
 * description: execute if key pressed
 */

#include "stu.h"

void blit_at_origin(struct display *ds)
{
    t_bunny_position pos;

    pos.x = 0;
    pos.y = 0;
    bunny_blit(&ds->ds_win->buffer, &ds->ds_px->clipable, &pos);
    bunny_display(ds->ds_win);
}


t_bunny_response my_key_event_response(t_bunny_event_state state,
                           t_bunny_keysym keycode,
                           void *my_data)
{
    struct display *ds;
    ds = my_data;
    if (state == GO_UP)
        return (GO_ON);
    if (keycode == BKS_ESCAPE)
        return (EXIT_ON_SUCCESS);
    else if (keycode == BKS_Z) {
        ds->ds_mouv.y -= 2;
        printf("this is the Z key \n");
    } else if (keycode == BKS_S) {
        ds->ds_mouv.y += 2;
        printf("this is the S key \n");
    } else if (keycode == BKS_Q) {
        ds->ds_mouv.x -= 2;
        printf("this is the Q key \n");
    } else if (keycode == BKS_D) {
        ds->ds_mouv.x += 2;
        printf("this is the D key \n");
    }
    clear_pixelarray(ds->ds_px, BLACK);
    put_pixel(ds->ds_px, &ds->ds_mouv, WHITE);
    blit_at_origin(ds);
    return (GO_ON);
}
