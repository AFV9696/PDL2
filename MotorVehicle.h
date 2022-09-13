#include <string>
#include <iostream>

using namespace std;

   class MotorVehicle {
      public :
         MotorVehicle ( string _make , string _fuelType , int _yearOfManufacture , string _color , int _engineCapacity)
            {
            make = _make;
            fuelType = _fuelType;
            yearOfManufacture = _yearOfManufacture;
            color = _color;
            engineCapacity = _engineCapacity;

            }

            void setMake (string _make){
               make = _make;
            }

            void setFuelType (string _fuelType){
               fuelType = _fuelType;
            }

            void setYearOfManufacture (int _yearOfManufacture){
               yearOfManufacture = _yearOfManufacture;
            }

            void setColor (string _color){
               color = _color;
            }

            void setEngineCapacity (int _engineCapacity){
               engineCapacity = _engineCapacity;
            }
            string getMake () const {
               return make;
            }
            string getFuelType() const{
               return fuelType;
            }
            int getYearOfManufacture() const{
               return yearOfManufacture;
            }
            string getColor() const{
               return color;
            }
            int getEngineCapacity() const{
               return engineCapacity;
            }
            
            void displayCarDetails(){
               cout << "Make: " << make << endl;
               cout << "Fuel Type: " << fuelType << endl;
               cout << "Year of manufacture: " << yearOfManufacture << endl;
               cout << "Color: " << color << endl;
               cout << "Engine Capacity: " << engineCapacity << endl;
            }
         
         
      private:
         string make;
         string fuelType;
         int yearOfManufacture;
         string color;
         int engineCapacity;
   };
