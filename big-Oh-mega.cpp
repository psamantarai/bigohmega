#include <bits/stdc++.h>
using namespace std;

class Vehicle
{    
    public:
    string name, fuel_type, vehicle_status, vehicle_type;
    Vehicle() {}
    Vehicle(string name, string fuel, string status, string vehicle_type)
    {
        this->name = name;
        this->fuel_type = fuel;
        this->vehicle_status = status;
        this->vehicle_type=vehicle_type;       
    }

    void info()
    {        
        string info1 = name + " " + vehicle_type + " " + "runs on fuel called " + fuel_type;
        string info2 = name + " " + "is " + vehicle_status;
        cout<<info1<<endl;
        cout<<info2<<endl;
    }
    
};

class Bike: public Vehicle
{
    public:    
    Bike(){}
    Bike(string name, string fuel, string status) :  Vehicle(name,fuel,status,"bike")
    {
       
    }
};

class Car: public Vehicle
{
    public:   
    Car(){} 
    Car(string name, string fuel, string status) :  Vehicle(name,fuel,status,"car")
    {
       
    }
};




class Person
{
    string name;
    Car car;
    Bike bike;
    public:
    Person(string name, Car car, Bike bike)
    {
        this->name = name;
        this->car = car;
        this->bike = bike;
    }

    void details()
    {
        string info1 = name + " has two vehicle, one is " +car.name+ " and another is " + bike.name;
        cout<<info1<<endl;
        car.info();
        bike.info();
    }
};



int main()
{


    Person sourav("Sourav", 
                Car("Honda Accord", "disel", "made in India and New"),
                Bike("Ducati", "petrol", "used and imported Vehicle")  
               );
    sourav.details();   
    
    return 0;
}