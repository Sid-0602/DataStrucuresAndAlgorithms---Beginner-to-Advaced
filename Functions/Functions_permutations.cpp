#include <iostream>
using namespace std;

//function declarations

int fact(int n){
    int ans=1;
    int i=1;
    while(i<=n){
        ans=ans*i;
        i++;
    }

    return ans;
}

int main(){


    int n,r;
    cin>>n>>r;

    int fact_n=fact(n);
    int fact_r=fact(r);
    int fact_n_r=fact(n-r);

    cout<<fact_n/(fact_r*fact_n_r);

    //Conventional code to calculate permutation.
    /*int n,r;
    cin>>n>>r;

    int fact_n=1;
    int i=1;

    while(i<=n){
        fact_n=fact_n*i;
        i++;
    }

    int fact_r=1;
    int j=1;
    while(j<=r){
        fact_r=fact_r*j;
        j++;
    }

    int fact_n_r = 1;
    int k = 1;
    while (k <= n-r)
    {
        fact_n_r = fact_n_r * k;
        k++;
    }

    cout<<fact_n/(fact_r*fact_n_r)<<endl; */

    return 0;
}