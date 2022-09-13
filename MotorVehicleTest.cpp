#include <iostream>
#include "MotorVehicle.h"

using namespace std;

int main(){

    MotorVehicle auto1{"Toyota", "Gasolina", 2011, "Azul", 300};
    MotorVehicle auto2{"Honda", "Gas", 2011, "Azul", 100};
    
    auto1.displayCarDetails();
    
    auto2.displayCarDetails();
    



}
