#ifndef KONZOLOSAUTO_H
#define KONZOLOSAUTO_H

#include "auto.h"

typedef struct KonzolosAuto {
    Auto base;
    double sebesseg;
} KonzolosAuto;

void KonzolosAuto_Init(KonzolosAuto* self);
void KonzolosAuto_Gyorsul(Auto* self);
double KonzolosAuto_GetSebesseg(Auto* self);

#endif