#include <iostream>
using namespace std;
#include <queue>

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    cout<< q.size()<<endl;
    cout<<q.front()<<endl;

    q.pop();
    q.pop();
    cout<< q.size()<<endl;
    cout<<q.front()<<endl;
    q.push(50);
    q.pop();
    q.pop();
    cout<< q.size()<<endl;
    cout<<q.front()<<endl;


    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(100);
    q.push(50);
    cout<< q.size()<<endl;


    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }

    






}