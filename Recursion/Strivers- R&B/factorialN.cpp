#include <bits/stdc++.h>
using namespace std;


int factN(int n){

    //base case:
    if(n==0){return 1;}

    return (n*factN(n-1));
}

int main(){
    int n;
    cin>>n;
    int fact = factN(n);

    cout<<"Factorial of N numbers is: "<<fact<<endl;
}