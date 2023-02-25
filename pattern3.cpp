#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int i;
    i=1;
    
    while(i<=n){
        int val = i;
        int k=1;
        while(k<=n-i){
            cout<<" ";
            k=k+1;
        }
        int j=1;
        while(j<=i){
            cout<<val;
            j=j+1;
            val=val+1;
        }
        cout<<endl;
        i=i+1;

    }
}