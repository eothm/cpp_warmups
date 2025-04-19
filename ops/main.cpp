#include "Complex.h"
#include "ArrayLike.h"
#include<iostream>
using namespace std;
int main(){
    Complex c1(3,4);
    Complex c2(10,5);
    cout<<"c1 = "<<c1<<endl;
    cout<<"c2 = "<<c2<<endl;
    cout<<"c1 + c2 = "<<c1+c2<<endl;
    cout<<"c1 == c2 ? "<<(c1==c2)<<endl;
    cout<<"c1 < c2 ? "<<(c1<c2)<<endl;
    cout<<c1+c2++<<endl;
    cout<<c1+(++c2)<<endl;
    ArrayLike arr(5);
    for (size_t i = 0; i < arr.getSize(); ++i) {
        arr[i] = static_cast<int>(i * 10);
    }
    for (size_t i = 0; i < arr.getSize(); ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}