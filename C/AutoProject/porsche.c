#include "porsche.h"

void Porsche_Init(Porsche* self, double sebesseg) {
    self->sebesseg = sebesseg;
    self->base.gyorsul = Porsche_Gyorsul;
    self->base.getSebesseg = Porsche_GetSebesseg;
}

void Porsche_Gyorsul(Auto* self) {
    Porsche* porsche = (Porsche*)self;
    porsche->sebesseg += 10;
}

double Porsche_GetSebesseg(Auto* self) {
    Porsche* porsche = (Porsche*)self;
    return porsche->sebesseg;
}