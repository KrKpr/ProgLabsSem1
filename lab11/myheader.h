#ifndef MYHEADER_H
#define MYHEADER_H

struct data {
    float largerRadius;
    float smallerRadius;
};

float SquareFunc(struct data ring);

float PerimeterFunc(struct data ring);

struct data create_struct(struct data ring);

#endif