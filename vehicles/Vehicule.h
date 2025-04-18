#ifndef VEHICULE_H
#define VEHICULE_H
class Vehicule{
    protected:
        int price;
        int year;
    public:
        virtual void drive()=0;
};
#endif