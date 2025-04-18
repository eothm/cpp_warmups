#include <string>
using namespace std;
#ifndef RECTANGLE_H
#define RECTANGLE_H
class Rectangle {
    private:
        float length;
        float width;
    public:
        void setLength(float length);
        float getLength() const;
        void setWidth(float width);
        float getWidth() const;
        float area() const;

};
#endif