#include <iostream>
#ifndef COMPLEX_H
#define COMPLEX_H
class Complex{
    public:
        double real;
        double img;
    public:
        Complex(double real, double img);
        double magnitude();
        Complex operator+(Complex c);
        bool operator==(Complex c);
        bool operator<(Complex c);
        friend std::ostream& operator<<(std::ostream& os, const Complex& c);
        Complex& operator++();
        Complex operator++(int);
};
#endif