#include <iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& vec, int target, int start, int end, int k){

        while(start<=end){
            int mid=start + (end-start)/2;

            if(target==vec[mid]){
                return (k+mid);
            }
            if(target<vec[mid]){
                end = mid-1;
            }else{
                start = mid+1;
            }
        }

        return -1;
}


int search(vector<int>& nums, int target) {
        int rotate_count = 0;
        int min = INT_MAX;
        int size = nums.size();
        int index_of_min = 0;
        for(int i=0; i<size;i++){
            if(nums[i]<min){
                min = nums[i];
                index_of_min = i;
            }
        }
		cout<<"Min value is: "<<min<<endl;
		for(int i=0;i<nums.size();i++){
			cout<<nums[i]<<" ";
		}
		cout<<endl;


        vector<int> temp(nums.size());

        //creating array with min element at 0th index.
        int k= nums.size() - index_of_min ; //remaining index to be rotated: 
        for(int i=0; i<nums.size();i++){
            temp[(i+k)%nums.size()] = nums[i];
        }

		for(int i=0;i<temp.size();i++){
			cout<<temp[i]<<" ";
		}
		cout<<endl;

		cout<<"Rotate count is: "<<k<<endl;

		return binarySearch(temp,target,0,size-1,k);
}	
		


int main(){
	vector<int> nums = {4,5,6,0,1,2};
	cout<<search(nums,2);
}