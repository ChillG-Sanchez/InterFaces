#include "Porsche.h"

Porsche::Porsche(double sebesseg) : sebesseg(sebesseg) {}

void Porsche::gyorsul() {
    sebesseg += 10;
}

double Porsche::getSebesseg() const {
    return sebesseg;
}