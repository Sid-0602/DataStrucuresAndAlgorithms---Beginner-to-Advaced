#include <bits/stdc++.h>
using namespace std;

int main(){
    pair<int,int> p = {1,2};
    cout<<p.first<<" "<<p.second<<endl;

    //nested pair: 
    cout<<"Nested Array"<<endl;
    pair<int, pair<int,int>> np = {1,{2,3}};
    cout<<np.first<<" "<<np.second.first<<" "<<np.second.second<<endl;

    //pairs as other data-Structures:

    cout<<"Array of Pairs"<<endl;
    pair<int,int> arr[3] = {{1,2},{4,3},{5,6}};
    cout<<arr[0].first<<" "<<arr[0].second<<endl;
    cout<<arr[1].first<<" "<<arr[1].second<<endl;
    cout<<arr[2].first<<" "<<arr[2].second<<endl;
}