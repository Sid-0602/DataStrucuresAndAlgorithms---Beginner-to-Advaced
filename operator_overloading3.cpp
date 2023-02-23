#include <iostream>
#include <algorithm>
using namespace std;

// increment - post and pre-increment:
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
            int j = std::min(this->num, this-> denom);
            for(int i=1;i<=j;j++){
                if(this->num % i ==0 && this->denom % i ==0){
                    gcd=i;
                }
            }

            this->num = (this->num)/gcd;
            this->denom = (this->denom)/gcd;

        }

        //Operator overloading for addition of two fractional classes:
        Fraction add(Fraction const &f2){

            int lcm = denom * f2.denom;
            int x = lcm/denom ;
            int y = lcm /f2.denom;

            int numerator = (x*num) + (y*f2.denom);
            Fraction fnew(numerator,lcm);
            fnew.simplify();

            return fnew;

        }

        Fraction operator+(Fraction const &f2){

            int lcm = denom * f2.denom;
            int x = lcm/denom ;
            int y = lcm /f2.denom;

            int numerator = (x*num) + (y*f2.denom);
            Fraction fnew(numerator,lcm);
            fnew.simplify();

            return fnew;

        }
        Fraction multiply(Fraction const &f2){

            int x= (this-> num) * f2.num;
            int y = (this->denom) *f2.denom;

            Fraction fnew(x,y);
            fnew.simplify();
            return fnew;
        }

        Fraction operator*(Fraction const &f2){

            int x= (this-> num) * f2.num;
            int y = (this->denom) *f2.denom;

            Fraction fnew(x,y);
            fnew.simplify();
            return fnew;
        }

        bool operator==(Fraction const &f2){
            return (this->num == f2.num && this->denom == f2.denom);
        }

        //increment operator overloading: 
        
        //pre-increment:

        Fraction& operator++(){
            this->num = this->num + this->denom;
            simplify();

            return *this; //statement will return the content in this pointer.
        }


        //post-increment: 
        //To differentiate between post and pre, we write 'int' keyword inside argument of post.

        Fraction operator++(int){
            Fraction fnew (num,denom);

            this->num = this->num +this->denom;
            this->denom = this->denom;
            simplify();

            fnew.simplify();
            return fnew;

        }

        // += operator: 

        Fraction& operator+=(Fraction const &f2){
            int lcm = denom * f2.denom;
            int x = lcm/denom ; 
            int y = lcm/f2.denom;

            int numerator  = (x*num) + (y*f2.denom);

            this->num = numerator;
            this->denom = lcm;

            return *this;

        }
        


};


int main() {

    Fraction f1(1,2);
    Fraction f2(2,1);
    f1.print();

    //pre-increment operator: 
    Fraction f3 = ++f1; //unirary operator ( ++ )
    Fraction f4 = ++(++f2);

    f1.print();
    f3.print();
    f4.print();  

    //post-increment operator: 
    
    Fraction f5= f1++;
    f5.print();
    f1.print();  

    //+= operator: 

    Fraction f6= f1+=f2;
    f1.print();
    f2.print();
    f6.print();


}