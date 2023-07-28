#include<iostream>
#include<fstream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int board[11][11];
int counter=0;


bool isSafe(int n, int row, int col){

    /*check for 3 positions: 
    
        1. isSafe in row,
        2. bottom left diagonal.
        3. upper left diagonal. 
    */

    //for same row: 
    for(int i=col-1;i>=0;i--){
        if(board[row][i]==1){
            return false;
        }
    }

    //for  upper left diagonal:
    for(int i=row-1,j=col-1;i>=0,j>=0;i--,j--){
        if(board[i][j] == 1){
            return false;
        }
    }

    //for lower left diagonal: 
    for(int i=row+1,j=col-1;i<n,j>=0;i++,j--){
        if(board[i][j]==1){
            return false;
        }
    }

    return true;
}


void nQueenHelper(int n, int col){

    //base case: we reached some solution, then print: 
    if(col == n){
        cout<<"We reached a solution!!"<<endl;
        counter++;
        return; 
    }

    //placing at possible positions and move to smaller problems: 
    for(int i=0;i<n;i++){

        //check for isSafe: 
        if(isSafe(n,i,col)){
            board[i][col] = 1; //make (i,col) as 1.

            nQueenHelper(n,col+1);
            board[i][col] = 0;
        }
    }

    return;

}
void placeQueens(int n){

    memset(board,0,11*11*sizeof(int)); //using memset functionality, we set board to zero.

    nQueenHelper(n,0); //pass value of n as n and row=0.
}


int main(){  
    placeQueens(5);
    cout<<"Total number of solutions are: "<<counter<<endl;
    return 0; 
}