#include <iostream>
using namespace std;

class ComplexNumbers {
    // Complete this class

    private: 
    int real;
    int imag;

    public: 
    //parameterized constructor:
    ComplexNumbers(int real, int imag){
        this-> real = real;
        this-> imag = imag;
    }

    void print(){
        cout<<this->real <<"+"<<this->imag<<"i"<<endl;
    }

    void plus(ComplexNumbers c2){
        int real_part = (this->real) + c2.real;
        int imag_part = (this->imag) + c2.imag;

        this->real = real_part;
        this-> imag = imag_part;
    }

    void multiply(ComplexNumbers c2){
        int real_part = ((this->real)*(c2.real)) - ((this->imag)*(c2.imag));
        int imag_part = ((this->imag)*(c2.real)) + ((this->real)*(c2.imag));

        this->real = real_part;
        this-> imag = imag_part;
    }
};


int main() {
    int real1, imaginary1, real2, imaginary2;
    
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    
    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);
    
    int choice;
    cin >> choice;
    
    if(choice == 1) {
        c1.plus(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    }
    else {
        return 0;
    }   
}