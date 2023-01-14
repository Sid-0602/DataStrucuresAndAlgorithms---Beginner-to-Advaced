#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;

void trimSpaces(char input[])
{
    // Write your code here
    
    string fin="";
    int len= strlen(input);
    int counter= 0;
    for (int i = 0; i < len; i++)
    {
        if (input[i] == ' ')
        {
            for (int j = i; j < len; j++)
            {
              input[j] = input[j + 1];
            }
            len--;
        }
    }
}

int main()
{
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}
