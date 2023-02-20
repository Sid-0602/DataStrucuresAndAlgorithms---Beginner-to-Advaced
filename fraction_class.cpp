#include <iostream>
using namespace std;

class Fraction{

    private:
        int num, denom;

    public:
        Fraction(int num, int denom){
            this-> num = num;
            this-> denom = denom;
        }

        void print(){
            cout<< this -> num <<" / "<< this->denom<<endl;
        }

        void simplify(){
            int gcd = 1;
            int j = min(this->num, this-> denom);
            for(int i=1;i<=j;j++){
                if(this->num % i ==0 && this->denom % i ==0){
                    gcd=i;
                }
            }

            this->num = (this->num)/gcd;
            this->denom = (this->denom)/gcd;

        }


        //Storing result of (f1+f2) in f1.
        void add(Fraction &f2){ //passing by reference
            int lcm = (this->denom) * (f2.denom);

            int x= lcm/(this->denom);
            int y= lcm/(f2.denom);

            int ans_num = (x*(this->num)) + (y*f2.num);

            this->num = ans_num; //storing result of add() in numerator of f1.
            denom = lcm;  //storing result of add() in denominator of f1.

            //calling simplify function:
            simplify();
        } 
        

};


int main() {

    Fraction f1(10,2);
    Fraction f2(15,4);
    f1.add(f2);
    f1.print();
    f2.print();
    
    

}