#include <bits/stdc++.h>
using namespace std;

bool flag = true; 
bool isAnagram(string s, string t){

    if(s.length()!= t.length()){
        return false;
    }else{
        map<char,int> mps;

        for(int i=0;i<s.length();i++){
            mps[s[i]]++;
        }

        map<char,int> mpt;
        for(int i=0;i<t.length();i++){
            mpt[t[i]]++;
        }

        for(auto it: mps){
            cout<<it.first<<"->"<<it.second<<endl;
        }cout<<endl;
        for(auto it1: mpt){
            cout<<it1.first<<"->"<<it1.second<<endl;
        }

        //compare if the maps are equal. 
        if(mps==mpt){
            return true;
        }else{
            return false;
        }
    }
    
}

int main(){
    string s = "rat";
    string t = "car";

    cout<<"Is it anagram?: "<<isAnagram(s,t)<<endl;

}