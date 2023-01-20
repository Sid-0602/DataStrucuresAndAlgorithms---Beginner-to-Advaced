#include <iostream>
using namespace std;

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }

    else
    {
        int smallOutput1 = fib(n - 1);
        int smallOutput2 = fib(n - 2);

        return (smallOutput1 + smallOutput2);
    }
}

int main()
{
    int a;
    cin >> a;
    cout << fib(a);
}
