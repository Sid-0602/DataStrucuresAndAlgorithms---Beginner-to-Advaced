#include<iostream>
#include <bits/stdc++.h>
using namespace std;


int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_count = 0;
        int count=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
            }
            else{
                count=0;
            }

            if(count>max_count){
                max_count=count;
            }
        }

        return max_count;

    }

int main(){

    vector<int> vect;
    vect.push_back(0);
    vect.push_back(1);
    vect.push_back(1);
    vect.push_back(0);
    vect.push_back(1);
    vect.push_back(0);
    vect.push_back(1);

    cout<<findMaxConsecutiveOnes(vect)<<endl;




}
