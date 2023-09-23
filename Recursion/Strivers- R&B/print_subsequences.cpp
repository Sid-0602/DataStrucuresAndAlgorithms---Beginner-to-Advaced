#include <bits/stdc++.h>
using namespace std;

void printSubsequence(int i, vector<int>& vec, int arr[], int n){

    //base case:
    if(i==n){
        for(auto it:vec){ cout<<it<<" "; } cout<<endl; 
        return;
    }

    //this code adds next index in array into vec. (TO TAKE CONDITION): 
    vec.push_back(arr[i]);
    //recursive call to send the current index included: 
    printSubsequence(i+1,vec,arr,n);

    //this code removes current index element into vec. (TO NOT TAKE CONDITION):
    vec.pop_back();
    //recursive call to send the vec without current element included.
    printSubsequence(i+1,vec,arr,n);


}

int main(){

    int arr[] = {3,1,2};
    int n=3;
    vector<int> vec;
    printSubsequence(0,vec,arr,n);

}