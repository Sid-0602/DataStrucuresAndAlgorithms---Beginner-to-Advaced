#include <iostream>
#include <cstring>
using namespace std;

//int this function and are returning size of output array and filling the array also.
int subs(string input, string output[]){
    if(input.empty()){  //this checks if string is empty 
        output[0] = "[]";
        return 1;
    }
    
    string smallstring = input.substr(1); //it gives us string from next index, i.e from index 1 and not from index 0.
    cout<<"The reduced substring is: "<< smallstring<<endl;
    int smalloutputSize = subs(smallstring,output); //this fills output with all other combinations without first substring.  
    for(int i =0 ; i<smalloutputSize;i++){
        output[i + smalloutputSize] = input[0] + output[i];
    }
    return (2 * smalloutputSize);

}

int main(){
    string input;
    cin>>input;
    string * output = new string[1000];
    int count = subs(input, output); //returns count of all possible subsequences in output array.
    for(int i=0;i<count;i++){
        cout<<output[i]<<endl;
    }
}