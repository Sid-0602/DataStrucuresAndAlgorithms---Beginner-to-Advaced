#include <iostream>

using namespace std;

int powRec(int x, int n, int ans){
    if(n<=0){
        return ans;
    }
    ans = ans*x;
    return powRec(x,n-1,ans);
}
int pow(int x,int n){
    int ans = 1;
    for(int i=0;i<n;i++){
        ans = ans*x;
    }
    return ans;
}
int main()
{
    cout<<"Hello World"<<endl;
    
    int ans = pow(2,4);
    cout<<"POW :"<<ans<<endl;
    
    int ansRec = powRec(2,4,1);
    cout<<"POW REC: "<<ansRec<<endl;
    return 0;
}