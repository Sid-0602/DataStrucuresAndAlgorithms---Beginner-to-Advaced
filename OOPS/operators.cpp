#include <iostream>
using namespace std;

int main(){
    int f;
    cout<<"Enter Fah value"<<endl;
    cin>>f;
    float c= (5.0/9)*(f-32);
    cout<<"Celcius value is: "<<c<<endl;
    int a,b;
    cout<<"Enter a and b: "<<endl;
    cin>>a>>b;


    bool isEqual = (a==b);            //isEqual = (this checks true/false)
    bool isAGreater = (a>b);
    bool isALess = (a<b);
    cout<<"Are they equal : "<<isEqual<<endl;
    cout<<"Is A greater : "<<isAGreater<<endl;
    cout<<"Is A less : "<<isALess<<endl;
}