#ifndef MYHEADER_H
#define MYHEADER_H

struct data {
    float largerRadius;
    float smallerRadius;
};

float SquareFunc(struct data ring);

float PerimeterFunc(struct data ring);

//УДОЛИТЬ!!!1!
struct data create_struct(struct data ring);

#endif

//Через экстерны указать функции
