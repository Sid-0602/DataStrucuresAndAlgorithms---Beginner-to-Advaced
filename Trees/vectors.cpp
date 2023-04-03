#include <iostream>
#include <vector>
using namespace std;

int main(){ 
    vector<int> v;

    //inserting elements into an vector: 
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    //get elements:
    cout<<v[0]<<" "<<v[1]<<endl;
    cout<<v.at(2)<<endl;  //at function

    //size of vector

    cout<<"Size of vector is: "<<v.size()<<endl;

    //printing vector: 
    cout<<"Vector is: ";
    for(int i=0; i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    //delete last element:

    v.pop_back();
    v.pop_back();

    //printing vector: 
    cout<<"Vector is: ";
    for(int i=0; i<v.size();i++){
        cout<<v.at(i)<<" ";
    }

    cout<<endl;

    //capacity function: 
    cout<<"*********************************"<<endl;
    vector <int> v1;

    for(int i=0;i<100;i++){
        cout<<"capacity: "<< v1.capacity()<<endl;
        cout<<"size: "<< v1.size()<<endl;
        v1.push_back(i+1);
    }


}