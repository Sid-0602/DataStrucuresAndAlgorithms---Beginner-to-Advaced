#include <iostream>

using namespace std;

int main(){
    int i,j,n;
    cin>>n;
    cout<<"The pattern is: "<<endl;
    i=1;
    while(i<=n){
        j=1;
        while(j<=i){
            cout<<j;
            j=j+1;
        }

        cout<<endl; //It jumps on next line of pattern.
        i=i+1;
    }

}