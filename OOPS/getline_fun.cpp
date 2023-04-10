
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char input1[100];
    char str[100];
    cin.getline(input1, 100); // it skips spaces and tabs.
    cout << "The first string is: " << input1 << endl;
    cin.getline(str, 100, 'j');
    cout << "Second string with delimiter is: " << str << endl;
}