#include <iostream>
using namespace std;

void bubblesort(int input[], int n)
{

    for (int j = 0; j < n - 1; j++)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (input[i] > input[i + 1])
            {
                int temp = input[i];
                input[i] = input[i + 1];
                input[i + 1] = temp;
            }
        }
    }
}

int main()
{
    int input[] = {3, 1, 2, 5, 0, 3, 7, -1};
    bubblesort(input, 8);
    for (int i = 0; i < 8; i++)
    {
        cout << input[i] << " ";
    }

    cout << endl;
}