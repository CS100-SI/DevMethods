#pragma once

class Vehicle {
    protected:
        bool isCar;
    public:
        VehiclePrint() {
        cout << "This is a Vehicle\n";
        }
};
 
class FourWheeler {
    protected:
        string wheelBrand;
    public:
        FourWheelerPrint() {
        cout << "This is a 4 wheeler Vehicle\n";
        }
};
 
class Car : public Vehicle, public FourWheeler {
    string type;
    string brand;
    int numSeats;
};