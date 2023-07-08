#include <iostream> 
using namespace std;

//parent class -> Base class
//Child class -> Derived class.

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
    ~Vehicle(){
        cout<<"Vehicle'S Destructors"<<endl;
    }
};

class Car : public Vehicle{
    //private is not accessible. Protected and Public are inherited as the same types.
    // numTyres and color are inherited.
    public:

    Car(){
        cout<<"This is default CAR constructor"<<endl;
    }
    ~Car(){
        cout<<"CAR's Destructor"<<endl;
    }
        int numGears;
    
};


int main(){
    Vehicle v; 
    Car c; //Vehicle and car constructors are called.
}

