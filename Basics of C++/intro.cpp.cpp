#include <iostream>
using namespace std;

int main()
{   //int datatypes: 
    int a = 10;
    int b = 20;
    int c = a + b;

    //char datatype:
    char d='x';
    //float datatype:
    float f=1.23;
    //boolean values:
    bool t=true;

    cout << "addition of a and b is: " << c<<endl;
    cout<<"Charactar is: "<<d<<endl;
    cout<<"Float value is: "<<f<<endl;
    cout<<"Bool value is: "<<t<<endl;

    //check size of datatypes and return it's size:
    int size= sizeof(f);
    cout<<"Size of float is: "<<size<<endl;

    //typecasting:
    int x, y;
    x = 103220;
    y=x;
    cout<<y<<endl;
    }