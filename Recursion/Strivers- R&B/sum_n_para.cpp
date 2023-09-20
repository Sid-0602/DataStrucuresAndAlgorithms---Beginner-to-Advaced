
#include <bits/stdc++.h>
using namespace std;


void SumOfN(int n, int sum){
    
    //base case: 
    if(n<1){
        cout<<sum<<endl;
        return; 
    }

    //small calculations: (this takes current state close to base case): 
    sum = sum+n;
    n--;

    //recursive call: 
    SumOfN(n-1,sum+n);


}



int main(){
    int n;
    cin>>n;
    int sum=0;
    SumOfN(n,sum);
}