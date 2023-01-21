#include <iostream>
using namespace std;

bool is_a_sort2(int a[], int s)
{
    if (s == 0 || s == 1)
    {
        return true;
    }

    bool isSmallerSorted2 = is_a_sort2(a + 1, s - 1);
    if (!isSmallerSorted2)
    {
        return false;
    }
    if (a[0] > a[1])
    {
        return false;
    }
    else
    {
        return true;
    }
}

bool is_a_sort(int a[], int s)
{
    if (s == 0 || s == 1)
    {
        return true;
    }

    if (a[0] > a[1])
    {
        return false; // checking first 2 elements of array passed.
    }

    bool isSmallerSorted = is_a_sort(a + 1, s - 1);
    if (isSmallerSorted)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int s = 5;
    int a[10] = {2, 3, 4, -5, 6};

    cout << is_a_sort(a, s);
}