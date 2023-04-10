#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;

int counter=0;
void print_subs(string input, string output){
    if(input.empty()){
        cout<<output<<endl;
        return;
    }

    print_subs(input.substr(1),output);  //passing input with one reduced character (exclude first one), and taking decision of not passing the first character to output.
    print_subs(input.substr(1),output + input[0]); ///passing input with one reduced character (exclude first one), and taking decision of  passing the first character to output.
    
}
int main(){

    string input;
    cin>>input;
    string output ="";
    print_subs(input,output);

}