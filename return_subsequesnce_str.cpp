#include <iostream>
#include <cstring>
using namespace std;

int subs(string input, string output[]){
    if(input.empty()){  //this checks if string is empty: 
        output[0] = "[ ]";
        return 1;
    }
    
    string smallstring = input.substr(1);
    int smalloutputSize = subs(smallstring,output); //this fills output with all other combinations without first substring:
    for(int i =0 ; i<smalloutputSize;i++){
        output[i + smalloutputSize] = input[0] + output[i];
    }
    return 2 * smalloutputSize;

}

int main(){
    string input;
    cin>>input;
    string * output = new string[1000];
    int count = subs(input, output);
    for(int i=0;i<count;i++){
        cout<<output[i]<<endl;
    }
}