#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string,int> map;
    map["abc"]=1;
    map["abc1"]=2;
    map["abc2"]=2;
    map["abc3"]=3;
    map["abc4"]=4;
    map["abc5"]=2;
    
    //declaration of iterator: 
    unordered_map<string,int> :: iterator it = map.begin();
    while(it!=map.end()){
        
        cout<<"Key : "<<it->first<<" ";
        cout<<"Value: "<<it->second<<endl;
        
        it++;
    }

    //find
    unordered_map<string,int> ::iterator it2 = map.find("abc");
    //iterator in vector: 
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    vector<int> :: iterator itv=v.begin();
    while(itv!=v.end()){
        cout<<*itv<<" ";
        itv++;
    }
    cout<<endl;



}