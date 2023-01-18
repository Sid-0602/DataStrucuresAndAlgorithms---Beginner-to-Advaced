#include <iostream>
using namespace std;

void f(const int * p){
    (*p)++; //This is wrong as function cannot change the value passed

}
int main(){
    int const i =10;
    //we cannot store const integers into normal pointers.
    //Pointers have to promise that they will not edit the value of variable.
    int const* p =&i; //p is a pointer to a constant variable.
    

    int j=10; //can be edited.
    int const* p1=&j;
    j++;
    //We cannot do *p1++; as pointe is read only.
    cout<<j<<*p1<<endl;

    int *p3=&j;
    f(p3);


}