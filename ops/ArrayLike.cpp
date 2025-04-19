#include "ArrayLike.h"
#include <stdexcept>


    ArrayLike::ArrayLike(size_t size) : size(size) {
        data = new int[size];
        for (size_t i = 0; i < size; ++i) {
            data[i] = 0;
        }
    }

    ArrayLike::~ArrayLike() {
        delete[] data;
    }

    int& ArrayLike::operator[](size_t index) {
        if (index >= size) {
            throw std::out_of_range("Index out of range");
        }
        return data[index];
    }

    const int& ArrayLike::operator[](size_t index) const {
        if (index >= size) {
            throw std::out_of_range("Index out of range");
        }
        return data[index];
    }

    size_t ArrayLike::getSize() const {
        return size;
    }
