#include <cstring>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


// Change in the given string itself. So no need to return or print anything

void helper(char input[], int s){

    if(input[s] == '\0' || input[s+1] == '\0'){
        return;
    }
    
    helper(input, s+1);

    if(input[s] == 'p' && input[s+1] == 'i'){
        for(int i= strlen(input); i>=s;i--){
            input[i+2] = input[i];
            cout<<"Element "<<input[i]<<" on position "<<i<<" is shifted to position "<<i+2 << " replacing "<<input[i+2]<<endl;
        }

        input[s] = '3';
        input[s+1]='.';
        input[s+2] = '1';
        input[s+3] = '4';
    }

}
void replacePi(char input[]) {
	
    helper(input,0);

}




int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}
