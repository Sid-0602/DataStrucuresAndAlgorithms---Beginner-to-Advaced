#include <iostream>
using namespace std;

int main()
{   int m,n;
    cout<<"Enter the rows and coloumns of the 2-d array: "<<endl;
    cin>>m>>n;
    int** p =new int*[m];
    for(int i=0; i<m;i++){
        p[i]=new int[n];
        for(int j=0; j<n;j++){
            cin>>p[i][j];
        }
    }

    //de-allocate the memeory:

    //Delete the row elements first and then the array of pointers.

    for(int i=0;i<m;i++){
        delete [] p[i]; //deleting respective row.
    }
    delete [] p;  //deleting the pointers array



     
    
}