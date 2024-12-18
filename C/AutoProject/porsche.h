#ifndef PORSCHE_H
#define PORSCHE_H

#include "auto.h"

typedef struct Porsche {
    Auto base;
    double sebesseg;
} Porsche;

void Porsche_Init(Porsche* self, double sebesseg);
void Porsche_Gyorsul(Auto* self);
double Porsche_GetSebesseg(Auto* self);

#endif