#include<iostream>
using namespace std;

class Pair{
    int x;
    int y;

    public:
        void set(int x){
            this->x=x;
        }

        int get(){
            return x;
        }

        void setY(int y){
            this->y=y;
        }

        int getY(){
            return y;
        }
};

template <typename T> //this tells compiler that it is temporary data-type.
class PairTemplate{
    T x;
    T y;

    public:
        void set(T x){
            this->x=x;
        }

        T get(){
            return x;
        }

        void setY(T y){
            this->y=y;
        }

        T getY(){
            return y;
        }

};

//multiple typeames inside a class:

template <typename T, typename V> //this tells compiler that it is temporary data-type.

class PairtemplateM{
    T x;
    V y;

    public:
        void set(T x){
            this->x=x;
        }

        T get(){
            return x;
        }

        void setY(V y){
            this->y=y;
        }

        V getY(){
            return y;
        }

};


int main(){

    PairTemplate <int> p1;

    PairTemplate <double> p2; //replacing T with <double> datatype.

    p1.set(10);
    p1.setY(20);

    cout<<p1.get()<<" "<<p1.getY()<<endl;

    p2.set(100.23);
    p2.setY(23.233);

    cout<<p2.get()<<" "<<p2.getY()<<endl;

    PairtemplateM <int, double> p3;
    p3.set(20);
    p3.setY(22.3);

    cout<<p3.get()<<" "<<p3.getY()<<endl;
    
    PairtemplateM<PairtemplateM<int, int>, int> p4;
    PairtemplateM<int,int>p5;

    p5.set(10);
    p5.setY(22);

    p4.set(p5);
    p4.setY(20);

    cout<<"The class output is: "<<p4.get().get()<<" "<<p4.getY()<<endl;
    cout<<"The class output is: "<<p4.get().getY()<<" "<<p4.getY()<<endl;




   



}