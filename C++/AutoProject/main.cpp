#include <iostream>
#include <vector>
#include "Auto.h"
#include "Porsche.h"
#include "Tesla.h"
#include "KonzolosAuto.h"

Auto* leggyorsabb(const std::vector<Auto*>& lista) {
    Auto* leggyorsabb = lista[0];
    for (Auto* aut : lista) {
        if (aut->getSebesseg() > leggyorsabb->getSebesseg()) {
            leggyorsabb = aut;
        }
    }
    return leggyorsabb;
}

int main() {
    std::vector<Auto*> autok = {
        new Porsche(50),
        new Tesla(),
        new KonzolosAuto(),
        new Porsche(70),
        new Tesla()
    };

    for (Auto* aut : autok) {
        aut->gyorsul();
        std::cout << "Sebesség: " << aut->getSebesseg() << " km/h" << std::endl;
    }

    Auto* leggyorsabbAuto = leggyorsabb(autok);
    std::cout << "A leggyorsabb autó sebessége: " << leggyorsabbAuto->getSebesseg() << " km/h" << std::endl;

    for (Auto* aut : autok) {
        delete aut;
    }

    return 0;
}