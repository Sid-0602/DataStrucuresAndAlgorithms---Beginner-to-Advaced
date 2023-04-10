#include <iostream>
#include <algorithm>
using namespace std;

void sortZeroesAndOne(int *input, int size)
{ // Find min element:
    for (int i = 0; i < size - 1; i++)
    {
        int min = input[i];
        int min_index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (input[j] < min)
            {
                min = input[j];
                min_index = j;
            }
        }
        // swap
        int temp = input[i];
        input[i] = input[min_index];
        input[min_index] = temp;
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

        sortZeroesAndOne(input, size);

        for (int i = 0; i < size; ++i)
        {
            cout << input[i] << " ";
        }

        cout << endl;
        delete[] input;
    }

    return 0;
}