/*
 * E89 Pedagogical & Technical Lab
 * project:     tp_sphere
 * created on:  2023-01-19 - 09:35 +0100
 * 1st author:  evan.lebihan - evan.lebihan
 * description: test_deg_to_rads.c
 */

#include <stdio.h>

double deg_to_rads(int degrees);

int main(void)
{
    int degrees;

    degrees = 26;
    //deg_to_rads(degrees);
    printf("%f\n", deg_to_rads(degrees));
}
