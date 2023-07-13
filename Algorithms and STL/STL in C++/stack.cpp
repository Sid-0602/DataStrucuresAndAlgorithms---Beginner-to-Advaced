#include <bits/stdc++.h>
using namespace std;

int main(){
    //Stack is DS which has LIFO(Last in first out) operations.

    stack<int> st;

    //this is push. It inserts the element inside stack.
    st.push(0);
    for(int i=0;i<10;i++){
        st.push(i*i);
    }

    //this is pop operation. This will pop out top most element.
    st.pop();

    //top: It gives top element of stack.
    cout<<st.top()<<endl;

    //size and empty functions: 
    cout<<st.empty()<<endl;
    cout<<st.size()<<endl;

    //swap function: 
    stack<int> st1,st2;
    st2.swap(st1); //it swaps the two stacks.

    //to print stack, pop and top operations are used together.

    while(!st.empty()){
        cout<<st.top()<<" "; //print the top element and then pop the element.
        st.pop();
    }
}