/*

An integer matrix of size (M x N) has been given. Find out the minimum cost to reach from the cell (0, 0) to (M - 1, N - 1).
From a cell (i, j), you can move in three directions:
1. ((i + 1),  j) which is, "down"
2. (i, (j + 1)) which is, "to the right"
3. ((i+1), (j+1)) which is, "to the diagonal"
The cost of a path is defined as the sum of each cell's values through which the route passes.

*/

#include <bits/stdc++.h>
using namespace std;

int  minCostPath_helper(int **input, int m, int n, int i, int j){

    //base case: 
    if(i==m-1 && j==n-1){
        return input[i][j];
    }

    //edge conditions: 
    if(i>=m || j>=n){
        return INT_MAX;
    }
    //recursive calls: 
    int x = minCostPath_helper(input,m,n,i,j+1);
    int y = minCostPath_helper(input,m,n,i+1,j+1);
    int z = minCostPath_helper(input,m,n,i+1,j);

    //small calculations: 
    int ans = min(x,min(y,z)) + input[i][j];
    return ans;

}

int minCostPath(int **input, int m, int n)
{
	//Write your code here
    return minCostPath_helper(input,m,n,0,0);
}

int main()
{
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