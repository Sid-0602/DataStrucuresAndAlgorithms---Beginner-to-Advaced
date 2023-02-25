#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int max = INT_MIN;

    int input[100]; // create array of constant length.

    // taking input of array from user.
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    cout << "Elements in the array are: "
         << " ";
    // printing values of array.
    for (int j = 0; j < n; j++)
    {
        cout << input[j] << " ";
    }
    cout << endl;

    // largest element from array:
    for (int k = 0; k < n; k++)
    {
        if (input[k] > max)
        {
            max = input[k];
        }
    }

    cout << "Maximum element is: " << max << endl;

    return 0;
}