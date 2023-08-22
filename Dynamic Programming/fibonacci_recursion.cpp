#include<bits/stdc++.h>
using namespace std;


//Using recursion the time complexity is exponential -> O(2^n);
int fibo_rec(int n){

    //base case: 
    if(n<=1){
        return n;
    }

    int a  = fibo_rec(n-1);
    int b = fibo_rec(n-2);

    return a+b;
}

int main(){
    int n;
    cin>>n;
    cout<<fibo_rec(n)<<endl; 
}