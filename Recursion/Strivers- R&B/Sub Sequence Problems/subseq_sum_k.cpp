#include <bits/stdc++.h>
using namespace std;

/*
Print all subsequences whose sum is K. 
*/

bool checkSum(vector<int> &vec, int k){
    int n=vec.size();
    int sum=0;
    for(int i=0;i<n;i++){
        sum = sum + vec[i];
    }

    if(sum==k){return true;}
    return false;
}

void printSubsequence(int i, vector<int> &vec, int arr[], int n, int k){

    //base case:
    if(i==n){
        if(checkSum(vec,k)){
            for(auto it:vec){ cout<<it<<" "; } cout<<endl;
        }

        return;
    }

    //TAKE combination: 
    vec.push_back(arr[i]);
    printSubsequence(i+1,vec,arr,n,k);

    //NOT TAKE combination: 
    vec.pop_back();
    printSubsequence(i+1,vec,arr,n,k);


}

int main(){
    int arr[] = {1,2,3,4,5};
    int n=5;
    vector<int> vec;
    cout<<"Give number k of which you want to equal sum to: "<<endl;
    int k;
    cin>>k;
    printSubsequence(0,vec,arr,n,k);
}