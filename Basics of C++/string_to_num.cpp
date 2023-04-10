#include <iostream>

using namespace std;

int stringToNumber(char input[]){
    //base case: empty string:

    if(input[0]=='\0'){
        return '0';
    }
    else if(input[0] == '0'){
        return stringToNumber(input+1);
    }
    else{
        int y=atoi(input);
    }
}

int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}
