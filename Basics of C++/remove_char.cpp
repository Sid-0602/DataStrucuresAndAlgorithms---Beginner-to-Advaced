#include <iostream>
#include <cstring>
using namespace std;

void removeAllOccurrencesOfChar(char input[], char c)
{
    // Write your code here
    int counter = 0;
    int j, n=strlen(input);

    for (int i = j = 0; i < n; i++)
        if (input[i] != c)
            input[j++] = input[i];

    input[j] = '\0';
}
int main()
{
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    char c;
    cin >> c;
    removeAllOccurrencesOfChar(str, c);
    cout << str;
}