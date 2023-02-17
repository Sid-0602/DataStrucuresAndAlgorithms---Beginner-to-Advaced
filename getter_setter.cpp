#include <iostream>
using namespace std;

class Student{
    public:
        int roll_no;
    
    private: 
        int age;

    public:
    //void display can access private function as it is preset inside the same class.
    void display(){
        cout<<age<<" "<<roll_no<<endl;
    }


    //This function sets the age of objects. It access and modifies the private attribute 'age'
    void setAge(int a, int password ){
        if(password != 123){
            cout<<"****Password is wrong. Access denied!!****"<<endl;
            return;
        }
        if(age <= 0){
            return;
        }
        age = a;
    }
    // This get function access 
    int getAge(){
        return age;
    }
};

int main(){

     Student s1;   //student acts as user defined datatype.
    //s1 acts as object.
    Student s2,s3,s4;

    //Dynamic Allocation: 
    Student * s5 = new Student;
    Student *s6 = new Student;
    

    //assigning values to object's properties:


    s1.roll_no = 101;

    s2.roll_no = 102;

    s3.roll_no = 103;

    s4.roll_no = 104;

    //assigning for dynamic object:
    (*s5).roll_no= 105;
    s6 -> roll_no = 106; 

    //display function:

    cout<<"S1 age: "<<s1.getAge()<<endl; //Getter function fetches us the value of age.
    cout<<"S1 roll_number: "<<s1.roll_no<<endl;

    //Ask user the password: 
    int entered_password ; 
    cout<<"Enter the password to edit the age: ";
    cin>> entered_password;
    cout<<endl;

    //SetAge() function: 
    s1.setAge(20,entered_password);
    s2.setAge(21,entered_password);

    s5->setAge(22,entered_password);
    s6->setAge(19,entered_password);

    //display function after setting the age using setAge():

    cout<<"Age of s1 is: "<<s1.getAge()<<endl;
    cout<<"Age of s6 is: "<<s6->getAge()<<endl;
    cout<<"Age of s2 is: "<<s2.getAge()<<endl;
    


}