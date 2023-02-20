#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Student{

    int age;
    char*name;

    public:

    Student(int age, char *name){
        this->age = age;

        this-> name = name; //this is shallow copy of name array.
    }
    
    //function to create deep copy: 
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
    names1[3] = 'e';
    Student s2(23,names1);
    s2.display();

    s1.display();
    /*this will show the name 'e' as s1 and s2 points 
     to same address of array. */




    
}