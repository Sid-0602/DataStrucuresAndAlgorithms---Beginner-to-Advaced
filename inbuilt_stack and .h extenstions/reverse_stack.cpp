#include <iostream>
#include <stack>
using namespace std;

void reverseStack(stack<int> &input, stack<int> &extra) {
    //Write your code here

    if(input.size() == 0){
            return;
    }
    while(!input.empty()){
        int top_element = input.top();
        extra.push(top_element);
        input.pop();
    }

    int size_of_input_stack = extra.size(); 
    
    
   
    int *arr = new int(size_of_input_stack);

    for(int i=0;i<size_of_input_stack;i++){
        int top_element = extra.top();
        arr[i] = top_element;
        extra.pop();
    }

    for(int i=(size_of_input_stack-1);i>=0;i--){
        input.push(arr[i]);
    }
    

    
}


int main() {
    stack<int> input, extra;
    int size;
    cin >> size;

    for (int i = 0, val; i < size; i++) {
        cin >> val;
        input.push(val);
    }

    reverseStack(input, extra);

    while (!input.empty()) {
        cout << input.top() << " ";
        input.pop();
    }

    
}