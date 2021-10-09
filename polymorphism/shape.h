#ifndef SHAPE_H
#define SHAPE_H

#include <stdint.h>

struct ShapeVtbl;

typedef struct {
    struct ShapeVtbl const * vptr;
    double x;
    double y;   
} Shape;

struct ShapeVtbl {
    double (*area) (Shape const * const self);
    void (*draw) (Shape const * const self);
};

void Shape_ctor(Shape * const self, double x, double y);
void Shape_shift(Shape * const self, double dx, double dy);
double Shape_getX(Shape * const self);
double Shape_getY(Shape * const self);

static inline double Shape_area(Shape const * const self) {
    return (*self->vptr->area)(self);
}

static inline void Shape_draw(Shape const * const self) {
    (*self->vptr->draw)(self);
}

Shape const * largestShape(Shape const * shapes[], uint32_t nShapes);
void drawAllShapes(Shape const * shapes[], uint32_t nShapes);

#endif /* SHAPE_H */