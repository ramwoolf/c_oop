#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

typedef struct {
    Shape super;

    double radius;
} Circle;

void Circle_ctor(Circle * const self, double x, double y, double radius);

#endif /* CIRCLE_H */