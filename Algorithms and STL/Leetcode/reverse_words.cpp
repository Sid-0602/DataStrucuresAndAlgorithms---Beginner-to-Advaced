#include <bits/stdc++.h>
using namespace std;


string reverseWord(string s){
    string ans;

    int i=0;
    int n = s.length();

    while (i<n){
        while(i<n && s[i]==' ') i++;
        int j = i+1;
        while(j<n  && s[j]!=' ') j++;
        string sub = s.substr(i,j-i); //this will collect the word b/w i and j;
        if(ans.length()==0){ans = sub;}
        else{
            ans = sub + ' ' + ans;
        }
        i = j+1; 
    }
    
    return ans;
    
    
}



int main(){
    string str = "  hello  world!!  ";
    string ans = reverseWord(str);
    cout<<ans<<endl;
}