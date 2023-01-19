/*
 * E89 Pedagogical & Technical Lab
 * project:     tp_sphere
 * created on:  2023-01-13 - 14:28 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: test_set_circle.c
 */

#include "stu.h"

int main(void)
{
    int x;
    int y;
    int loops;
    int radius;
    t_bunny_window *win;
    t_bunny_position origin;
    t_bunny_pixelarray *px;

    x = 400;
    y = 300;
    loops = 0;
    radius = 50;
    origin.x = 0;
    origin.y = 0;
    win = bunny_start(800, 600, false, "fl: Main Window");
    px = bunny_new_pixelarray(800, 600);
    stu_set_spiral(px, x, y, radius, loops);
    bunny_blit(&win->buffer, &px->clipable, &origin);
    bunny_display(win);
    usleep(5e7);
    bunny_stop(win);
    return (EXIT_SUCCESS);
}
