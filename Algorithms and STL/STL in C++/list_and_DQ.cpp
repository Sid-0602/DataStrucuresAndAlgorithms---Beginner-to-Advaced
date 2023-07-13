#include <bits/stdc++.h>
using namespace std;

int main(){

    //LIST CONTAINER: 
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


    //DQ CONTAINER:
    //it has same functionlaities as of list and vector, with both push_back and push_front operations.
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(3);
    dq.emplace_front(4);
    dq.pop_back();
    dq.pop_front();

    cout<<dq.front()<<" "<<dq.back()<<endl;
    


}