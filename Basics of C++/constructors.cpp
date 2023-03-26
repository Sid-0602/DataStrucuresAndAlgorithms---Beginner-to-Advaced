#include <iostream>
using namespace std;

class Student{
    public:
        int roll_no;
    
    private: 
        int age;

    public:
    
     //This is default constructor:
    Student(){
        //no return type and no variable pass.
        cout<<"!! Constructor 1 called !!"<<endl;
    }
   

    //Constructor with arguments "PARAMETERIZED CONSTRUCTOR"
    //WHEN argument and variable in the class are same, we MUST use "this" .
    Student(int roll_no){
        cout<<"!! Constructor 2 is called !!"<<endl;
        this-> roll_no = roll_no;
    }

    //constructor with two argument values: 
    Student(int r, int a){
        cout<<"!! Constructor 3 is called !!"<<endl;
        cout<<"this: "<<this<<endl;
        this-> roll_no = r;
        this->age =a; 
    }
    
    //void display can access private function as it is preset inside the same class.
    void display(){
        cout<<age<<" "<<roll_no<<endl;
    }


    //This function sets the age of objects. It access and modifies the private attribute 'age'
    void setAge(int a, int password ){
        if(password != 123){
            cout<<"****Password is wrong. Default value of Constructor will be returned!!****"<<endl;
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

    Student s1;
    s1.display();

    Student s2;
    Student *s3 = new Student;
    s3->display();

    cout<<"Parameterized Constructor called!";
    Student s4(104);
    cout<<endl;


    s4.display();
    Student s5(20,105);
    cout<<"Two argument Constructor called!: - ";
    s5.display();
    cout<<endl;

    // "THIS"  keyword:
    Student s7(22,1107);
    cout<<"Address of s7 is: "<<&s7<<endl;
    s7.display();



}