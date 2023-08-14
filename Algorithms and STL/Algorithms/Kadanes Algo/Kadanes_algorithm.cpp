#include <bits/stdc++.h>
using namespace std;

//This is brute force approach                 ~ O(n cube) and space complexity: O(1).
int maxSubArraySumN3(int arr[],int n){
    int max_sum = INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum = 0;
            for(int k=i;k<j;k++){
                sum=sum+ arr[k];
            }

            max_sum = max(sum,max_sum);
        }
    }

    return max_sum;
}


//More Better solution with O(n2):



int maxSubArraySumN2(int arr[],int n){
    int max_sum = INT_MIN;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum = sum+arr[j];
        }
        max_sum = max(sum,max_sum);
    }

    return max_sum;
}


//Optimal Solution: Using kadane's algorithms: 

int maxSubArraySum(int arr[],int n){

    int max_global = INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];

        if(sum>max_global){
            max_global = sum;
        }
    
        if(sum<0){
            sum=0;
        }
        
    }

    return max_global;
}



int main()
{
    int a[] = { -2,-3,4,-1,-2,1,5,-3 };
    int n = sizeof(a) / sizeof(a[0]);
 
    // Function Call
    int max_sum = maxSubArraySum(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}