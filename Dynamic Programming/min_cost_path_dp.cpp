#include <bits/stdc++.h>
using namespace std;


int minCostPathHelper(int **input, int m, int n, int **output){

    //fill the last cell i.e destination :

    output[m-1][n-1] = input[m-1][n-1];

    //fill the last row(right->left) and column(bottom->up): 
    for(int i=m-2;i>=0;i--){
        output[i][n-1] = input[i][n-1] + input[i+1][n-1];
    }

    for(int j=n-2;j>=0;j--){
        output[m-1][j] = input[m-1][j] + input[m-1][j+1]; 
    }

    //fill the remaining cell: 
    for(int i=m-2;i>=0;i--){
        for(int j=n-2;j>=0;j--){
            output[i][j] = min(output[i][j+1],min(output[i+1][j],output[i+1][j+1])) + input[i][j]; //add the cell value with the value taken as minimum. 
        }
    }

    return output[0][0];
}
int minCostPath(int **input, int m, int n){

    int **output = new int*[n];
    for (int i = 0; i < n; i++)
	{
		output[i] = new int[m];
	}

    //initialise the output matrix with -1. 
    for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			output[i][j]=-1; 
		}
	}

    return minCostPathHelper(input,m,n,output); 
}


int main(){
    int **arr, n, m;
	cin >> n >> m;
	arr = new int *[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = new int[m];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
	cout << minCostPath(arr, n, m) << endl;
}