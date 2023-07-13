#include <bits/stdc++.h>
using namespace std;

int main(){

    //syntax: 
    map<int,int> mp;
    map<int, pair<int,int>> mp1;
    map<pair<int,int>,int>mp2;

    //populating the map mp:
    mp[1]=2;
    mp.insert({2,3});
    mp.insert({-1,3});

    cout<<"The resultant map is: "<<endl;
    map<int,int> ::iterator it = mp.begin();
    while(it!=mp.end()){
        cout<<"key: "<<it->first<<" , Value: "<<it->second<<endl;
        ++it;
    }

    //populating the map mp2:

    mp1[1] = {0,0};
    mp1[2] = {1,2};
    mp1[3] = {0,-1};

    // populating the map mp3:
    mp2[{2,3}]=10;
    mp2[{1,2}]=20;
    mp2[{-1,-1}]=5;
    
    //iterator goes to first index and prints value (i.e it->second).
    auto itr = mp.find(1);
    cout<<itr->second<<endl;

    //iterator goes to second index and prints value (i.e it->second).
    auto itr2 = mp.find(2);
    cout<<itr2->second<<endl;

    //iterator goes to third index and prints value (i.e it->second).
    auto itr3 = mp.find(0);
    cout<<itr3->second<<endl;
}