#include <bits/stdc++.h>
using namespace std;

void printDesc(int n){

    //base case:
    if(n<1){ return ;} 
    cout<<n<<endl;
    printDesc(n-1);
}

int main(){
    int n;
    cin>>n;
    printDesc(n);
}