#include <iostream>
#include <cstring>
using namespace std;

void remove_x(char s[]){

    //base value is empty string
    if(s[0] == '\0'){
        return;
    }
    int i=1;
    if(s[0]!= 'x'){
        remove_x(s+1);
    } 
    else{
        for(i=1;s[i] != '\0'; i++){
            s[i-1] = s[i];
        }
        s[i-1]=s[i];
        remove_x(s);
    }
}

int main(){
    char str[100];
    cin>>str;
    remove_x(str);
    cout<<"The string without x is: " << str <<endl;
}