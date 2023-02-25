#include <iostream>
using namespace std;

int tripletSum(int *input, int size, int x)
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
                for (int k = 0; k < size; k++)
                {
                    if (i != j && j != k && k != i)
                    {
                        if (input[i] + input[j] + input[k] == x)
                        {
                            count++;
                            cout << input[i] << " " << input[j] << " " << input[k] << endl;
                        }
                    }
                }
            }
        }

        int distinct_count = (count) / 6;
        if (count != 0)
        {
            cout << "Total Count is: " << count << endl;
            cout << "Distinct Count is: " << endl;
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

        cout << tripletSum(input, size, x) << endl;

        delete[] input;
    }

    return 0;
}
