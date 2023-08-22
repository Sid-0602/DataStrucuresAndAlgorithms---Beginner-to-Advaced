#include<bits/stdc++.h>
using namespace std;



int fibo_it(int n){
    int *ans = new int[n+1]; //array to store repetitive function calls.


    //we first fill the dependent elements and then fill the array with nth fibo number.
    ans[0]=0; //first element is 0. 
    ans[1]=1; //second element is 1.
    
    for(int i=2;i<n+1;i++){
        ans[i] = ans[i-1] + ans[i-2];
    }

    return ans[n];
}

int main(){
    int n;
    cin>>n;
    cout<<"Nth fibo number is: "<<fibo_it(n)<<endl; 
    
}