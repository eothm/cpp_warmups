#include "Complex.h"
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
    
}