#include <iostream> 
using namespace std;

//DIAMOND PROBLEM IN INHERITANCE: 
 
class Vehicle{

    public:
    string color;

    Vehicle(){
        cout<<"This is default VEHICLE constructor"<<endl;
    }

    //this is pure virtual class
    virtual void print() = 0;
};

class Car: public Vehicle{

    public: 
    Car(){
        cout<<"This is default CAR constructor"<<endl;
    }
   
};

int main(){

    Vehicle v; //cannot make object out of abstract class.


}
