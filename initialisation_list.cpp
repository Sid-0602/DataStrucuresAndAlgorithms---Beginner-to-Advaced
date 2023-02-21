#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Student{

    public:
        int age;
        const int roll_no;
        int &x; //reference variable of age
    
    //We use initialisation list to assign constant variables.

    Student(int r, int age) : roll_no(r), age(age) , x(this->age){
        //this is initialisation list for roll_no part.
    } 

    void display(){
        cout<<roll_no<<" and their age is: "<<age<<endl;
        cout<<"The value of x is: "<<x<<endl;
    }

};


int main(){

    Student s1(101,20);
    s1.display();
    Student s2(102,21);
    s2.display();

    
}