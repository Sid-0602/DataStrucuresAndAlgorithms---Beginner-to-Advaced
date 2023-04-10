#include <iostream>
#include <cstring>
using namespace std;

void print(int* p){
    cout<<*p<<endl;
}

void incrementPointer(int *p){
    p++;
}

//This is pass by value. Address is getting pass by value.
void icncrementP(int *p){
    (*p)++;
}

int sum(int *a, int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans+a[i];
    }
    return ans;
}

int main(){

    int i=10;
    int* p=&i;
    print(p);

    cout<<p<<endl;
    incrementPointer(p);
    cout<<p<<endl;

    cout<< *p <<endl;
    icncrementP(p);
    cout<<*p<<endl;

    int a[10];
    cout<<sum(a,10)<<endl;
    //we can also pass part of an array inside.

    cout<<sum(a+3,7)<<endl;

}