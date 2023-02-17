#include <iostream>
using namespace std;


//creation of class:
class Student {
    //Access modifiers:
    public:
        int rollNumber;
        int age;
    private:
        char name[100];
};


int main(){
    //Static allocation:
    Student s1;   //student acts as user defined datatype.
    //s1 acts as object.
    Student s2,s3,s4;

    //Dynamic Allocation: 
    Student * s5 = new Student;
    Student *s6 = new Student;
    

    //assigning values to object's properties:

    s1.age=20;
    s1.rollNumber = 101;
    s2.age = 21;
    s2.rollNumber = 102;
    s3.age = 20;
    s3.rollNumber = 103;
    s4.age = 21;
    s4.rollNumber = 104;

    //assigning for dynamic object:
    (*s5).age = 19;
    (*s5).rollNumber= 105;

    s6 -> age= 21;
    s6 -> rollNumber = 106; 

    cout<<"Details of Student s1 are: "<<s1.age<<" and "<<s1.rollNumber<<endl;
}