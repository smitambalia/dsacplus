#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
protected:
    string name;
    string model;
    int noOfTyres;

public:
    Vehicle(string name, string model, int noOfTyres)
    {
        cout << "I am inside the Vehicle constructore" << endl;
        this->name = name;
        this->model = model;
        this->noOfTyres = noOfTyres;
    }

    /* string getName() {
        return this->name;
    } */
    void startEngine()
    {
        cout << "Engine is starting for " << name << " " << model << endl;
    }

    void stopEngine()
    {
        cout << "Engine is stopped for " << name << " " << model << endl;
    }
};

class Car : public Vehicle
{
public:
    int noOfDoors;
    string transmissionType;

    Car(string name, string model, int noOfTyres, int noOfDoors, string transmissionType) : Vehicle(name, model, noOfTyres)
    {
        cout << "I am inside the Car constructore" << endl;
        this->noOfDoors = noOfDoors;
        this->transmissionType = transmissionType;
    }
    void startAC()
    {
        cout << "AC is started for the " << name << endl;
    }
};
class MotorCycle : public Vehicle {
    protected:
        string handleBarStyle;
        string suspensionType;
    public:
    MotorCycle(string name, string model, int noOfTyres,string handleBarStyle, string suspensionType) : Vehicle(name,model,noOfTyres) {
        cout << "In the Motor Cycle constructor " << endl;

        this->handleBarStyle = handleBarStyle;
        this->suspensionType = suspensionType;
    }
    void weelie() {
        cout << "Doing Weelie " << name << endl;
    }
};
int main()
{
    Car A("WagonR", "LXI", 4, 4, "Manual");
    A.startEngine();
    A.startAC();
    A.stopEngine();

    MotorCycle M("BMW","Top",2,"U","Hard");
    M.weelie();
    return 0;
}