#include "Bike.h"
#include <iostream>

Bike::Bike(int price , int year){
    this->price = price;
    this->year = year;
}

void Bike::drive(){
    std::cout<<"Woosh\n";
}

