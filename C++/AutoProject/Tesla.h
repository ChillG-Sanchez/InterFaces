#ifndef TESLA_H
#define TESLA_H

#include "Auto.h"
#include <cstdlib>
#include <ctime>

class Tesla : public Auto {
private:
    double sebesseg;

public:
    Tesla();
    void gyorsul() override;
    double getSebesseg() const override;
};

#endif