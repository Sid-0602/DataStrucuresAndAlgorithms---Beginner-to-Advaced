#include <iostream>
using namespace std;

int main(){
    int a[5];
    cout<<a<<endl;
    cout<<&a[0]<<endl;
    

    for(int i=0; i<5;i++){
        cin>>a[i];
    }

    cout<<"Enter a index for deferencing: "<<endl;
    int x;
    cin>>x;
    
    cout<< "The number at "<< x <<" index is: " <<*(a+x) <<endl;

    int* p = &a[0];

    cout<< a <<endl;
    cout<<p<<endl;
    cout<< "Pointer's address: "<<&p<<endl;
    cout<<"Array address: "<<&a<<endl;
    cout<<"Size of pointer: "<<sizeof(p)<<endl;
    cout<<"Size of array: "<<sizeof(a)<<endl;

    p=p+1;
    cout<<p<<endl;

    // a=a+1; 
    //cannot reassign array .




}