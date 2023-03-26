#include <iostream>
#include <cstring>
using namespace std;

int main()
{   
    char str[]="abcde";
    char* pstr = "abcde"; 

    char c[]="abc";
    cout<<c<<endl;

    char* p=&c[0];
    cout<<p<<endl;

    char a='a';
    char* p1=&a;

    cout<<a<<" "<<endl;
    cout<<p1<<endl; //it starts printing  until it finds a null pointer.
}
