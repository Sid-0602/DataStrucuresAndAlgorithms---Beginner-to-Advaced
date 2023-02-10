#include <iostream>
using namespace std;

int main(){

    int n=10; //here the outer loop runs and with it, the inner loops runs only once with each iteration.

    cout<<"*********THE TIME COMPLEXITY OF THE FOLLOWING CODE IS: O(N) *************"<<endl;
    for(int i = 0; i < n; i++){
    for(; i < n; i++){ 
        cout << i << endl;
    }
}
}