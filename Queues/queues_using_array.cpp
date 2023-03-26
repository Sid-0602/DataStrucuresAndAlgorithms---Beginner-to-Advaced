#include <iostream>
using namespace std;
#include "queues_using_array.h"


int main(){

    queue_using_array q1(5);

    q1.enqueue(1);
    q1.enqueue(2);
    q1.enqueue(3);
    q1.enqueue(4);
    q1.enqueue(5);

    cout<<q1.firstElement()<<endl;
    cout<<q1.getnextIndex()<<endl;

    cout<<"Size of queue is: "<<q1.getsize();
    cout<<endl;

    cout<<"Inserting one more than capacity"<<endl;
    q1.enqueue(6);

    cout<<endl;

    cout<<"** Dequeuing the elements ** "<<endl;
    q1.dequeue();
    q1.dequeue();
    q1.enqueue(6);

    cout<<"Size of queue is: "<<q1.getsize();
    cout<<endl;

    cout<<"The queue is: ";
    q1.print_queue(); 
    cout<<endl;

}


