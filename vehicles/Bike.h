#include "Vehicule.h"
#ifndef BIKE_H
#define BIKE_H
class Bike: public Vehicule{
    public:
        Bike(int price , int year);
        void drive();
        
};
#endif