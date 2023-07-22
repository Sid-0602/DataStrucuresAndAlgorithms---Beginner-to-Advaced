#include <bits/stdc++.h>
using namespace std;


string uniqueChar(string str) {
	// Write your code here
    unordered_set<char> seenChars;
    string ans; 
    for(char c: str){
        if(seenChars.find(c) == seenChars.end()){
            ans+=c;
            seenChars.insert(c);
        }
    }


    return ans;
    
	
}
int main() {
    string str;
    cin >> str;
    cout << uniqueChar(str);
}