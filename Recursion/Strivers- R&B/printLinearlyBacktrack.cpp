#include <bits/stdc++.h>
using namespace std;


void PrintUsingBacktracking(int i, int n){

    //base case: 
    if(i<1){return;}
    //to backtrack, we have to give function call before printing. 
    PrintUsingBacktracking(i-1,n);
    cout<<i<<endl;
}

int main(){
    int n;
    cin>>n;
    PrintUsingBacktracking(n,n);
}