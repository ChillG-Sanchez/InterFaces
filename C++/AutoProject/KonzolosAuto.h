#ifndef KONZOLOSAUTO_H
#define KONZOLOSAUTO_H

#include "Auto.h"
#include <iostream>

class KonzolosAuto : public Auto {
private:
    double sebesseg;

public:
    KonzolosAuto();
    void gyorsul() override;
    double getSebesseg() const override;
};

#endif