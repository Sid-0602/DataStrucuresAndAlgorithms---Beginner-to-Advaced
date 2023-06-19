#include <iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

    int search(vector<int>& nums, int target) {
        int search(vector<int>& nums, int target) {
        int start=0, end=nums.size()-1;
        while(start<=end){
            int mid=start + (end-start)/2;
            if(nums[mid] == target) return mid;
            else if(nums[mid]>=nums[start]){
                if(target>=nums[start] && target<nums[mid]) end = mid-1;
                else start=mid+1;
            }
            else{
                if(target>nums[mid] && target <=nums[end]) start = mid+1;
                else end = mid-1;
            }
        } 
        return -1;  
	}
}

int main(){
	vector<int> nums = {2,3,1};
	cout<<search(nums,3);
}