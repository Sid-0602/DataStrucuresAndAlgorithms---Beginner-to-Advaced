#include<iostream>
#include<fstream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int board[11][11]; //this is general board of size 11X11. 

//check if the position at 
bool isSafe(int n, int row, int col){

    /*check for 3 positions: 
    
        1. isSafe in column,
        2. Upper right diagonal.
        3. Upper left diagonal. 
    */


    //same column :
    for(int i=row-1;i>=0;i--){
        if(board[i][col] == 1){
            return false;
        }
    }


    //Upper left diagonal: 
    for(int i=row-1, j=col-1 ; i>=0 && j>=0 ; i--,j--){
        if(board[i][j]==1){
            return false;
        }
    }

    //Upper left diagonal: 
    for(int i=row-1,j=col+1; i>=0,j<n;i--,j++){
        if(board[i][j]==1){
            return false;
        }
    }

    return true;
    
}

void nQueenHelper(int n, int row){
    //base case: we have placed queens at correct positions
    
    if(row==n){
        //we have reached correct solution. 
        //print the matrix and return:

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<board[i][j]<< " ";
            }
            cout<<endl;
        }
        cout<<endl;

        return; 
    }

    //placing at possible positions and move to smaller problem: 
    for(int j=0;j<n;j++){
        
        //check if it is safe to insert the element to that position.
        if(isSafe(n,row,j)){
            board[row][j]= 1; //make (row,j) as 1.
            
            //move to smaller problem: (recursive call)
            nQueenHelper(n,row+1);
            
            //if we backtrack due to not safe for next solution: 
            board[row][j]=0;
        }
    }

    return; 
}   

void placeQueens(int n){

    memset(board,0,11*11*sizeof(int)); //using memset functionality, we set board to zero.

    nQueenHelper(n,0); //pass value of n as n and row=0.
}

int main(){  
    placeQueens(4);
    return 0; 
}