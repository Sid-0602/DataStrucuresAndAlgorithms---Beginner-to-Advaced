#include <bits/stdc++.h>
using namespace std;

/*THIS IS FUNCTIONAL EXECUTION */
/* THIS PATTERN , FUNCTION RETURNS A VALUE*/

/* COMMON FORM OF FUNCTIONAL RECURSION:  
    
    return (n + f(n-1)); 

*/

int SumOfnNumbers(int n){

    //base case: sum of 1st number is 1: 
    if(n==1){return 1;}

    //functional recursive call: 

    return (n+SumOfnNumbers(n-1));
}

int main(){
    int n;
    cin>>n;

    int sum = SumOfnNumbers(n);

    cout<<"Sum of N numbers using functional recursion method: "<<sum<<endl;
}
