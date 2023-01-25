#include <iostream>
using namespace std;

int multiplyNumbers(int m, int n)
{
    // Write your code here
    if(n<=0){
        return 0;
    }
    
    else{

        int smallmul= multiplyNumbers(m,n-1) + m;
        return (smallmul);
    }
}

int main()
{
    int m, n;
    cin >> m >> n;
    cout << multiplyNumbers(m, n) << endl;
}
