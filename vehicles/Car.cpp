#include "Car.h"
#include <iostream>

void Car::drive(){
    std::cout<<"Vroom\n";
}

Car::Car(int price , int year){
    this->price = price;
    this->year = year;
}