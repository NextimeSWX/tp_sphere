/*
 * E89 Pedagogical & Technical Lab
 * project:     tp sphere
 * created on:  2023-01-18 - 09:21 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: set_spiral.c
 */

#include "stu.h"


#include <stdio.h>

void stu_set_spiral(t_bunny_pixelarray *px,
                    int x,
                    int y,
                    int radius,
                    int loops)
{
    float spir;
    float tmp;
    int degrees;
    t_bunny_position pos;

    spir = radius;
    degrees = 0;
    tmp = (float)radius / 360;
        while (degrees <= (360 * loops)) {
            spir = spir + tmp;
            pos.x = (cos(deg_to_rads(degrees)) * spir) + x;
            pos.y = (sin(deg_to_rads(degrees)) * spir * -1) + y;
            put_pixel(&pos, px, WHITE);
            degrees += 1;
        }
}
