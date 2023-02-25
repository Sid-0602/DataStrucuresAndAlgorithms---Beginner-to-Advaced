#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int i=1;

    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<j;
            j++;

            if(j>i){
                break;  //break does work for pattern printing. 
            }
        }

        cout<<endl;
        i++;
    }


    // Prime-Non prime nums:

    /*
        int n;
        cin >> n;
        bool divided = false;
        // int d=2;
        /*while(d<n){
            if(n%d==0){
                divided=true;
                break;            //Break will discontinue the while/for loop outside of if-else conditions.
            }
            d++;
        }


        // for loop:
        */

       /*

    for (int d = 2; d < n; d++)
    {
        if (n % d == 0)
        {
            divided = true;
            cout << "First Divided by: " << d << endl;
            break;
        }
        }

        if (divided)
        {
            cout << "It is not a  prime!";
        }
        else
        {
            cout << "PRIME";
        }

        return 0;

        */
    
}