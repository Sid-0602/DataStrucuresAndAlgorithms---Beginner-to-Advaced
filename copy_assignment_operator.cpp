#include <iostream>
using namespace std;


class Student {

    public:
        int roll_no;
    private: 
        int age;
    
    public:

        Student(int roll_no){
            cout<<"Constructor 2 called !!"<<endl;
            this-> roll_no = roll_no;
        }

        Student(int a, int r){
            cout<<"Constructor 3 called!!"<<endl;
            this -> age = a;
            this -> roll_no = r;
        }

        void display(){
            cout<<age<<" "<<roll_no<<endl;
        }

};


int main() {

    Student s1(10,101);
    Student s2(20,201);

    Student *s3 = new Student(30,301);

    s2=s1;
    *s3 = s1;
    s2 = *s3;
    
    

}