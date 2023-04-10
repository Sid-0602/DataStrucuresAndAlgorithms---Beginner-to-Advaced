#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    int val=1;
    while(i<=n){
        int j=1; //making j=1 everytime we move to next row.
        while(j<=i){
            cout<<val;
            j=j+1;
            val=val+1;
        }
        cout<<endl;
        i=i+1;

    }
}