#include <iostream>
using namespace std;


void findLargest(int **input, int nRows, int mCols)
{
    // Write your code here
    int rowsum, colsum;
    int rowarr[nRows];
    int colarr[mCols];

    //This is sum and storing of sum of row :

    for(int i=0; i<nRows ; i++){
        rowsum = 0;
        for(int j=0; j<mCols; j++){
            rowsum = rowsum + input[i][j];
        }
        rowarr[i] = rowsum;
    }
    
    cout<<"*************This is array of sum of rows************"<<endl;
    for(int j=0; j<nRows; j++){
        cout<<rowarr[j]<<" ";
    }
    int row_max = -2147483648;
    int row_max_index = rowarr[0];
    for(int k=0; k<nRows; k++){
        if(rowarr[k]>row_max){
            row_max= rowarr[k];
            row_max_index=k;
        }
    }
    cout<<endl;
    cout<<"***ROW MAX ELEMENT IS: ******* "<<endl;
    cout<<row_max <<" --> "<<row_max_index<<endl;

    cout<< endl;

    //sum and storing of column array:

    for (int j = 0; j < mCols; j++)
    {
        colsum = 0;
        for (int i= 0; i < nRows; i++)
        {
            colsum = colsum + input[i][j];
        }
        colarr[j] = colsum;
    }
    
    cout << "*************This is array of sum of columns************" << endl;
    for(int x=0; x< mCols; x++){
         cout<<colarr[x]<<" ";
    }
    cout<<endl;

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
    cout << endl;
    cout << "***COLUMN MAX ELEMENT IS: ******* " << endl;
    cout << col_max << " --> " << col_max_index << endl;

    cout << endl;

    
    //sorting rows sum array: 
    for(int i=0; i< nRows-1; i++){
        int min=rowarr[i];
        int min_index=i;
        for(int j=i+1; j<nRows ; j++){
            if(rowarr[j]<min){
                min = rowarr[j];
                min_index = j;
            }
        }

        int temp=rowarr[i];
        rowarr[i]=rowarr[min_index];
        rowarr[min_index]=temp;

    }
    

    cout<<"*******The sorted row array is******"<<endl;
    for (int x = 0; x < nRows; x++)
    {
        cout << rowarr[x] << " ";
    }

    cout<<endl;

    //Sorting the column array: 

    for(int i=0; i<mCols-1; i++){
        int min= colarr[i];
        int min_index= i;
        for (int j = i+1; j < mCols; j++)
        {
            if (colarr[j] < min)
            {
                min = colarr[j];
                min_index = j;
            }
        }
        int temp = colarr[i];
        colarr[i] = colarr[min_index];
        colarr[min_index] = temp;
    }

    cout << "*******The sorted column array is******" << endl;
    for (int x = 0; x < mCols; x++)
    {
        cout << colarr[x] << " ";
    }
    cout<<endl;

  
   if(row_max > col_max){
         cout << "row : " << row_max_index <<" "<<row_max<<endl; 
   }
   else if(row_max == col_max){
        cout<<" EQUAL"<<endl;
   }

   else{
        cout<<"column: "<< col_max_index << " "<<col_max<<endl;
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