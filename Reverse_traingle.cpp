#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int spaces, num;
    int i = 1;
    while (i <= n)
    {
        spaces = 1;
        int j = 1;
        while (spaces <= n - i)
        {
            cout << " ";
            spaces++;
        }
        num = 1;
        while (j <= i)
        {
            cout << j;
            j++;
        }

        cout << endl;
        i++;
    }
}
