#include <bits/stdc++.h>
using namespace std;


int majorityElement(vector<int>& nums){
    //most optimal solution is: Moore's voting algorithm: 
    int count=0;
    int element ;
    for(int i=0;i<nums.size();i++){
        if(count==0){
            count=1;
            element = nums[i];
        }
        else if(nums[i] == element){
            count++;
        }
        else{
            count--;
        }

    }
    
    //verify if the element is actually majority: 

    int check = 0;
    for(int i=0;i<nums.size();i++){
        if(nums[i] == element){
            check++;
        }
    }

    if(check > nums.size()/2){
        return element;
    }
    
    return -1;
    
}

int main(){
    vector<int>  vec = {2,1,1,1,1,2,2};
    cout<<majorityElement(vec);
}