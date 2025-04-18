#include "Vehicule.h"
#include "Car.h"
#include "Bike.h"
#include <vector>

int main(){
    Car* car = new Car(10,2020);
    Bike* bike = new Bike(5,2015);
    std::vector<Vehicule*> vehicules;
    vehicules.push_back(car);
    vehicules.push_back(bike);
    for (int i=0; i<vehicules.size(); i++){
        vehicules[i]->drive();
    }
}