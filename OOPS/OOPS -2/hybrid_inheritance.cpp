#include <iostream> 
using namespace std;

//DIAMOND PROBLEM IN INHERITANCE: 
 
class Vehicle{

    private: 
    int maxSpeed;

    protected:
    int numTyres;

    public:
    string color;
    Vehicle(){
        cout<<"This is default VEHICLE constructor"<<endl;
    }

    void print(){
        cout<<"VEHICLE"<<endl;
        cout<<"Color: "<<color<<endl;
        cout<<"Num of Tyres: "<<numTyres<<endl;
        cout<<"Max speed "<<maxSpeed<<endl;
    }
};

class Car: virtual public Vehicle{

    public: 
        int numGears; 
    Car(){
        cout<<"This is default CAR constructor"<<endl;
    }
   
};

class Truck: virtual public Vehicle{
    public: 
    Truck(){
        cout<<"This is default Truck onstructor"<<endl;    
    }
};


class Bus: public Car, public Truck{
    public:
    Bus(){
        cout<<"This is default BUS constructor"<<endl;    
    }

};

int main(){
    Bus b;
    b.Car::print();
    b.print();

}