#include <bits/stdc++.h>
using namespace std;


void print1toN(int i, int n){
    //base case: 
    if(i>n){
        return;
    }

    //small calculation: 
    cout<<i<<endl;
    print1toN(i+1,n);
}
int main(){
    int n;
    cin>>n;
    int i=1;
    print1toN(i,n);
}