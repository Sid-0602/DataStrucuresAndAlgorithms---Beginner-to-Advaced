#include<bits/stdc++.h>
using namespace std;


int countMinStepsToOne_helper(int n, int *arr){

    //base case:
    if(n<=1){
        return 0; 
    }

    //check if we have ans already present in array: 
    if(arr[n]!=-1){
        return arr[n];
    }

    //ans is not present, hence calculate the ans and fill it into array. 
    int x = countMinStepsToOne_helper(n-1,arr);
    int y = INT_MAX, z= INT_MAX;

    if(n%2==0){
        y = countMinStepsToOne_helper(n/2,arr);
    }

    if(n%3==0){
        z = countMinStepsToOne_helper(n/3,arr);
    }

    int ans = min(x,min(y,z))+1;
    //store the ans in array for future use: 
    arr[n] = ans;

    return ans; 


}
int countMinStepsToOne(int n){
    int *arr = new int[n+1];
    for(int i=0;i<=n;i++){
        arr[i] = -1;
    }   

    countMinStepsToOne_helper(n,arr); 
}


int main()
{
	int n;
	cin >> n;
	cout << countMinStepsToOne(n);
}