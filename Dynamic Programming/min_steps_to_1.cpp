#include<bits/stdc++.h>
using namespace std;

//Reduce n -> 1 using 3 operations: 
// 1) (n-1), n/2,n/3.


int countMinStepsToOne(int n)
{
	//Write your code here

    //base case: 
    if(n<=1){
        return 0;
    }

    //recursive call: 

    int x = countMinStepsToOne(n-1);
    int y = INT_MAX;
    int z = INT_MAX;
    if(n%2==0){
        y = countMinStepsToOne(n/2);
    }
    if(n%3==0){
        z = countMinStepsToOne(n/3);
    }

    //calculate final output: 
    int ans = min(x,min(y,z))+1;

    return ans; 
}

int main()
{
	int n;
	cin >> n;
	cout << countMinStepsToOne(n);
}