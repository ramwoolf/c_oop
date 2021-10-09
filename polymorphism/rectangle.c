#include "rectangle.h"
#include <stdio.h>

static double Rectangle_area_(Shape const * const self);
static void Rectangle_draw_(Shape const * const self);

void Rectangle_ctor(Rectangle * const self, double x, double y, double height, double width) {
    static struct ShapeVtbl const vtbl = {
        &Rectangle_area_,
        &Rectangle_draw_
    };

    Shape_ctor(&self->super, x, y);
    self->super.vptr = &vtbl;
    self->height = height;
    self->width = width;
}

static double Rectangle_area_(Shape const * const self) {
    Rectangle const * const self_ = (Rectangle const *)self;
    return (uint32_t)self_->width * (uint32_t)self_->height;
}

static void Rectangle_draw_(Shape const * const self) {
    Rectangle const * const self_ = (Rectangle const *)self;
    printf("Rectangle_draw_(x = %f, y = %f, height = %f, width = %f\n",
        self_->super.x, self_->super.y, self_->height, self_->width);
}