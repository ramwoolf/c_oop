#include <stdio.h>
#include "shape.h"

int main(int argc, char const *argv[])
{
    Shape s1, s2;

    Shape_ctor(&s1, 2.5, 4.6);
    Shape_ctor(&s2, 0.1, -1.4);

    printf("s1: %f, %f\n", Shape_getX(&s1), Shape_getY(&s1));
    printf("s2: %f, %f\n", Shape_getX(&s2), Shape_getY(&s2));

    Shape_shiftBy(&s1, 2, -4);

    printf("s1: %f, %f\n", Shape_getX(&s1), Shape_getY(&s1));
    printf("s2: %f, %f\n", Shape_getX(&s2), Shape_getY(&s2));
    return 0;
}
