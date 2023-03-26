#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        int j = 1;
        char start = 'A' + i - 1;
        while (j <= i)
        {
            char typecast = start + j - 1;
            cout << typecast;
            j++;
        }
        cout << endl;
        i++;
    }
}