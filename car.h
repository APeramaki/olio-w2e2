#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
    string _brand;
    string _model;
    int _yearModel;
public:
    Car();
    Car(string, string, int);
    ~Car();
    void printData();
};

#endif // CAR_H
