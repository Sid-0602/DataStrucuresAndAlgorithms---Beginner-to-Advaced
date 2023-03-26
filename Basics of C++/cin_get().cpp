#include <iostream>
using namespace std;
int main()
{
    // cin vs cin.get()

    // cin ignores space and new lines..hence not suitable for the below code.

    char c, h;
    // cin>>c;
    c = cin.get(); // This is syntax of cin.get()

    int count = 0;
    while (c != '$')
    {
        count++;
        c = cin.get();
    }

    cout << count;
}

// Cin.get() counts spaces and next line as well.