#include <iostream>
using namespace std;

class queue_using_array{
    int *data;
    int size, capacity;
    int nextIndex, firstIndex;


    public:

        //constructor:  
        queue_using_array(int s){
            data = new int[s];
            size = 0 ;
            firstIndex = -1;
            nextIndex =0;
            capacity = s;
        }

        //size and isEmpty() function:

        int getsize(){
            return size;
        }

       bool isEmpty(){
        return size==0;
       } 

       //Enqueue function:

       void enqueue(int element){

            if(size == capacity){
                cout<<"!! Queue is Full !!";
                return; 
            }
            data[nextIndex] = element; 
            nextIndex = (nextIndex+1) % capacity;

            if(firstIndex == -1){
                firstIndex=0;
            }
            size++;
            
       }


        //return first element: 

        int firstElement(){
            if(isEmpty()){
                cout<<"!! Queue is Empty !!"<<endl;
                return 0;
            }
            return data[firstIndex]; 
        }

        //return element nextIndex position: 
        int getnextIndex(){
            return nextIndex;
        }

        //dequeue function :

        int dequeue(){
            if(isEmpty()){
                cout<<"!! Queue is Empty !!"<<endl;
                return 0;
            }

            int first_Element = data[firstIndex];
            firstIndex = (firstIndex+1) % capacity;
            size--;
            if(size == 0){
                firstIndex=-1;
                nextIndex=0;
            }
            return first_Element;
        }


        //print queue: 
        void print_queue(){

            //can't print if queue is full 
            while(firstIndex!=nextIndex){
                cout<<data[firstIndex]<<" ";
                firstIndex = (firstIndex+1) % capacity; 
            }
        }

};