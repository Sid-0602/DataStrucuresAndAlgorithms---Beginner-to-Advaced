#include <iostream>
using namespace std;

int main(){
    //The constant variable makes the variable non-editable. This gives only Read option.
    const int i=10; //intialising constat variable.
    //This cannot be changed anywhere in the code later.

    //Created a constant reference from a non constant int
    int j=12;
    const int &k = j; 
    
    j++;
    //k++ will not work as we have made path of k constant.
    // Hence k++ will not work.

    cout<<k<<endl;

    //constant reference from a const int
    int const j2=10;
    int const &k2 = j2;

    //reference from a const int
    int const j3=123;
    int& k3=j3; //this will not work as we cannot copy a different path which grants us edit access.


}