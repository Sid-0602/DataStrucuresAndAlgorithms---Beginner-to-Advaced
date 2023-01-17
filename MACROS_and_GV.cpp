#include <iostream>
#define PI 3.1417 // it replaces PI with the value 3.1417 and does not require extra memory.
using namespace std;

int a; // this is global variable.

void fun1(int i)
{
    int a;
    a = i;
    a++;
    a = i;
}

void fun2(int i)
{
    int a;
    a = i;
    a--;
    a = i;
}

int main()
{
    int r, i;
    cin >> r;
    cout << "Area of circle is: " << PI * r * r << endl;
    cout << "Enter a number: " << endl;
    cin >> i;
    fun1(i);
}