#include <iostream>
#include <cstring>
using namespace std;


void minLengthWord(char input[], char output[])
{

    int len = strlen(input);
    int si = 0, ei = 0;
    int min_length = len, min_start_index = 0;
    while (ei <= len)
    {
        if (ei < len && input[ei] != ' ')
            ei++;

        else
        {

            int curr_length = ei - si;

            if (curr_length < min_length)
            {
                min_length = curr_length;
                min_start_index = si;
            }

            ei++;
            si = ei;
        }
    }
    for (int i = 0; i < min_length; i++)
    {
        output[i] = input[min_start_index++];
    }
}

int main()
{
    char ch[10000], output[10000];
    cin.getline(ch, 10000);
    minLengthWord(ch, output);
    cout << output << endl;
}
