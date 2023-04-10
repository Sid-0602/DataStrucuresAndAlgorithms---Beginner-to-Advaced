#include <iostream>
#include <cstring>
using namespace std;

bool isPermutation(char input1[], char input2[])
{
    // Write your code here
    int l1= strlen(input1);
    int l2= strlen(input2);
    int sum1=0;
    int sum2=0;

    if(l1==l2){
        for(int i=0; i<l1; i++){
            int a1= input1[i];
            int a2= input2[i];
            sum1=sum1 + a1;
            sum2=sum2 + a2;

        }

        if(sum1 == sum2){
            return true;
        }
        else{
            return false;
        }
    }

    else{
        return false;
    }

    
}
int main()
{
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}