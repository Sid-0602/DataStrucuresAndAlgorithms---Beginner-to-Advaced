#include <iostream> 
using namespace std;


class Bus{
    public:
    void print();
};

void test();

class Truck{
    private:
     int x;
    protected:
     int y;
    public:
     int z;
     friend void Bus :: print(); //this is friend function.
     friend void test();
};

void Bus :: print(){
    //accessing private and protected properties: 
    Truck t;
    t.x=10;
    t.y=20;
    cout<<t.x<<" "<<t.y<<endl;

}


void test(){
    // Access truck private:
    Truck t;
    t.x=50;
    t.y=60;
    cout<<t.x<<" "<<t.y<<endl;

}

int main(){

    Bus b;
    b.print();

    test();
}
