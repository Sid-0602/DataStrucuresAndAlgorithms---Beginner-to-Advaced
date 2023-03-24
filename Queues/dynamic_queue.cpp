#include <iostream>
using namespace std;
#include "Dyanamic_Queue.h"



int main(){
    dynamic_queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout<<q.front()<<endl;
    cout<<q.getSize()<<endl;
    q.dequeue();
    cout<<"After Dequeue"<<endl;
    cout<<q.front()<<endl;
    cout<<q.getSize()<<endl;

    cout<<"After Enqueue"<<endl;

    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);
    cout<<q.front()<<endl;
    cout<<q.getSize()<<endl;

}