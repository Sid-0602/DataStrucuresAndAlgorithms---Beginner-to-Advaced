#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i = 1;
    int spaces, num;
    while (i <= n)
    {
        spaces = 1;
        while (spaces <= (n - i))
        {
            cout << " ";
            spaces++;
        }

        int j = 1;
        while (j <= i)
        {
            cout <<j;
            j++;
        }

        j = (i - 1);
        while (j >= 1)
        {
            cout <<j;
            j--;
        }

        cout << endl;
        i++;
    }
}