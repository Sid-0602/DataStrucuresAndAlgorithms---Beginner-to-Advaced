#include<iostream>
using namespace std;

void sumArray(int arr[], int n)
{
    int sum = 0;

    cout << "Function: " << sizeof(arr) << endl; // it is size of address of arr[0] and not whole array is taken.
    for (int j = 0; j < n; j++)
    {
        sum = sum + arr[j];
    }

    cout << "Sum of array elements are: " << sum;
}

int main()
{

    int n;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Main : " << sizeof(arr) << endl; // size of complete array.
    sumArray(arr, n);

    return 0;
}