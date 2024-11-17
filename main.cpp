#include <iostream>
#include <vector>
#include "car.h"

using namespace std;

int main()
{
    vector<Car*> carList = {
        new Car("Honda", "Civic", 1992),
        new Car("Toyota", "Corolla", 1993),
        new Car("Toyota", "Hiace", 1994)
    };
    cout << "Printing second car:" << endl;
    carList.at(1)->printData();
    cout << endl << "Printing all cars:" << endl;
    for(Car* car : carList){
        car->printData();
    }
    return 0;
}
