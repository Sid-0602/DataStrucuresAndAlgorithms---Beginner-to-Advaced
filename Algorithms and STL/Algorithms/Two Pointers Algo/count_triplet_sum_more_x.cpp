#include <bits/stdc++.h>
using namespace std;


long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	    
	    // APPROACH: Use Two Pointers method
	    
	    /*
	    
	        1. Sort the array. 
	        2. Using two pointers, itrate over the array with increasing/decreasing sum. 
	    
	    */
	    
	    std::sort(arr,arr+n);
	    
	    int ans = 0;
	    for(int i=0;i<n-2;i++){
	        int j = i + 1, k = n - 1;
 
        // Use Meet in the Middle concept
            while (j < k){
                // If sum of current triplet is more or equal,
                // move right corner to look for smaller values
                if (arr[i] + arr[j] + arr[k] >= sum)
                    k--;
     
                // Else move left corner
                else
                {
                    // This is important. For current i and j, there
                    // can be total k-j third elements.
                    ans += (k - j);
                    j++;
                }
    	    }
	    }
	    
	    return ans;
	}