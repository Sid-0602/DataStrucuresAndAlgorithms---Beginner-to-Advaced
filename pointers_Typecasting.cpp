#include <stdio.h>
#include <iostream>
#include <io.h>
#include <string.h>
using namespace std;

int main()
{
    // implecit typecasting:
    cout << "*******implicit typecasting*****" << endl;
    int i = 65;
    char c = i;
    cout << c << endl;
    // explicit typecasting:
    cout << "*******Explicit typecasting*****" << endl;
    int *p = &i;
    char *pc = (char *)p;

    cout << *p << endl;
    // The char is printed and typecasted in this step itself.
    cout << *pc << endl;

    // This prints null value:
    cout << *(pc + 1) << endl;

    cout << "******Printing address of p and pc******* " << endl;

    cout << p << endl;
    cout << pc << endl;
}