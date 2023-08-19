#include <bits/stdc++.h>
using namespace std;


//Logic: "Select" the minimum element and swap it with the current element. 
//time complexity: O(n square).
//space complexity: O(1). 

void selectionSort(int input[], int n){
    
    for(int i=0;i<n-1;i++){

        int min_index = i;
        for(int j=i+1;j<n;j++){
            if(input[j]<input[min_index]){
                min_index = j;
            }
        }

        //minimum element is found, swap it with the current ith index.
        int temp = input[min_index];
        input[min_index] = input[i];
        input[i] = temp; 
    }
}


int main()
{
    int input[] = {3, 1, 2, 5, 3, 7};
    selectionSort(input, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << input[i] << " ";
    }

    cout << endl;
}