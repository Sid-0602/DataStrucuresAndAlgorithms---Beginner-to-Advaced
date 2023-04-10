#include <iostream>
#include <string>
#include <cstring>
using namespace std;


class Student{

    private:    
    //this value is special for whole class.
        static int total_student; //total_students number of students present.
    public:
        int roll_no;
        int age;
        void print(){
            cout<<roll_no<<" "<<age<<endl;
        }

        Student(){
            total_student++; //for every constructor call, increment the total_student counter by 1.
        }

        int getroll_no(){
            return roll_no;
        }


        //static function to return static member of the class.
        static int getTotalStudents(){
            return total_student;
        }
    
};

int Student :: total_student = 0;  //initialise static members outside of class.

int main(){
    Student s1;
    s1.age =20;
    s1.roll_no=101;

    s1.print();


    Student s2,s3,s4,s5;

    //cout<<"Total Objects finally created: " << Student :: total_student<<endl;
    cout <<Student :: getTotalStudents()<<endl;
    cout<<"!! STATIC FUNCTIONS DO NOT HAVE ACCESS TO [ thiS ] KEYWORD !!"<<endl;

}



