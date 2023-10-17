#include <bits/stdc++.h>

using namespace std;

int kthSmallest(int arr[], int l, int r, int k){
    int n = sizeof(arr); 
    //using pq: 
    std::priority_queue<int> pq;
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }

    //after (k+1):
    for(int i=k;i<n;i++){
        if(pq.top()>arr[i]){
            pq.pop();
            pq.push(arr[i]);
        }
    }

    return pq.top();
}

int main(){
    int number_of_elements;
    cin>>number_of_elements;
    int a[number_of_elements];
    for(int i=0;i<number_of_elements;i++)
        cin>>a[i];
    int k;
    cin>>k;
    cout<<kthSmallest(a, 0, number_of_elements-1, k)<<endl;

}