#include <iostream>
#include <climits>
using namespace std;

void Leaders(int *arr, int len)
{
    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Print your output exactly in the same format as shown.
     * Don't print any extra line.
     */

    for (int i = 0; i < len; i++)
    {   int j;
        for (j = i + 1; j < len; j++)
        {
            if (arr[i] < arr[j])
                break;
        }
        if (j == len)
            cout << arr[i] << " ";
    }
}

int main()
{
    int len;
    cin >> len;
    int *arr = new int[len + 1];

    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }
    Leaders(arr, len);
}
