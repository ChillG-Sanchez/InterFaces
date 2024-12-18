#include <stdio.h>
#include <stdlib.h>
#include "auto.h"
#include "porsche.h"
#include "tesla.h"
#include "konzolosauto.h"

Auto* leggyorsabb(Auto** lista, int meret) {
    Auto* leggyorsabb = lista[0];
    for (int i = 1; i < meret; i++) {
        if (lista[i]->getSebesseg(lista[i]) > leggyorsabb->getSebesseg(leggyorsabb)) {
            leggyorsabb = lista[i];
        }
    }
    return leggyorsabb;
}

int main() {
    Porsche porsche1;
    Porsche_Init(&porsche1, 50);

    Tesla tesla1;
    Tesla_Init(&tesla1);

    KonzolosAuto konzolosAuto;
    KonzolosAuto_Init(&konzolosAuto);

    Porsche porsche2;
    Porsche_Init(&porsche2, 70);

    Tesla tesla2;
    Tesla_Init(&tesla2);

    Auto* autok[] = { (Auto*)&porsche1, (Auto*)&tesla1, (Auto*)&konzolosAuto, (Auto*)&porsche2, (Auto*)&tesla2 };

    for (int i = 0; i < 5; i++) {
        autok[i]->gyorsul(autok[i]);
        printf("Sebesség: %.2f km/h\n", autok[i]->getSebesseg(autok[i]));
    }

    Auto* leggyorsabbAuto = leggyorsabb(autok, 5);
    printf("A leggyorsabb autó sebessége: %.2f km/h\n", leggyorsabbAuto->getSebesseg(leggyorsabbAuto));

    return 0;
}