#include "Vehicule.h"
#ifndef CAR_H
#define CAR_H
class Car: public Vehicule{
    public:
        void drive();
        Car(int price, int year);
};
#endif