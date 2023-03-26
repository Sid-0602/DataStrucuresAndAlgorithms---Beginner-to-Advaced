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
    s1.display();
    
    //COPY CONSTRUCTOR: 
    Student s2(s1);
    s2.display();
    Student *s3 = new Student(20,103);
    cout<<"s3 is";
    s3->display();

    Student s4(*s3);
    Student *s5 = new Student(*s3);
    Student *s6 = new Student(s1);

    s4.display();
    s5->display();
    s6->display();


}