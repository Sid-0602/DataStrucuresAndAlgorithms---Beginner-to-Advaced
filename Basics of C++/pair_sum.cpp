#include <iostream>
using namespace std;

int pairSum(int *input, int size, int x)
{
    // Write your code here
    int count = 0;
    if (size == 0)
    {
        return 0;
    }

    else
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if (i != j)
                {
                    if (input[i] + input[j] == x)
                    {
                        count++;
                    }
                }
            }
        }

        int distinct_count = (count) / 2;
        if (count != 0)
        {
            return distinct_count;
        }

        else if (count == 0)
        {
            return 0;
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
        int x;

        cin >> size;
        int *input = new int[size];

        for (int i = 0; i < size; i++)
        {
            cin >> input[i];
        }

        cin >> x;

        cout << pairSum(input, size, x) << endl;

        delete[] input;
    }

    return 0;
}