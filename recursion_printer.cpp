#include <iostream>
using namespace std;

void print(int n)
{
    // write your code here
    if (n == 1)
    {
        cout << '1' << " ";
    }
    else
    {
        print(n - 1); // first function call happens and then printing happens at the return time.
        cout << n << " ";
    }
}

int main()
{
    int n;
    cin >> n;

    print(n);
}
