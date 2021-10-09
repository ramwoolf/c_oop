#include <assert.h>
#include "shape.h"

static double Shape_area_(Shape const * const self);
static void Shape_draw_(Shape const * const self);

void Shape_ctor(Shape * const self, double x, double y) {
    static struct ShapeVtbl const vtbl = {
        &Shape_area_,
        &Shape_draw_
    };

    self->vptr = &vtbl;
    self->x = x;
    self->y = y;
}

void Shape_shift(Shape * const self, double dx, double dy) {
    self->x += dx;
    self->y += dy;
}

double Shape_getX(Shape * const self) {
    return self->x;
}

double Shape_getY(Shape * const self) {
    return self->y;
}

static double Shape_area_(Shape const * const self) {
    assert(0);
    return 0u;
}

static void Shape_draw_(Shape const * const self) {
    assert(0);
}

Shape const * largestShape(Shape const * shapes[], uint32_t nShapes) {
    Shape const * result = (Shape *)0;
    double max = 0u;
    uint32_t i = 0u;

    for (i = 0u; i < nShapes; ++i) {
        double area = Shape_area(shapes[i]);
        if (area > max) {
            max = area;
            result = shapes[i];
        }
    }

    return result;
}

void drawAllShapes(Shape const * shapes[], uint32_t nShapes) {
    uint32_t i = 0u;

    for (i = 0u; i < nShapes; ++i) {
        Shape_draw(shapes[i]);
    }
}