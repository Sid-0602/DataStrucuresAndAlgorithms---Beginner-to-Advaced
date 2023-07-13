#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[] = {4,7,10,5,3,2,5,-1,0,8,5,-5};
    int n= sizeof(a);
    vector<int> v = {5,-1,3,10,4,55};

    //sorting in ascending order:
    sort(a,a+n);

    sort(v.begin(),v.end()); //for vector sorting:

    //sorting in descending order: 
    sort(a, a+n, greater<int>); //greater <int> is inbuilt library. 
    
    pair<int,int> a[] = {{1,2},{2,3},{4,5}};


    

}