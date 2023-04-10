#include <iostream>
using namespace std;

int main()
{

    //"Increments (post and pre)"
    cout << "Increments (post and pre)" << endl;

    int a = 5;
    cout << (++a) << endl; // value of 5 becomes 5.
    a = 5;                 // reset value of a=5.
    cout << (a++) << endl; // print first and then increment.
    cout << a << endl;

    // Decrement (post and pre)
    cout << "Decrement(post and pre)" << endl;

    int b = 10;
    cout << --b << endl; // value becomes 9 and then gets printed.
    b = 10;
    cout << b-- << endl; // value becomes 9 after 10 is printed.
    cout << b << endl;

    cout << "***************" << endl;

    // Multiple and combination Increments/Decrements:

    cout << (a += 3) << endl;
    cout << (b = b - 3) << endl;

    return 0;
}
