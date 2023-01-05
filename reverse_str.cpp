#include <iostream>
#include <cstring>
using namespace std;

int length(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != 0; i++)
    {
        count++;
    }

    return count;
}

void reversestr(char str[])
{
    int len = length(str);
    int i = 0, j = len - 1;

    while (i < j)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
}
int main()
{
    char str[100];
    cin.getline(str, 100);
    cout << "Without reversing the string: " << str << endl;
    reversestr(str);
    cout << "After reversal: " << str << endl;
}