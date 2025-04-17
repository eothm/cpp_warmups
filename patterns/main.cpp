#include <iostream>
#include <array>
using namespace std;
void inverted_triangle(int n){
    for (int i = n; i > 0; --i) {
        for (int j = 0; j < i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
}
void triange(int n){
    for (int i = 0; i <n ; i++) {
        for (int j = 0; j < i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
}
int sumUntil (int n){
    int sum=0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    return sum;
}

int factorial(int n){
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

std::array<int, 10> multiples(int n) {
    std::array<int,10> mul;
    for (int i=1; i<=10;i++){
        mul[i-1]=n*i;
    }
    return mul;
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    triange(n);
    cout << endl;
    inverted_triangle(n);
    cout << endl;
    cout << "Sum of numbers from 1 to " << n << " is: " << sumUntil(n) << endl;
    cout << endl;
    cout << "Factorial of " << n << " is: " << factorial(n) << endl;
    cout << endl;
    cout << n << (isPrime(n) ? " is a prime number." : " is not a prime number.") << endl;
    cout << endl;
    cout<<"The first 10 multiples of "<<n<<" are: ";
    std::array<int, 10> mul = multiples(n);
    for (int i=0; i<10;i++){
        cout<<mul[i]<<" ";
    }
    cout<<endl;
    return 0;
}