#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, l, c;
        cin >> n;
        int *A = new int[n];
        int *B = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> B[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (A[i] == A[j])
                {
                    if (B[i] > B[j])
                    {
                        cout << i << endl;
                    }
                    else
                    {
                        cout << j << endl;
                    }
                }
                else
                {
                    if (A[i] > A[j])
                    {
                        cout << i << endl;
                    }
                    else
                    {
                        cout << j << endl;
                    }
                }
            }
        }
    }
    return 0;
}
