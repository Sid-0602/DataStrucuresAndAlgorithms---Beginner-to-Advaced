#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Student{
    public:
        int age;
        char*name;

    public:

    //User-defined copy constructor: 
    //We need to pass by reference to avoid calling of copy constructor in argument: 
    Student(Student const &s){
        this->age = age;

        this->name = new char[strlen(s.name) + 1];
        strcpy(this->name, s.name);
    }

    Student(int age , char *name){
        this->age =age;
        this->name = new char[strlen(name)+1]; //+1 is for '\0' at end os string.
        strcpy(this->name,name); //string copy function.
    }

    

    void display(){
        cout<<"Name: "<<name << " and " << "age: "<<age<<endl;
    }

};

int main(){

    char names1[] = "abcd";
    Student s1(20,names1);
    s1.display();

    Student s2(s1); //inbuilt copy constructor always does shallow copy.

    s2.name[0] = 'x';
    s1.display();
    s2.display();




    
}