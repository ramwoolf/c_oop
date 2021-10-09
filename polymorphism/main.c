#include "rectangle.h"
#include "circle.h"
#include <stdio.h>

int main(int argc, char const *argv[])
{
    Rectangle r1, r2;
    Circle c1, c2;

    Rectangle_ctor(&r1, 0.0, 2.0, 10.0, 15.0);
    Rectangle_ctor(&r2, -1.0, 3.0, 5.0, 8.0);

    Circle_ctor(&c1, 1.0, -2.0, 12.0);
    Circle_ctor(&c2, 1.0, -3.0, 6.0);

    Shape const *shapes[] = {
        &r1.super,
        &c1.super,
        &r2.super,
        &c2.super
    };

    Shape const * s = largestShape(shapes, sizeof(shapes)/sizeof(shapes[0]));

    printf("Largest shape: s (x = %f, y = %f)\n", Shape_getX(s), Shape_getY(s));

    drawAllShapes(shapes, sizeof(shapes)/sizeof(shapes[0]));

    return 0;
}
