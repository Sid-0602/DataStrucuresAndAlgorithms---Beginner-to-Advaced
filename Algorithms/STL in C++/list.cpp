#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> ls;
    for(int i=0;i<10;i++){
        ls.push_back(i*i);
    }
    for(auto it:ls){
        cout<<it<<" ";
    }
    cout<<endl;

    cout<<" Front Operations:"<<endl;
    ls.push_front(100);
    ls.emplace_front(121);

    for(auto it:ls){
        cout<<it<<" ";
    }
    cout<<endl;

    cout<<"Back Operations:"<<endl;
    ls.push_back(144);
    ls.emplace_back(169);
      for(auto it:ls){
        cout<<it<<" ";
    }
    cout<<endl;



}