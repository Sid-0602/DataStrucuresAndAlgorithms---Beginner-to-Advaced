#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int i=10;
    int* p = &i; //initialise the pointer
    cout<< " Pointer is: "<< p <<endl; //prints addresses
    cout<< " Value stored in pointer: "<<*p<<endl; //Prints the value.
    cout<<"Size of pointer in Bytes:  "<<sizeof(p)<<endl;
    i++;
    cout<<"After change value of i is: " << i <<", "<< *p<<endl;
    
    //Changes in i values can be changed by both ways: 
    i++;
    *p =13 ;
    cout<<"Final value of i is: "<<i<<endl;

    float f= 2.0;
    float *pf= &f;

    int* q=0; //initialise with null pointer for safe side.
    cout<<"Value stored in q (garbage) : "<<q<<endl;
    cout<<*q<<endl;



}