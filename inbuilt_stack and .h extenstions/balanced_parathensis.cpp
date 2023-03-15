#include <iostream>
#include <cstring>
#include <stack>
#include <bits/stdc++.h>

using namespace std;


bool isBalanced(string expression) 
{
    // Write your code here

    int n=expression.size(); //size of input array

    stack<int> stk; //initialize a stack.
    bool flag=true;
    int i=0;

    if(n==0){
        return false;
    }
    for(int i=0;i<n;i++){

        if(expression[0] ==')' || expression[0] ==']' || expression[0] =='}'){
            flag = false;
            return flag;
            break;
        }
        if(expression[i] == '(' || expression[i] == '[' || expression[i]=='{'){
            stk.push(expression[i]);
            continue;
        }

        else if(expression[i]==')'){
            if(stk.top()== '('){
                stk.pop();
                continue;
            }
            else{
                flag=false;
                break;
            }
        }

        else if(expression[i]=='}'){
            if(stk.top()== '{'){
                stk.pop();
                continue;
            }
            else{
                flag=false;
                break;
            }
        }

        else if(expression[i]==']'){
            if(stk.top()== '['){
                stk.pop();
                continue;
            }
            else{
                flag=false;
                break;
            }
        }
    }

    if(!stk.empty()){
        return false;
    }

    return flag;
    
    
}

int main() 
{
    string input;
    cin >> input;
    cout << ((isBalanced(input)) ? "true" : "false");
}