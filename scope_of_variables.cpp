#include <iostream>
using namespace std;


int main(){
    int i=0;
    cout<<i<<endl;

    if(i==10){
        //Local declaration of 
        //scope of j: j is only applicable for this condition.
        int j=12; //j is available only in this if condition.
        cout<<j<<endl;
    }
    
    /*Variable declared inside any loop/if-else 
    condition will remain private for this specific condition only */
    
}