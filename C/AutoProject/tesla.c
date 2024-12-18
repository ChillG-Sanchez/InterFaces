#include "tesla.h"
#include <stdlib.h>
#include <time.h>

void Tesla_Init(Tesla* self) {
    srand((unsigned int)time(NULL));
    self->sebesseg = rand() % 61;
    self->base.gyorsul = Tesla_Gyorsul;
    self->base.getSebesseg = Tesla_GetSebesseg;
}

void Tesla_Gyorsul(Auto* self) {
    Tesla* tesla = (Tesla*)self;
    tesla->sebesseg += rand() % 11 + 5;
}

double Tesla_GetSebesseg(Auto* self) {
    Tesla* tesla = (Tesla*)self;
    return tesla->sebesseg;
}