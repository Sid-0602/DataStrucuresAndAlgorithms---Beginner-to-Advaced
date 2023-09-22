#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int i, string s, int n){

    //base case: 
    if(i>=n/2){return true;}

    if(s[i]!=s[n-i-1]){return false;}

    isPalindrome(i+1,s,n);
}

int main(){
    string s;
    cin>>s;
    int n = s.size();
    bool flag = isPalindrome(0,s,n);
    cout<<"The string is palindrome: "<<flag<<endl;
}