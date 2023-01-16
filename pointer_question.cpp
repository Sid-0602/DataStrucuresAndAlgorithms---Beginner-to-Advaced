#include <iostream>
using namespace std;
int f(int x, int *py, int **ppz)
{
    int y, z;
    **ppz += 1;
    z = **ppz;
    cout << "Value of z is: " << z << endl;
    cout << "Value of c is: " << *ppz << endl;
    *py += 2;
    y = *py;
    cout << "Value of y is: " << y << endl;
    cout << "Value of c is: " << *py << endl;
    cout << "Value of z is: " << z << endl;

    x += 3;
    return x + y + z;
}

int main()
{
    int c, *b, **a;
    c = 4;
    b = &c;
    a = &b;
    cout << f(c, b, a);
    return 0;
}