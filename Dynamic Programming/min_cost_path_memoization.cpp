#include <bits/stdc++.h>
using namespace std;

int minCostPathHelper(int **input, int m, int n, int i,int j,int **output){
    //base case:    
    if(i==m-1 && j==n-1){
        return input[i][j];
    }

    //edge case: 
    if(i>=m || j>=n){
        return INT_MAX;
    }

    //check if ans is already exists:
    if(output[i][j]!=-1){
        return output[i][j];
    }

    //recursive call: 
    int x = minCostPathHelper(input,m,n,i,j+1,output);
    int y = minCostPathHelper(input,m,n,i+1,j+1,output);
    int z = minCostPathHelper(input,m,n,i+1,j,output);

    //small calculation and save ans in output: 
    int ans = min(x,min(y,z)) + input[i][j];
    output[i][j] = ans;

    return ans; 
    
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

    return minCostPathHelper(input,m,n,0,0,output); 
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