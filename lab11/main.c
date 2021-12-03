#include <stdio.h>
#include "myheader.h"

int main() {
    struct data ring;
    float square, perimeter;
    printf("Input larger and smaller radii\n");
    scanf("%f %f", &ring.largerRadius, &ring.smallerRadius);
    square = SquareFunc(ring);
    perimeter = PerimeterFunc(ring);
    printf("Square is %f\n", square);
    printf("Perimeter is %f\n", perimeter);
    return 0;
}
