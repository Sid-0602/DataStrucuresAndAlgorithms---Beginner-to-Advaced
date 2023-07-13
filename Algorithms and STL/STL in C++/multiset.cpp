#include <bits/stdc++.h>
using namespace std;

int main(){
    
    multiset<int>ms;

    //insert elements:
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(2);
    ms.insert(2);
    ms.insert(3);
    ms.insert(3);
    ms.insert(3);

    multiset<int,greater<int>>::iterator itr;

    for(itr = ms.begin();itr!=ms.end();++itr){
        cout<<*itr<<" ";
    }

    cout<<endl;
    ms.erase(1); //this erases all occurrences of that element in that multiset. 

    multiset<int,greater<int>>::iterator itr1;

    for(itr1 = ms.begin();itr1!=ms.end();++itr1){
        cout<<*itr1<<" ";
    }
    cout<<endl;
    int ct = ms.count(2); //this gives frequency of that element. 

    multiset<int,greater<int>>::iterator itr2;

    for(itr2 = ms.begin();itr2!=ms.end();++itr2){
        cout<<*itr2<<" ";
    }
    cout<<endl;
    ms.erase(ms.find(3)); //this will erase single element at that address

    multiset<int,greater<int>>::iterator itr3;
    for(itr3 = ms.begin();itr3!=ms.end();++itr3){
        cout<<*itr3<<" ";
    }
}