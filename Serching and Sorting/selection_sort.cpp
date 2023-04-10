#include <iostream>
using namespace std;

void selectionsort(int input[], int n)
{

    for (int j = 0; j < n - 1; j++)
    { // represents the round we working on currently.
        // finding minimun element:
        int min = input[j];
        int min_index = j;
        for (int i = j + 1; i < n; i++) // comparsions starts from j+1
        {
            if (input[i] < min)
            {
                min = input[i];
                min_index = i;
            }
        }

        // swap element:

        int temp = input[j];
        input[j] = input[min_index];
        input[min_index] = temp;
    }
}
int main()
{
    int input[] = {3, 1, 2, 5, 3, 7};
    selectionsort(input, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << input[i] << " ";
    }

    cout << endl;
}