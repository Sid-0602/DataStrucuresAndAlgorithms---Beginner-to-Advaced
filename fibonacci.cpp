#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int t1 = 0, t2 = 1, next_term = 0;

    if (n == 1)
    {
        cout << 1;
    }
    if (n == 2)
    {
        cout << 1;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {

            next_term = t1 + t2;
            t1 = t2;
            t2 = next_term;
        }
    }

    cout << t1;
}