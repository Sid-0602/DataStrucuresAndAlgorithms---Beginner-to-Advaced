#include <iostream>
using namespace std;

int staircase(int n){
    /* Don't write main().
     *  Don't read input, it is passed as function argument.
     *  Return output and don't print it.
     *  Taking input and printing output is handled automatically.
     */

    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
     else{
        cout<<"Current step is: "<<n<<endl;
        return (staircase(n-3) + staircase(n-2) + staircase(n-1));
     }
    
}

int main() {
    int n, output;
    cin >> n;
    output=staircase(n);
    cout<< output <<endl;
}
