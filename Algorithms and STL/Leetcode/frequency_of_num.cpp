#include <bits/stdc++.h>
using namespace std;


int main(){
    
    cout<<"Enter the size of array: "<<endl;
    int n;


    cin>>n;

    cout<<"Enter array elements: "<<endl;
    int *arr = new int(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }

    for(auto itr : mp){
        cout<< itr.first << " -> "<<itr.second<<endl;
    }


}