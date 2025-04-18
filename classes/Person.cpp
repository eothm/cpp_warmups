#include "Person.h"
#include <iostream>
using namespace std;

Person::Person(string name, int age) {
    this->name = name;
    this->age = age;
}
Person::Person(string name) {
    this->name = name;
    this->age = 0;
}
void Person::speak() {
    if(age!=0)
        cout << "Hello, my name is " << name << " and I am " << age << " years old." << endl;
    else
    cout << "Hello, my name is " << name << " and I have no age"<< endl;
}