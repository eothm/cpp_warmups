#include <string>
using namespace std;
#ifndef PERSON_H
#define PERSON_H
class Person {
    private:
        string name;
        int age =0;
    public:
        Person(string name, int age);
        Person(string name);
        void speak();

};
#endif