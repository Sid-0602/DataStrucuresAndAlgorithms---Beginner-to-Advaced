#include <iostream>
#include <cstring>
#include <string>
using namespace std;



int main()
{
    int arr[100][100], m, n;
    cout << "The rows will be: ";
    cin >> m;
    cout << endl;
    cout << "The coloumns will be: ";
    cin >> n;

    // Taking input:
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "***********ROW WISE************" << endl;
    // Printing array row wise:
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Printing array coloum -wise:
    cout << "***********COLUMN WISE************" << endl;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            cout << arr[i][j] << " ";
        }

        cout << endl;
    }
}
