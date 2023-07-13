#include <bits/stdc++.h>
using namespace std;


//set is DS that stores the data elements into the following properties: 
//   1. Stores in sorted order (max-heap).
//   2. Stores only uniques among the set.
int main(){

    set<int> st;
    st.insert(1);
    st.emplace(2);
    st.insert(3);
    st.insert(-1);
    st.insert(100);
    st.insert(3);

    auto it = st.find(2);
    cout<<*it<<endl;

    auto it1=st.find(-5);
    cout<<*it1<<endl;
    st.erase(it,it1); //this deletes the element which is being pointed by it and it1.

    auto it3 = st.lower_bound(2);
    auto it4 = st.lower_bound(3);
    cout<<*it3<<endl;
    cout<<*it4<<endl;
}