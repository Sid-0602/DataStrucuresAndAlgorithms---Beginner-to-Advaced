#include <iostream>
#include <algorithm>
using namespace std;


class Polynomial {
      int *degCoeff;      // Name of your array (Don't change this)
      int capacity;

    public:
    

    //default const:

    Polynomial(){
        degCoeff = new int[5];
        capacity = 5;
        for(int i=0; i<capacity; i++){
            degCoeff[i]=0;
        }

    }

    Polynomial(int capacity){
        degCoeff = new int[capacity];
        this->capacity = capacity;
        for(int i=0; i<this->capacity;i++){
            degCoeff[i] = 0;
        }
    }


    //copy constructor: 

    Polynomial(Polynomial const &p){
        this->degCoeff = new int[p.capacity];
        for(int i=0;i<p.capacity;i++){
            this->degCoeff[i] = p.degCoeff[i];
        }
        this->capacity = p.capacity;
    }

    //copy-assignment constructor:

    void operator=(Polynomial const &p){
        this->degCoeff = new int[p.capacity];
        for(int i=0;i<p.capacity;i++){
            this->degCoeff[i] = p.degCoeff[i];
        }

        this->capacity = p.capacity;
    }



    void setCoefficient(int degree, int coefficient){
        if(degree == capacity){
            int *new_array = new int[2*capacity];
            for(int i=0;i<capacity;i++){
                new_array[i] = degCoeff[i];
            }
            for(int i=capacity;i<2*capacity;i++){
                new_array[i]=0;
            }

            delete [] degCoeff;
            degCoeff = new_array;
            capacity *=2;
        }

        degCoeff[degree] = coefficient;
    }

    void print(){
        for(int i=0;i<capacity;i++){
            cout<<degCoeff[i]<<'x'<<i<<" ";
        }
    }

    Polynomial operator+(Polynomial const &p){
        int *sum = new int[10];
    }

    int *getdegCoeff(){
            return degCoeff;
    }
    
    Polynomial operator+(Polynomial const & p) const{
        int maxCap = (this -> capacity > p.capacity) ? (this -> capacity) : (p.capacity);
        Polynomial newP(maxCap);
        for (int i = 0; i < maxCap; i++){
            if (i < this -> capacity && i < p.capacity){
            newP.degCoeff[i] = this -> degCoeff[i] + p.degCoeff[i];
            }
            else if (i < this -> capacity){
                newP.degCoeff[i] = this -> degCoeff[i];
            }
            else{
                newP.degCoeff[i] = p.degCoeff[i];
            }
        }
        return newP;
    }
      

    Polynomial operator-(Polynomial const & p) const{
             int maxCap = (this -> capacity > p.capacity) ? (this -> capacity) : (p.capacity);
        Polynomial newP(maxCap);
        for (int i = 0; i < maxCap; i++){
            if (i < this -> capacity && i < p.capacity){
            newP.degCoeff[i] = this -> degCoeff[i] - p.degCoeff[i];
            }
            else if (i < this -> capacity){
                newP.degCoeff[i] = this -> degCoeff[i];
            }
            else{
                newP.degCoeff[i] = -1 * p.degCoeff[i];
            }
        }
        return newP;
    }

    Polynomial operator*(Polynomial const & p) const{
        int newCap = this -> capacity + p.capacity;
        Polynomial newP(newCap);
        for (int i = 0; i < this -> capacity; i++){
            for (int j = 0; j < p.capacity; j++){
                newP.degCoeff[i + j] += this -> degCoeff[i] * p.degCoeff[j];
            }
        }
        return newP;
    }


    
};

int main()
{
    int count1,count2,choice;
    cin >> count1;
    
    int *degree1 = new int[count1];
    int *coeff1 = new int[count1];
    
    for(int i=0;i < count1; i++) {
        cin >> degree1[i];
    }
    
    for(int i=0;i < count1; i++) {
        cin >> coeff1[i];
    }
    
    Polynomial first;
    for(int i = 0; i < count1; i++){
        first.setCoefficient(degree1[i],coeff1[i]);
    }
    
    cin >> count2;
    
    int *degree2 = new int[count2];
    int *coeff2 = new int[count2];
    
    for(int i=0;i < count2; i++) {
        cin >> degree2[i];
    }
    
    for(int i=0;i < count2; i++) {
        cin >> coeff2[i];
    }
    
    Polynomial second;
    for(int i = 0; i < count2; i++){
        second.setCoefficient(degree2[i],coeff2[i]);
    }
    
    cin >> choice;
    
    Polynomial result;
    switch(choice){
            // Add
        case 1:
            result = first + second;
            result.print();
            break;
            // Subtract
        case 2 :
            result = first - second;
            result.print();
            break;
            // Multiply
        case 3 :
            result = first * second;
            result.print();
            break;
            
        case 4 : // Copy constructor
        {
            Polynomial third(first);
            if(third.degCoeff == first.degCoeff) {
                cout << "false" << endl;
            }
            else {
                cout << "true" << endl;
            }
            break;
        }
            
        case 5 : // Copy assignment operator
        {
            Polynomial fourth(first);
            if(fourth.degCoeff == first.degCoeff) {
                cout << "false" << endl;
            }
            else {
                cout << "true" << endl;
            }
            break;
        }
            
    }
    
    return 0;