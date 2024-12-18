#ifndef TESLA_H
#define TESLA_H

#include "auto.h"

typedef struct Tesla {
    Auto base;
    double sebesseg;
} Tesla;

void Tesla_Init(Tesla* self);
void Tesla_Gyorsul(Auto* self);
double Tesla_GetSebesseg(Auto* self);

#endif