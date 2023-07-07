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
};

class Car : public Vehicle{
    //private is not accessible. Protected and Public are inherited as the same types.
    // numTyres and color are inherited.
    public:
        int numGears;
    
    void print(){
        cout<<"No of tyres: "<<numTyres<<endl;
        cout<<"Color of car: "<<color<<endl;
        cout<<"Number of gears: "<<numGears<<endl;
    }
};

class Bus: protected Vehicle{
    public: 
    int numDoors;

    void print(){
        cout<<"No of typres: "<<numTyres<<endl; 
    }
};

class Train: private Vehicle{
    public:
    int boogies;

    void print(){
        cout<<"No of boogies: "<<boogies<<endl;

        //color, numTyres and maxspeed are private now.
    }
};

int main(){
    Vehicle V;
    V.color="Blue";
    // can't access these :
    // V.maxSpeed = 100;
    // V.numTyres = 4;

    Car C;
    C.color = "Black";
    C.numGears = 6;
   // can't use this property:  C.numTyres = 4;

   Bus b;
   b.numDoors = 2;
   //cant use this as it is protected now: b.color = "Yellow";

   Train t;
   t.boogies = 20;
   // this cannot be accessed as it private now: t.color = "blue";

}