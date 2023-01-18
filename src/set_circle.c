/*
 * E89 Pedagogical & Technical Lab
 * project:     tp_sphere
 * created on:  2023-01-12 - 10:40 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: set_circle.c
 */

#include "stu.h"

void stu_set_circle(t_bunny_pixelarray *px,
                    int x,
                    int y,
                    int radius)
{
    int degrees;
    t_bunny_position pos;

    degrees = 0;
    while (degrees <= 360) {
        pos.x = (cos(deg_to_rads(degrees)) * radius) + x;
        pos.y = (sin(deg_to_rads(degrees)) * radius * -1) + y;
        put_pixel(&pos, px, WHITE);
        degrees += 1;
    }
}
