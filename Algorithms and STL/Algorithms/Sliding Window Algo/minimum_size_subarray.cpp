/*

Given an array of positive integers nums and a positive integer target, return the minimal length of a 
subarray whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.

Eg: 

Input: target = 7, nums = [2,3,1,2,4,3]
Output: 2
Explanation: The subarray [4,3] has the minimal length under the problem constraint.

*/

#include <bits/stdc++.h>
using namespace std;

int minSubArrayLen(int target, vector<int>& nums) {
        //Approach:  We are using sliding windows problem. 
        
        int l=0; //left pointer.
        int total = 0; //total sum. 
        int res = INT_MAX; //this stores final ans. 

        for(int r=0;r<nums.size();r++){
            total += nums[r]; //add the right pointer to total.

            while(total>=target){
                res = std::min((r-l+1),res); //store min value in res.
                total = total - nums[l]; //we subtract the value of ith index from the window, as we are incrementing the l
                l++;
            }
            
        }


        if(res == INT_MAX){
            return 0;
        }else{
            return res;
        }
    }