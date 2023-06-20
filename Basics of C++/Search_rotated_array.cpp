#include <iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
    int start=0, end=nums.size()-1;
    while(start<=end){

        int mid = start + (end-start)/2;
        if(nums[mid] == target) return mid;

        //either the left part or right part is sorted:

        //here the left part is sorted:  
        else if(nums[mid]>=nums[start]){

            //As the left half is sorted, check if target lies in left half.
            if(nums[start] <= target && target<nums[mid]){
                //if it lies in left part, eliminate the left part.
                end = mid-1;
            }
            else{
                //eliminate the left part.
                start = mid+1;
            }
        }

        //the right part is sorted: 
        else{
            //check if left part contains the target: 
            if(nums[mid]<target && target<=nums[end]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
    }

    return -1;
}


int main(){
	vector<int> nums = {7,8,9,1,2,3};
	cout<<search(nums,3);
}