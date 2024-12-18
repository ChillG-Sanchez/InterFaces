#include "KonzolosAuto.h"

KonzolosAuto::KonzolosAuto() : sebesseg(0) {}

void KonzolosAuto::gyorsul() {
    std::cout << "Mennyivel gyorsuljon a KonzolosAuto? ";
    double gyorsulas;
    std::cin >> gyorsulas;
    sebesseg += gyorsulas;
}

double KonzolosAuto::getSebesseg() const {
    return sebesseg;
}