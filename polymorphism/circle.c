#include "circle.h"
#include <stdio.h>

static double Circle_area_(Shape const * const self);
static void Circle_draw_(Shape const * const self);

void Circle_ctor(Circle * const self, double x, double y, double radius) {
    static struct ShapeVtbl const vtbl = {
        &Circle_area_,
        &Circle_draw_
    };

    Shape_ctor(&self->super, x, y);
    self->super.vptr = &vtbl;
    self->radius = radius;
}

static double Circle_area_(Shape const * const self) {
    Circle const * const self_ = (Circle const *)self;
    return (double)self_->radius * (double)self_->radius * 3.1315;
}

static void Circle_draw_(Shape const * const self) {
    Circle const * const self_ = (Circle const *)self;
    printf("Circle_draw_(x = %f, y = %f, radius = %f\n",
        self_->super.x, self_->super.y, self_->radius);
}