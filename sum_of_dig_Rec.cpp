#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    // Write your code here
    if(n==0){
        return 0;
    }
    else{
        int small_num =n/10;
        int digit = n%10;

        return (digit + sumOfDigits(small_num));
    }

}


int main() {
   int n;
   cin >> n;
   cout << sumOfDigits(n) << endl;
}


