#include <iostream> 
using namespace std;


class Teacher{
    public:
        string name;
        int age;
    void print(){
        cout<<"Name (T)"<<name<<endl;
        cout<<"Age (T)"<<age<<endl;
    }
};

class Student{

    public: 
    
    void print(){
        cout<<"Student"<<endl;
    }

};

class TA : public Teacher , public Student{
    public: 
    void print(){
        cout<<"TA Class";
    }
};

int main(){
    TA a;

    //This gives ambiguity a.print();

    //Use Scope resolution :
    a.Student :: print();
    a.print(); //TA class has it's own print function now. 
    a.name = "abcd";
}