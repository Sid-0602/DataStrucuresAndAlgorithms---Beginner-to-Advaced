#include <bits/stdc++.h>
using namespace std;


bool search(vector<int>& nums, int target) {
    int start =0;
        int end= nums.size()-1;

        while(start<=end){
            int mid = start + (end-start)/2;

            if(target == nums[mid]) return true;

            if(nums[start] == nums[mid] && nums[mid]==nums[end]){
                start = start+1;
                end = end-1;
                continue;
            }

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

    return false;
}

int main(){
    vector<int> nums = {2,5,6,0,0,1,2};

    cout<<search(nums,0);
}