#include <bits/stdc++.h>
using namespace std;


int main(){

    //the declaration of max-heap: 
    cout<<"*************** MAX HEAP ************"<<endl;
    priority_queue<int> pq;
    pq.push(1);
    pq.push(5);
    pq.push(-2);
    pq.push(10);

    cout<<"Max-heap top element is: "<<pq.top()<<endl;

    pq.pop();
    cout<<pq.top()<<endl;

    //printing the pq: 
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;

    //the declaration of min-heap: 
    cout<<"*************** MIN HEAP ************"<<endl;
    priority_queue<int,vector<int>,greater<int>>pq1;
    pq1.push(1);
    pq1.push(5);
    pq1.push(-2);
    pq1.push(10);

    cout<<"Min-Heap top element is: "<<pq1.top()<<endl;
    pq1.pop();
    cout<<pq1.top()<<endl;

    while(!pq1.empty()){
        cout<<pq1.top()<<" ";
        pq1.pop();
    }
    cout<<endl;

    
}