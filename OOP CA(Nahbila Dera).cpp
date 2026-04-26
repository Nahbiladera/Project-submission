#include <iostream>
using namespace std;

class Vehicle{
private:
    string brand;
    string model;
    int year;

public:
    Vehicle(string b, string m, int y){
    brand=b;
    model=m;
    year=y;
    }

    virtual string GetInfo(){
    cout<<brand<<" "<<model<<" "<<"of year"<<year<<endl;
    }
};

class Car:public Vehicle {
private:
    int numdoors;

public:
    Car(string b, string m, int y, int doors):Vehicle(b,m,y){
    numdoors=doors;
    }

    string GetInfo()override {
    cout<<Vehicle::GetInfo<<" "<<"Doors"<<numdoors<<endl;
    }
};

class Motorcycle:public Vehicle{
private:
    bool hasSidecar;

public:
    Motorcycle(string b, string m, int y, bool sidecar):Vehicle(b,m,y){
    hasSidecar=sidecar;
    }

    string GetInfo()override{
    cout<<Vehicle::GetInfo<<"Sidecar"<<" "<<hasSidecar<<" "<<"Yes or No"<<endl;
    }
};

int main(){
Car car1("Toyota", "Benz", 2021,4);
Motorcycle bike1("Harley", "Sportsbike",2022, true);

cout<<car1.GetInfo()<<endl;
cout<<bike1.GetInfo()<<endl;
return 0;
}
