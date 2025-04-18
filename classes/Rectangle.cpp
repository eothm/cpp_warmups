#include "Rectangle.h"

float Rectangle::getLength() const {
    return length;
}
float Rectangle::getWidth() const {
    return width;
}
void Rectangle::setLength(float length) {
    this->length = length;
}
void Rectangle::setWidth(float width) {
    this->width = width;
}
float Rectangle::area() const {
    return length * width;
}