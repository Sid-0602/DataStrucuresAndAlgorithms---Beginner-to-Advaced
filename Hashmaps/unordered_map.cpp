#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;


int main(){  
    unordered_map<string,int> ourMap; 

    //insert in unordered maps: 

    // 1st method: 
    pair<string,int> p("abc",1);
    ourMap.insert(p);

    //2nd method:
    ourMap["bcd"] = 2;

    //find/Access the values: 
    cout<<ourMap["abc"]<<" "<<ourMap["bcd"]<<endl;
    cout<<ourMap.at("abc")<<endl;
    
    // accessing the non-existing key: 
    // cout<<ourMap["ghi"]<<endl; --> This gives the output as 0. 

    //check presence: 
    cout<<"Input the key you want to check: "<<endl;
    string s;
    cin>>s;
    if(ourMap.count(s)>0){
        cout<<"Key is present!!"<<endl;
    }else{cout<<"Key not found!!"<<endl;}

    //size function: 
    cout<<"Size of Map: "<<ourMap.size()<<endl;
    ourMap["mnk"] = 2; //inserting one more element

    cout<<"Size of Map: "<<ourMap.size()<<endl;

    //erase am element: 
    cout<<"Enter the string to be erased: "<<endl;
    string es;
    cin>>es;
    if(ourMap.count(es)>0){
        ourMap.erase(es);
        cout<<"The specified string is erased!!"<<endl;
    }
    else{cout<<"The specific string is not present, hence can't be erased!!"<<endl;}

    
}