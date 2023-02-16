#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int mid, int r){
    int n1=mid-l+1;
    int n2=r-mid;

    int a[n1];
    int b[n2];

    for(int i=0; i<n1;i++){
        a[i] = arr[l+1];
    }
    for(int i=0; i<n1;i++){
        b[i] = arr[mid+1+i];
    }

    int i=0;
    int j=0;
    int k=0;

    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k]=a[i];
            k++; i++;
        }

        else{
            arr[k]=b[j];
            k++; j++;
        }
    }

    while(i<n1){
        arr[k] =a[i];
        k++; i++;
    }

    while(j<n2){
        arr[k]=b[j];
            k++; j++;
    }




}
void mergesort(int arr[], int l, int r){

    if(l<r){
        int mid=(l+r)/2;
        mergesort(arr, l , mid);
        mergesort(arr,mid+1,r);

        merge(arr,l,mid,r);
    }
}
int maximumProfit(int budget[], int n) {
    // Write your code here
    mergesort(budget,0,n); //sorted the array using merge sort.

    int temp[n];
    
    for(int i=0;i<n;i++)
    {
        temp[i]=budget[i]*(n-i);
    }
    sort(temp,temp+n)
    
    return temp[n-1];


    

}


int main() {
    int n ,*input,i,*cost;
    cin>>n;
    input = new int[n];
    for(i = 0;i < n;i++)
        cin>>input[i];
    
    cout << maximumProfit(input, n) << endl;
    
}
