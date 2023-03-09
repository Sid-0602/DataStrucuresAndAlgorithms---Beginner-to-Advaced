#include <iostream>
#include <climits>
using namespace std;


class StackusingArray{
    private:
        int *data; //it is pointer to dynamic array.
        int nextIndex; //it is nextIndex datatype.
        int capacity; //storing the size of stack.

    public:

    StackusingArray(int total_size){
        data = new int[total_size];
        nextIndex=0;
        capacity = total_size;

    }

    //Creating function which can be accessed public:

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

        if(nextIndex < capacity){
            data[nextIndex] = element;
            nextIndex++;
        }

        else if(nextIndex==capacity){
            cout<<"Stack is full!! "<<endl;
            return;
        }
        else{
            cout<<"Stack is overflowing!!"<<endl;
            return;
        }
        
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

    StackusingArray s1(5);
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



