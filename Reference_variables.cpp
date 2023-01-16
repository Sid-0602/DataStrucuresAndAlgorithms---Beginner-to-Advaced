#include <iostream>
using namespace std;

void incerement(int n){
    n++;
    cout<<"Value of function i value passed in function: "<<n<<endl;
}

void incrementbyReferecing(int& n){
    n++;
    cout << "Value of function i value passed in Referencing function: " << n << endl;
}

int& fun(int n){
    int a=n;
    return a;
}

int main(){
    int i=10;
    int k=100; //This is for normal assign operation. Not referencing.
    int &j=i; //This is for referencing!!
    int* p=&i;
    int* p1=&j;
    int* p2=&k;


    
    //this checks the addresses of both variables:
    if(p==p1){
        cout<<"THEY HAVE SAME ADDRESSES!!.THIS IS REFRENCING!!"<<endl;
        cout << "The address of i is: " << p << endl;
        cout << "The address of j is: " << p1 << endl;
    }
    else{
        cout<<"THEY HAVE DIFFERENT ADDRESSES!!"<<endl;
        cout << "The address of i is: " << p << endl;
        cout << "The address of j is: " << p1 << endl;
    }

    i++; //updation of i 
    cout << "The Value of i is: " << *p << endl;
    cout << "The Value of j is: " << *p1 << endl;

    j=k; //changing of j to see if it affects value of i:
    cout<<"Value of i is: "<<i<<endl;

    incerement(i);
    cout<< "Value of main memory i before referencing:  " << i << endl;
    incrementbyReferecing(i);
    cout << "Value of main memory i after referencing:  " << i << endl;

    cout<<"**RECIEVE BY REFERENCE**"<<endl;
    int& m=fun(i);

    cout<<"Value of m as recieved by reference: "<<m<<endl;


}