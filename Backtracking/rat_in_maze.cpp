#include<bits/stdc++.h>
using namespace std;
// The order for exploration:  Up, Down, Left, Right (UDLR)

void printSolution(int **solution, int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cout << solution[i][j] << " ";
    cout << endl;
}


void mazeHelp(int maze[][20],int n, int** solution, int x, int y){

	//base case:

	if(x==n-1 && y==n-1){
		solution[x][y]=1;
		printSolution(solution,n);
		solution[x][y]=0; //set this to 0 at end of path. 
		return; 
	}

	//these are constraints: 
	if(x>=n || x<0 || y>=n || y<0 || maze[x][y]==0 || solution[x][y]==1){
		return;
	}
	//include in path: (x,y)
	solution[x][y]=1;

	//recursive functions for U,D,L,R.
	mazeHelp(maze,n,solution,x-1,y);
	mazeHelp(maze,n,solution,x+1,y);
	mazeHelp(maze,n,solution,x,y-1);
	mazeHelp(maze,n,solution,x,y+1);

	solution[x][y]=0; //as the path is discovered, set this as 0. 
}


void ratInAMaze(int maze[][20], int n)
{
    int **solution = new int *[n];
    for (int i = 0; i < n; i++)
        solution[i] = new int[n];
    for (int i = 0; i < n; i++)
        memset(solution[i], 0, n * sizeof(int));
    mazeHelp(maze, n, solution, 0, 0);
}

int main() {
	int n;
    cin >> n;
    int maze[20][20] = {0};
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> maze[i][j];
    ratInAMaze(maze, n);
    return 0;
    
	return 0;
}
