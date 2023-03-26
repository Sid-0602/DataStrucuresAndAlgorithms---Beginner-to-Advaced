#include <iostream>
using namespace std;

int main(){
    int i=10;
    int j=21;
    
    //CASE 1:
    int const *p1=&i;
    //It is pointer pointing to costant integer. 
    //Hence, (*p++) is not allowed.
    //But we can do reassigning to another variable.
    p1=&j;

    // CASE 2: 
    int *const p2=&i;
    //It is constant pointer pointing to i only. Cannot be reassigned.
    //But it can be manipulated
    (*p2)++;

    //CASE 3:

    int const *const p3=&i;
    //It is constant pointer pointing to constant integer.
    //Both reassigning and manipulation is not allowed.




}