#include <iostream>

using namespace std;

int power(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n == 1)
    {
        return x;
    }

    else
    {
        int reduced = power(x, n - 1);
        return (x * reduced);
    }
}

int main()
{
    int x, n;
    cin >> x >> n;

    cout << power(x, n) << endl;
}
