#ifndef PORSCHE_H
#define PORSCHE_H

#include "Auto.h"

class Porsche : public Auto {
private:
    double sebesseg;

public:
    Porsche(double sebesseg);
    void gyorsul() override;
    double getSebesseg() const override;
};

#endif