#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string s= "abc";
    cout<<s<<endl;
    s="defdef";
    cout<<"After change: "<<s<<endl;
    s[0] = 'x';
    s[1] = 'y';
    cout<<"Replaced singe characters: "<<s<<endl;

    
    //dynamic allocation of string: 
    string* sp = new string;
    *sp = "def";
    cout<<"The string is: "<<*sp<<endl;
    cout<<"The address of string is: "<<sp<<endl;

    string s2="coding";
    //getline(cin,s2);
    //cout<<"Output string is: "<<s2<<endl;

    //con-catanate strings:

    string s3 = s + s2;
    cout<<"Joined string is: "<<s3<<endl;

    cout<<"Size of string s is: "<<s.size()<<endl;

    //substring of a string: 

    cout<<"Substring from index 3: "<<s.substr(3)<<endl;
    cout<<"Substring from index 3 to 2 next digits: "<<s.substr(3,2)<<endl;

    //finding a substring/string:
    cout<<"Finding in string: "<<s.find("def")<<endl;

}