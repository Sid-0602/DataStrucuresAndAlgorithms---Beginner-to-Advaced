#include <iostream>
#include <cstring>
using namespace std;

void increment1(int **p){
    p=p+1;
}

void increment2(int **p){
    *p++;
}

void increment3(int **p){
    **p++;
}

int main(){
    int a=10;
    int *p = &a;
    int **p1 = &p;

    
    cout<<"Address of a is: "<<p<<endl;
    cout<<"Address of p is: "<<*p1<<endl;
    cout<<"Address of p1 is: "<<p1<<endl;

    //**p1 is defrencing the double pointer 2 times, hence reaching a.
    cout<<"Value in a using double pointer: "<<**p1<<endl;

    cout<<p<<endl;
    increment3(p1);
    cout<<p<<endl;
    



    
}