#include <stdio.h>
#include "myheader.h"

int main() {
    struct data ring;
    float square, perimeter;
    ring = create_struct(ring);
    square = SquareFunc(ring);
    perimeter = PerimeterFunc(ring);
    printf("Square is %f\n", square);
    printf("Perimeter is %f\n", perimeter);
    return 0;
}