#include <iostream>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;


bool isPalRec(char input[],int start, int end){
    if (start == end){
        return true;
    }
    
 
    
    if (input[start] != input[end]){
        return false;
    }
    

    if (start < end + 1){
        return isPalRec(input, start + 1, end - 1);
    }
    
    return true;
    
}
bool checkPalindrome(char input[]) {
    // Write your code here
    int n= strlen(input);

    if(n==0){
        return true;
    }
    else{
        return isPalRec(input,0,n-1);
    }
    
}


int main() {
    char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}
