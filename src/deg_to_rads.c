/*
 * E89 Pedagogical & Technical Lab
 * project:     tp_sphere
 * created on:  2023-01-12 - 09:56 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: deg_to_rads.c
 */

#include "stu.h"

double deg_to_rads(int degrees)
{
    double rad;

    rad = 0;
    rad = degrees * (M_PI / 180);
    return (rad);
}
