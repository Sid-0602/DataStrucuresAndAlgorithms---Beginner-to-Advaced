#include <bits/stdc++.h>
using namespace std; 


vector<int> dailyTemperatures(vector<int>& temperatures) {
        //nieves approach: We use two nested for-loops to iterate and scan the array. 

        int n = temperatures.size(); //this is size of array.
        stack<int> st;
        st.push(n-1);
        vector<int> ans(n,0); 
        for(int i=n-2;i>=0;i--){
            int val = temperatures[i];
            while(!st.empty() && val>=temperatures[st.top()]){
                st.pop();
            }
            if(!st.empty()){
                ans[i]= st.top()-i;
            }

            st.push(i);
        }

        return ans; 
        
    }