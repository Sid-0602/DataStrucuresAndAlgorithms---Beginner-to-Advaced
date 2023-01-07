#include <iostream>
using namespace std;

void wavePrint(int **input, int nRows, int mCols)
{
    // Write your code here
    /* for(int i=0; i<nRows; i++){
        for(int j=0; j<mCols; j++){
            cout<<input[i][j]<< " ("<<i <<","<<j<<") " <<endl;
        }
        cout<<endl;
    }
    */

    for(int c=0; c<mCols; c++){
        if(c%2 == 0){
            for(int r=0; r<nRows; r++){
                cout  << input[r][c] << " ";
            }
        }
        else if(c%2 !=0 ){
            for(int r=nRows-1; r>=0; r--){
                cout <<  input[r][c] << " "; 
            }
        }
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
        wavePrint(input, row, col);
        cout << endl;
    }
}