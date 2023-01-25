#include <iostream>
using namespace std;

int countZeros(int n)
{
    // Write your code here
    if(n==0){
        return 1;
    }
    else if(n<=1){
        return 0;
    }
    else{
        int last_dig=n%10;
        int smallnum=n/10;
        if(last_dig==0){
            return (1 + countZeros(smallnum));
        }
        else{
            return countZeros(smallnum);
        }
    }
}

int main()
{
    int n;
    cin >> n;
    cout << countZeros(n) << endl;
}
