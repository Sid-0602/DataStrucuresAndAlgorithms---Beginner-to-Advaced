#include <bits/stdc++.h>
using namespace std;

void printIntersection(int arr1[], int arr2[], int n, int m) {
    // Write your code here
    vector<int> merged;
    //push back all the values of arr1.
    for(int i=0;i<n;i++){
        merged.push_back(arr1[i]);
    }

    //push back all the values of arr2.
    for(int i=0;i<m;i++){
        merged.push_back(arr2[i]);
    }
    
    //printing merged array: 
    for(int i=0;i<m+n;i++){
        cout<<merged[i]<<" ";
    }
    cout<<endl;

    unordered_map<int,int> hash;
    vector<int> output; 
    int size = n+m;
    int count=0;
    for(int i=0;i<size;i++){
        if(hash.count(merged[i])>1){
            output.push_back(merged[i]);
        }
        hash[merged[i]]=1;
    }
    cout<<count;

    


}

int main() {
    int n;
    cin >> n;

    int* arr1 = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr1[i];
    }

    int m;
    cin >> m;

    int* arr2 = new int[m];

    for (int i = 0; i < m; ++i) {
        cin >> arr2[i];
    }

    printIntersection(arr1, arr2, n, m);

    delete[] arr1;
    delete[] arr2;
}