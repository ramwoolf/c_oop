#ifndef SHAPE_H
#define SHAPE_H

typedef struct {
    double x;
    double y;
} Shape;

void Shape_ctor(Shape * const self, double x, double y);
void Shape_shiftBy(Shape * const self, double x, double y);
double Shape_getX(Shape * const self);
double Shape_getY(Shape * const self);
char * const to_string(Shape *const self);

#endif // SHAPE_H