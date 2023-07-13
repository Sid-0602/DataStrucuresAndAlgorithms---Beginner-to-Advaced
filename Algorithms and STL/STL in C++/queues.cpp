#include <bits/stdc++.h>
using namespace std;


int main(){
    queue<int> q;
    for(int i=0;i<10;i++){
        q.push(i*i);
    }

    q.back()*=9;
    cout<<q.back()<<endl;
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;

    //printing the queue:
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}