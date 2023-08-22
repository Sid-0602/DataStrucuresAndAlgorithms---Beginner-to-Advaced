#include<bits/stdc++.h>
using namespace std;

//Time complexity: It is linear complexity with O(n). This is achieved by memoization .
int fibo_dp_helper(int n, int *ans){

    //base case: 
    if(n<=1){
        return n; 
    }

    //check if nth fibo already exists.
    if(ans[n]!=-1){
        return ans[n];
    }


    //nth fibo does not exist and needs to be calculated. 
    int a = fibo_dp_helper(n-1,ans);
    int b = fibo_dp_helper(n-2,ans);

    //save the output to array for future use and then return. 
    ans[n] = a+b;
    return (a+b);

}
int fibo_dp(int n){

    //Approach: For this operations, we have n+1 unique calls to make. (1->n);
    int *ans = new int[n+1]; //array to store repetitive function calls.
    //nth fibo number is stored in ans[nth] index.

    for(int i=0;i<n+1;i++){
        ans[i]=-1;
    }
    fibo_dp_helper(n,ans);
    
}

int main(){
    int n;
    cin>>n;
    cout<<"Nth fibo number is: "<<fibo_dp(n)<<endl; 
}