/*
 * E89 Pedagogical & Technical Lab
 * project:     put pixel
 * created on:  2023-02-24 - 09:46 +0100
 * 1st author:  nolan.vollet - nolan.vollet
 * description: put a pixel
 */

#include "stu.h"

void put_pixel(t_bunny_pixelarray *pxa,
               t_bunny_position *pos,
               unsigned int color)
{
    int width = pxa->clipable.clip_width;
    int height = pxa->clipable.clip_height;
    int i = 0;
    unsigned int *tmp = (unsigned int*)pxa ->pixels;
    i = (width * pos->y) + pos->x;
    if (i < width * height) {
        tmp[i] = color;
    }
}
