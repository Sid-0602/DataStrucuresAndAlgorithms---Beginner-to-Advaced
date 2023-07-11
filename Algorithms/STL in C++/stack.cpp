#include <bits/stdc++.h>
using namespace std;

int main(){
    //Stack is DS which has LIFO(Last in first out) operations.

    stack<int> st;

    //this is push. It inserts the element inside stack.
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4); 

    //this is pop operation. This will pop out top most element.
    st.pop();

    //top: It gives top element of stack.
    cout<<st.top()<<endl;

    //size and empty functions: 
    cout<<st.empty()<<endl;
    cout<<st.size()<<endl;

    //swap function: 
    stack<int> st1;
    st.swap(st1); //it swaps the two stacks.
}