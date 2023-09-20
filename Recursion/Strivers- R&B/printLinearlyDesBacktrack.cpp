#include <bits/stdc++.h>
using namespace std;

void PrintDescBT(int i, int n){
    //base case:
    if(i>n){return;}

    //functional call using backtracking: 
    PrintDescBT(i+1,n);
    cout<<i<<endl;
}

int main(){
    int n;
    cin>>n;
    PrintDescBT(1,n);
}