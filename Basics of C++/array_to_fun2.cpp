#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

void increment(int a, int arr[], int n, int i)
{
    a++;
    arr[i]++;
}

void reversearr(int arr[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        // reversing the array:
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        // increment i and decrement j:
        i++;
        j--;
    }
}
int main()
{
    cout << "ARRAY TO FUNCTION OPERATIONS" << endl;

    int i, a = 3;
    // cin >> i;
    int arr[10] = {1, 2, 3};
    // increment(a,arr,10,i);

    // cout<<"a : "<<a<<endl;
    // cout<<"arr[i]: "<<arr[i]<<endl;

    reversearr(arr, 3);
    printArray(arr, 3);
}
