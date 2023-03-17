#include <iostream>
using namespace std;

class queue_Array{
    int *data;
    int firstIndex, nextIndex, size, capacity;

    public:

    //constructor: 
    queue_Array(int s){
        data = new int[s];
        nextIndex = 0;
        firstIndex = -1;
        size=0; 
        capacity = s;
    }  

    //getsize function: 

    int getSize(){
        return size;
    }

    //isEmpty function: 

    bool isEmpty(){
        return size==0;
    }


    //insert element: 
    void enqueue(int element){
        if(size == capacity){
            cout<<"!! Queue Full !!"<<endl;
            return; 
        }
        data[nextIndex] = element;
        nextIndex = ((nextIndex+1) % capacity);
        if(firstIndex ==-1){
            firstIndex = 0;
        }
        size++;
    }

    //return first element: 
    int front(){
        if(isEmpty()){
            cout<<"!! Queue is Empty !!"<<endl;
            return 0;
        }

        return data[firstIndex];
    }

    //dequeue function: 

    int dequeue(){

        if(isEmpty()){
            cout<<"!! Queue is Empty, can't perform dequeue operation !!"<<endl;
            return 0;
        }

        int ans = data[firstIndex];
        firstIndex = (firstIndex+1)%capacity; //to make circular rotation on queue. 
        size--;
        if(size == 0){
            firstIndex=-1;
            nextIndex=0;
        }
        return ans;
    }

};



