#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

typedef struct {
    Shape super;

    double height;
    double width;
} Rectangle;

void Rectangle_ctor(Rectangle * const self, double x, double y, double height, double width);

#endif /* RECTANGLE_H */