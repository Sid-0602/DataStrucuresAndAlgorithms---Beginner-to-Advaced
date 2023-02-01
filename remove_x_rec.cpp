#include <iostream>
#include <cstring>
using namespace std;

void remox(char s[]){
    //base case:
    if(s[0] == '\0'){
        return;
    }
    //if char is not x:
    if(s[0] !='x'){
        remox(s+1);
    }

    //if the char is x:
    else{
        int i=1;
        for(;s[i]='\0';i++){
            s[i-1]=s[i];
        }
        s[i-1]=s[i];
        return remox(s); 
    }

}

int main(){
    char str[100];
    cin>>str;
    remox(str);
    cout<<"The string without x is: " << str <<endl;
}