#include <iostream>
using namespace std;

int findUnique(int *arr, int size)
{

    for (int i = 0; i < size; i++)
    {
        int count = 1;

        for (int j = 0; j < size; j++)
        {
            if (j != i)
            {
                if (arr[j] == arr[i])
                {
                    count++;
                }
            }
        }

        if (count == 1)
        {
            return arr[i];
        }
    }
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int size;
        cin >> size;
        int *input = new int[size];

        for (int i = 0; i < size; ++i)
        {
            cin >> input[i];
        }

        cout << findUnique(input, size) << endl;
    }

    return 0;
}