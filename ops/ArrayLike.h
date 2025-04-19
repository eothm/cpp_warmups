#include <stdexcept>
class ArrayLike {
    private:
        int* data;
        size_t size;
    
    public:
    ArrayLike(size_t size);
    ~ArrayLike();
    int& operator[](size_t index);
    const int& operator[](size_t index) const;
    size_t getSize() const;
};
