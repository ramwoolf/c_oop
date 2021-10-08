#include "shape.h"

void Shape_ctor(Shape * const self, double x, double y){
    self->x = x;
    self->y = y;
}

void Shape_shiftBy(Shape * const self, double dx, double dy) {
    self->x += dx;
    self->y += dy;
}

double Shape_getX(Shape * const self) {
    return self->x;
}

double Shape_getY(Shape * const self) {
    return self->y;
}

char * const to_string(Shape * const self) {
    return "Shape";
}