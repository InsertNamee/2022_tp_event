/*
 * E89 Pedagogical & Technical Lab
 * project:     clear pixelarray
 * created on:  2023-02-24 - 09:55 +0100
 * 1st author:  nolan.vollet - nolan.vollet
 * description: change background color
 */

#include "stu.h"


void clear_pixelarray(t_bunny_pixelarray *pxa,unsigned int color)
{
    int width = pxa->clipable.clip_width;
    int height = pxa->clipable.clip_height;
    int px = width * height;
    int i = 0;
    unsigned int *tmp = (unsigned int*) pxa -> pixels;
    while (i<=px)
        {
            tmp[i]=color;
            i+= 1;
        }
}
