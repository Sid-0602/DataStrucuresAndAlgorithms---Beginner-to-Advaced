#include <bits/stdc++.h>
using namespace std;


void printN(int i,int n){

    //base case:
    if(i>n){
        return;
    }

    cout<<"This is "<<i<<"th time"<<endl;
    printN(i+1,n);
}

int main(){
    int n;
    cin>>n;
    int i=1;
    printN(i,n);
}