#include "Tesla.h"

Tesla::Tesla() {
    std::srand(std::time(0));
    sebesseg = std::rand() % 61;
}

void Tesla::gyorsul() {
    sebesseg += std::rand() % 11 + 5;
}

double Tesla::getSebesseg() const {
    return sebesseg;
}