#include "Complex.h"
#include <cmath>

Complex::Complex(double real, double img) {
    this->real = real;
    this->img = img;
}

double Complex::magnitude(){
    return sqrt(real*real + img*img);
}

Complex Complex::operator+(Complex c){
    return Complex(real + c.real, img + c.img);
}

bool Complex::operator==(Complex c){
    return (real == c.real && img == c.img);
}
bool Complex::operator<(Complex c){
    return (magnitude() < c.magnitude());
}

std::ostream& operator<<(std::ostream& os, const Complex& c) {
    os << c.real << " + " << c.img << "i";
    return os;
}

Complex& Complex::operator++() {
    ++real;
    ++img;
    return *this;
}
Complex Complex::operator++(int) {
    Complex temp = *this;
    ++(*this);
    return temp;
}