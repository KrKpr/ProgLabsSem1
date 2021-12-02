#ifndef MYHEADER_C
#define MYHEADER_C

#include <math.h>
#include <stdio.h>
#include "myheader.h"

//Ring square formula: S = pi*(R^2 - r^2)
float SquareFunc(struct data ring) {
    float l = M_PI * (pow(ring.largerRadius, 2) - pow(ring.smallerRadius, 2));
    return l;
}

//Ring perimeter formul?: S = 2*pi*R^2 - 2*pi*r^2
float PerimeterFunc(struct data ring) {
    float s = 2 * M_PI * pow(ring.largerRadius, 2) - 2 * M_PI * pow(ring.smallerRadius, 2);
    return s;
}

struct data create_struct(struct data ring) {
    printf("Input larger and smaller radii\n");
    scanf("%f %f", &ring.largerRadius, &ring.smallerRadius);
    return ring;
}

#endif
