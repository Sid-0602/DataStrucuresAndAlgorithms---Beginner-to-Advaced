#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int i=10;
    int* p=&i;

    cout<<p<<endl;
    p++; //It does not add one bit to current address, but it points to next adress storage i.e skips 4 bytes.
    cout<<p<<endl;
    p++;
    cout<<p<<endl;
    p++;
    cout << p << endl;
    p++;
    cout << p << endl;
}