#include <iostream>
using namespace std;

void findLargest(int **input, int nRows, int mCols)
{
    // Write your code here
    int rowsum, colsum;
    int rowarr[nRows];
    int colarr[mCols];


    // This is sum and storing of sum of row :

    for (int i = 0; i < nRows; i++)
    {
        rowsum = 0;
        for (int j = 0; j < mCols; j++)
        {
            rowsum = rowsum + input[i][j];
        }
        rowarr[i] = rowsum;
    }

    int row_max = -2147483648;
    int row_max_index = rowarr[0];
    for (int k = 0; k < nRows; k++)
    {
        if (rowarr[k] > row_max)
        {
            row_max = rowarr[k];
            row_max_index = k;
        }
    }

    // sum and storing of column array:

    for (int j = 0; j < mCols; j++)
    {
        colsum = 0;
        for (int i = 0; i < nRows; i++)
        {
            colsum = colsum + input[i][j];
        }
        colarr[j] = colsum;
    }

    int col_max = -2147483648;
    int col_max_index = rowarr[0];
    for (int k = 0; k < mCols; k++)
    {
        if (colarr[k] > col_max)
        {
            col_max = colarr[k];
            col_max_index = k;
        }
    }

    if(row_max == 0 &&  col_max == 0 ){
        cout<<"row "<<'0'<<" "<<row_max<<endl;
    }
    else if (row_max > col_max)
    {
        cout << "row " << row_max_index << " " << row_max << endl;
    }
    else if (row_max < col_max)
    {
        cout << "column " << col_max_index << " " << col_max << endl;
    }
    else if(row_max == col_max){
        cout<< "row "<<row_max_index << " " << row_max <<endl;
    }
}


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int row, col;
        cin >> row >> col;

        int **input = new int *[row];
        for (int i = 0; i < row; i++)
        {
            input[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> input[i][j];
            }
        }

        findLargest(input, row, col);
        cout << endl;
    }
}
