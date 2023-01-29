#include <cstring>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


#include <cstring>

void helper(char input[], int s){
    
    if(input[s] == '\0'){
        return;
    }

    helper(input, s + 1);
    
    if(input[s]=='x'){
        for(int i= 0; i<strlen(input);i++){
            input[s+i]  = input[s+i+1];
        }
    }

    
    

}
// Change in the given string itself. So no need to return or print anything

void removeX(char input[]) {
    // Write your code here
    helper(input,0);

}

int main() {
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}
