#include <bits/stdc++.h>
using namespace std;

int ct=0;

void print(){
    if(ct==10){
        return;
    }

    //small calculations: 
    ct++;
    cout<<ct<<endl;
    //recursive call: 
    print();
    
}

int main(){

    //function call in main: 
    print();
}