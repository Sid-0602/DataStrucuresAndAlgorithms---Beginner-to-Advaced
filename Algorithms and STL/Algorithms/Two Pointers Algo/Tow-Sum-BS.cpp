#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    
    int n = numbers.size();
    vector<int> ans;

    int start = 0;
    int end = n-1;
    for(int i=0;i<n;i++){
        int sum = numbers[start] + numbers[end];
        if(sum==target){
            break;
        }
        else if(sum>target){
            end--;
        }
        else{
            start++;
        }
    }

    ans.push_back(start+1);
    ans.push_back(end+1);

    return ans;
}

int main(){

    // { 2,7,11,15 }
    //[2,3,4]
    // [-1,0]
    vector<int> numbers;
    numbers.push_back(2);
    numbers.push_back(7);
    numbers.push_back(11);
    numbers.push_back(15);

    vector<int> ans = twoSum(numbers,9);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}