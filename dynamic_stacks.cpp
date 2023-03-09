#include <iostream>
#include <climits>
using namespace std;

class DynamicStack{
    private:
        int *data;
        int nextIndex;
        int capacity=5;

    public:

     DynamicStack(){
        data = new int[5];
        nextIndex=0;
    }


    int size(){
        return nextIndex;
    }

    bool isEmpty(){
        if(nextIndex==0){
            return true;
        }
        else{
            return false;
        }

        //the above condition can be written as :

        // return nextIndex==0;
    }

    void push(int element){

        if(nextIndex >= capacity){

            //double the size of array and update it with old values.
            //delete the old array and make pointer data point towards new array.
            //update capacity.

            int *newdata = new int[capacity*2];
            for(int i=0;i<capacity;i++){
                newdata[i] = data[i];
            }
            capacity*=2; //update capacity to two times the original;
            delete []data; //delete old data array;
            data=newdata; //assign data pointer to newdata 

            //push new element in new updated "data" array:   
            data[nextIndex]=element;
            nextIndex++;
        }
        data[nextIndex] = element;
        nextIndex++;
    }

    int pop(){

        if(nextIndex>-1){
            nextIndex--;
            return data[nextIndex];
        }

        else{
            cout<<"Stack is empty already!!"<<endl;
            return INT_MIN;
        }
        
    }

    int top(){
        if(isEmpty()){
            cout<<"Stack is Empty"<<endl;
            return INT_MIN;
        }
        return data[nextIndex-1];
    }


};


int main(){

    DynamicStack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);
    s1.push(60);

    
    cout<<"Size of stack is: "<<s1.size()<<endl;
    cout<<"Top element of stack is: "<<s1.top()<<endl;
    cout<<"**********After popping********************"<<endl;


    s1.pop();
    s1.pop();
    s1.pop();
    cout<<"Size of stack is: "<<s1.size()<<endl;
    cout<<"Top element of stack is: "<<s1.top()<<endl;

    cout<<"**********After popping********************"<<endl;
    s1.pop();
    s1.pop();
    s1.pop();

    cout<<"Size of stack is: "<<s1.size()<<endl;
    cout<<"Top element of stack is: "<<s1.top()<<endl;
    cout<<"Is the stack empty : ";
    if(s1.isEmpty() == 0){
        cout<<"Yes it is!!"<<endl;
    }
    else{
        cout<<"No, it's not!!"<<endl;
    }
}