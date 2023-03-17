#include <iostream>
using namespace std;

#include "queue_using_array.h"

int main(){
    queue_Array q(5);

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