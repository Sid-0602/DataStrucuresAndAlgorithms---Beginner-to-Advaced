#include <bits/stdc++.h>
using namespace std;

int main(){
    //intialise a vector: 

    vector<int> v;
    vector<int> v1(5);  //this makes an vector of size 5.
    vector<int> v2(5,1); //this keeps value 1 at all the places inside the vector.

    //Functions to insert element: 

    v.push_back(1);
    v.emplace_back(2); //this does same work as that of push_back but it is much faster than push_back.

    vector<pair<int,int>>vec; //this will create a vector with data type as pair.
    vec.push_back({1,2});
    vec.emplace_back(1,2); //emplace will know that this is pair value and it will push_back it into the array. 
    

    //concept of itration in STL:



}