#include <iostream>
using namespace std;

bool is_prime(int n){
    int i=2;
    while(i<=n){
        if(n%i==0){
            return false;
        }
    }

    return true;
}

int main(){
    int r;
    cin>>r;
    bool ans=is_prime(r);

    cout<<"The number is : "<<endl;
    //cout << "0-> Non-Prime" << endl;
    //cout<<"1-> Prime Number"<<endl;
    cout<<ans<<endl;
}

    