#include <bits/stdc++.h>
using namespace std; 


vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        
        //nieve approch: Two nested forloops which will evaluate -> O(N2).
        
        //Optimal approach: Using stack: 
        vector<long long> ans(n, -1);
        stack<long long> stack;
    
        for (int it = n - 1; it >= 0; --it) {
            if (!stack.empty() && stack.top() > arr[it]) {
                ans[it] = stack.top();
            } else if (!stack.empty() && stack.top() <= arr[it]) {
                while (!stack.empty() && stack.top() <= arr[it])
                    stack.pop();
    
                if (!stack.empty())
                    ans[it] = stack.top();
            }
            stack.push(arr[it]);
        }
        return ans;
}