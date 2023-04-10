#include <iostream>
#include <cstring>
using namespace std;


int length(char s[]){
    //base case: String is empty
    if(s[0] == '\0'){
        return 0;
    }
    else{
        int smallstring= length(s+1);
        return (smallstring + 1);
    }
}
int main(){
    char str[100];
    cin>>str;

    int l= length(str);
    cout<<l<<endl;

}