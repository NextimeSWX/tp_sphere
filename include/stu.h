/*
 * E89 Pedagogical & Technical Lab
 * project:     Rev
 * created on:  2022-11-22 - 09:48 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: stu.h
 */

#ifndef STU_H_
#define STU_H_

#include <math.h>
#include <lapin.h>
#include <unistd.h>
#include <stdlib.h>

void stu_set_spiral(t_bunny_pixelarray *px,
                     int x,
                     int y,
                    int radius,
                    int loops);
void stu_set_circle(t_bunny_pixelarray *px,
                    int x,
                    int y,
                    int radius);
void put_pixel(t_bunny_position *pos,
               t_bunny_pixelarray *px,
               unsigned int color);
double deg_to_rads(int degrees);

#endif
