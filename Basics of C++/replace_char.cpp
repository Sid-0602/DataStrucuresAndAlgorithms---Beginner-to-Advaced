
#include <iostream>
#include <cstring>
using namespace std;

void replaceCharacter(char input[], char c1, char c2)
{
    int i = 0;
    while (input[i] != '\0')
    {
        if (input[i] == c1)
        {                  // equal to operator
            input[i] = c2; // assignment operator
        }
        i++;
    }
}

int main()
{
    char input[1000000];
    char c1, c2;
    cin >> input;
    cin >> c1 >> c2;
    replaceCharacter(input, c1, c2);
    cout << input << endl;
}