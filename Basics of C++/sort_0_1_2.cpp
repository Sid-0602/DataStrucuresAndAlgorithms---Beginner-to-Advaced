#include <bits/stdc++.h>
using namespace std;


void sortColors(vector<int>& nums) {
        int count_0=0;
        int count_1=0;
        int count_2=0;

        int n = nums.size();

        for(int i=0;i<n;i++){
            if(nums[i]==0){
                count_0++;
            }

            if(nums[i]==1){
                count_1++;
            }

            if(nums[i]==2){
                count_2++;
            }
        }

        int current=0;
        for(int i=0; i<count_0;i++){
            nums[i] = 0;
            current++;
        }

        cout<<"Current value here is: "<<current<<endl;
        int n1=current+count_1;
        for(int i=current; i<n1;i++){
            nums[i] = 1;
            current++;
        }

        cout<<"Current value here is: "<<current<<endl;
        int n2=current+count_2;
        for(int i=current; i<n;i++){
            nums[i] = 2;
            current++;
        }
        cout<<"Current value here is: "<<current<<endl;

    }


int main(){
    vector<int> nums={2,0,2,1,1,0};
    sortColors(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}