#include <iostream>
using namespace std;

void printarray(int arr[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void sumofcolumn(int arr[100][100], int m, int n)
{
    int sum;
    for (int j = 0; j < n; j++)
    {
        sum = 0;
        for (int i = 0; i < m; i++)
        {
            sum = sum + arr[i][j];
        }
        cout << sum << " ";
    }
}

void sumofrows(int arr[100][100], int m, int n)
{
    int sum;
    for (int i = 0; i < m; i++)
    {
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << sum << " ";
    }
}

int main()
{
    int arr[100][100], m, n;
    cout << "ROWS: ";
    cin >> m;
    cout << endl;
    cout << "COLUMNS: ";
    cin >> n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "*****The array is*****" << endl;
    printarray(arr, m, n);

    cout << "****The sum of coloumns is**** " << endl;
    sumofcolumn(arr, m, n);
    cout << endl;

    cout << "***The sum of rows are*****" << endl;
    sumofrows(arr, m, n);
}