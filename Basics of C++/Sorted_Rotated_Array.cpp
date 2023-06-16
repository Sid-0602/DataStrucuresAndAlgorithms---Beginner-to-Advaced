#include <iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

bool flag=true;
bool check(vector<int>& nums) {
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

		cout<<endl;
        //check if the array is sotted: 
		
        for(int i = 0;i<nums.size()-1;i++){
			if(temp[i]>temp[i+1]){

				flag=false;
				cout<<"Not in order!!"<<"->>flag is:"<<flag<<endl;
				break;
			}
			else if(temp[i]<=temp[i+1]){
				cout<<"In order till now"<<"->>flag is:"<<flag<<endl;

			}
    	}
	return flag;
		
}

int main(){
	vector<int> nums = {6,10,6};
	cout<<check(nums);
}