/*
 * E89 Pedagogical & Technical Lab
 * project:     tp_sphere
 * created on:  2023-01-12 - 09:56 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: test_deg_to_rads.c
 */

#include "stu.h"
#include <stdio.h>

double deg_to_rads(int degrees);

int main(void)
{
    int degrees;

    degrees = 360;
    if (degrees >= 0 && degrees <= 360) {
        printf("%f\n", deg_to_rads(degrees));
    }
    else {
        printf("Error");
    }
}
