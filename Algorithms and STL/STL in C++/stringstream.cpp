// A stringstream associates a string object with a stream allowing you to read from the string as if it were a stream (like cin)
/* 

    Basic methods are:

    clear()- To clear the stream.
    str()- To get and set string object whose content is present in the stream. 
    operator <<- Add a string to the stringstream object. 
    operator >>- Read something from the stringstream object.


*/

// Example to count the number of words in sentence: 

#include <bits/stdc++.h>
using namespace std; 


int countWords(string str){
    // Breaking input into word
    // using string stream

    stringstream s(str);
    //this is used to store the individual words:
    
    string word;

    int count = 0;
    while(s>>word){
        count++;
    }


    return count;
}


int main(){
    string s = "Hello World! How are you ?";
    cout<<"The words in string are: "<<countWords(s)<<endl;
}