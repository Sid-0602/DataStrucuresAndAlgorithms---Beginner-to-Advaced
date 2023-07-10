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
    v.push_back(3);
    v.push_back(4);

    vector<pair<int,int>>vec; //this will create a vector with data type as pair.
    vec.push_back({1,2});
    vec.emplace_back(1,2); //emplace will know that this is pair value and it will push_back it into the array. 



    //concept of iteration in STL:
    
    vector<int> :: iterator it = v.begin(); //iterator will point to the start of vector memory address.
    cout<<"ITERATOR BEGIN"<<endl;
    cout<<*(it)<<endl;
    it++; //this shift the pointer to next element address.
    cout<<*it<<endl;

    cout<<"ITERATOR END"<<endl;
    vector<int> :: iterator it_e = v.end(); //iterator will point to the end of vector memory address.
    cout<<"This gives next memory location of last element (hence, garbage) : "<<*it_e<<endl;
    it_e--;
    cout<<*it_e<<endl;

    /*

    This is used to treat the vector in reverse manner and then point the rend to start and rbegin to end of vector.
    cout<<"ITERATOR REND AND RBEGIN"<<endl;
    vector<int>::iterator it_re = v.rend();
    vector<int>::iterator it_rbg = v.rbegin();

    */

    // looping vector using iterator: 

    for(vector<int>::iterator it = v.begin();it!=v.end();it++){
        cout<<"Looping using iterator: "<<*it<<endl;
    }
    
    //the same code can be written using "auto" operator: 

    for(auto it = v.begin();it!=v.end();it++){
        cout<<"Looping using auto assign operator "<<*it<<endl;
    } 

    //Using for-each Loop: 

    cout<<"FOREACH LOOP"<<endl;
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;







}