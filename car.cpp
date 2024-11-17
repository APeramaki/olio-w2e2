#include "car.h"
using namespace  std;

Car::Car() {}

Car::Car(string brand, string model, int modelYear)
{
    _brand = brand;
    _model = model;
    _yearModel = modelYear;

}
void Car::printData(){
    cout << "Brand: " << _brand
        << "\tModel: " << _model
        << "\tYear: " << _yearModel << endl;
}
