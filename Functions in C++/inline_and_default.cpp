#include <iostream>
using namespace std;

// inline function:
inline int max(int a, int b)
{
    return (a > b) ? a : b;
}

int sum(int arr[], int size, int start = 0)
{
    int ans = 0;
    for (int i = start; i < size; i++)
    {
        ans = ans + arr[i];
    }

    return ans;
}

int sum2(int a, int b, int c = 0, int d = 0)
{
    return (a + b + c + d);
}

int main()
{
    int a, b;
    cin >> a >> b;

    int c = (a > b) ? a : b;
    cout << c << endl;

    int x, y;
    x = 10;
    y = 20;
    // using inline function:
    cout << max(x, y) << endl;

    // array sum and default argument:
    int arr[20];
    for (int i = 0; i < 20; i++)
    {
        arr[i] = i * i;
    }

    cout << sum(arr, 20) << endl;

    int m, n, o, p;
    m = n = 20;
    o = 12;
    p = -3;

    cout << "Sum2 is: " << sum2(m, n, o, p) << endl;
    // defaulting the arguments p and o:
    cout << "Sum2 without o and p : " << sum2(m, n) << endl;
}