#include <iostream>
using namespace std;

int length(char input[])
{
    int count = 0;
    int i = 0;
    while (input[i] != '\0')
    {
        count++;
        i++;
    }

    return count;
}

int main()
{
    char name[100];
    cout << "Enter your name: " << endl;
    cin >> name;
    // name[3]='d';
    // name[4]='x';
    // name[1]='/0';
    cout << "Entered name is: " << name << endl;
    cout << "Length of string is: " << length(name) << endl;
}