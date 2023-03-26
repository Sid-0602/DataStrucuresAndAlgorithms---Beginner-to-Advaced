#include <iostream>
#include <algorithm>
using namespace std;

class DynamicArray{

    int *data;
    int nextIndex;
    int capacity; //total size of current array

    public:

    //constructor to create a array:
    DynamicArray(){
        data = new int[5]; //making size of current array as 5.
        nextIndex = 0;
        capacity =5;
    }

    DynamicArray(DynamicArray const &d){
        // this-> data = d.data; //this is shallow copy

        //this is deep copy: 
       this->data = new int[d.capacity];
       for(int i=0; i<d.nextIndex;i++){
        this->data[i]= d.data[i];
       }
       this->nextIndex = d.nextIndex;
       this->capacity = d.capacity;
    }

    //function to insert an element: 
    void add(int element){
        //check if capacity is finished or not: 
        if(nextIndex == capacity){
            //create new array of twice the size of original array.
            int *newData = new int[2*capacity];

            //copy the original array into new array:
            for(int i=0;i<capacity;i++){
                newData[i] = data[i];
            }        

            delete [] data; //de-allocating old array memory: 
            data = newData; //pointing data to newData 
            capacity *=2; // a*=b is same as (a = a*b )
            
        }

        //if capacity is not finished, insert element into next Index and increment nextIndex:
        data[nextIndex] = element;
        nextIndex++;
    }

    //add element at particular index: 
    void add(int i, int element){
        if(i<nextIndex){
            data[i] = element;
        }
        else if(i == nextIndex){
            add(element);
        }
        else{
            return;
        }
    }

    int get(int i){
        if(i<nextIndex){
            return data[i];
        }
        else{ return -1;}
        
    }

    void print(){
       for(int i=0; i<nextIndex;i++){
        cout<<"The "<<i+1<<"th member of array is: "<<data[i]<<endl;
       } 
    }

};


int main(){
    DynamicArray d1;
    d1.add(10);
    d1.add(20);
    d1.add(30);
    d1.add(40);
    d1.add(50);
    d1.add(60);
    d1.add(4,400); //adding 4th member as 100;

    

    d1.add(1,100);
    d1.print();

    DynamicArray d2(d1); //copy constructor: this does shallow copy of our array.
    cout<<"********************"<<endl;
    d2.print();

   /* DynamicArray d3;
    d3=d2; //copy assignment operator also does shallow copy of object.
    */

}