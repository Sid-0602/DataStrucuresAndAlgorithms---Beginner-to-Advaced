#include <iostream>
using namespace std;

void insertionSort(int *input, int size)
{
    int i, key, j;
    int n = size;
    for (i = 1; i < n; i++)
    {
        key = input[i];
        j = i - 1;
        while (j >= 0 && input[j] > key)
        {
            input[j + 1] = input[j];
            j = j - 1;
        }
        input[j + 1] = key;
    }
}

int main()
{
    int n;
    cin >> n;

    int input[100];

    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    insertionSort(input, n);

    for (int j = 0; j < n; j++)
    {
        cout << input[j] << " ";
    }
}