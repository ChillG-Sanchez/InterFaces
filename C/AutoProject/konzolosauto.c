#include "konzolosauto.h"
#include <stdio.h>

void KonzolosAuto_Init(KonzolosAuto* self) {
    self->sebesseg = 0;
    self->base.gyorsul = KonzolosAuto_Gyorsul;
    self->base.getSebesseg = KonzolosAuto_GetSebesseg;
}

void KonzolosAuto_Gyorsul(Auto* self) {
    KonzolosAuto* konzolosAuto = (KonzolosAuto*)self;
    printf("Mennyivel gyorsuljon a KonzolosAuto? ");
    double gyorsulas;
    scanf("%lf", &gyorsulas);
    konzolosAuto->sebesseg += gyorsulas;
}

double KonzolosAuto_GetSebesseg(Auto* self) {
    KonzolosAuto* konzolosAuto = (KonzolosAuto*)self;
    return konzolosAuto->sebesseg;
}