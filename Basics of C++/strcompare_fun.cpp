#include <iostream>
#include <cstring>
#include <string>
using namespace std;

// User defined function for string compare:
bool strcomp(char input1[], char input2[])
{
    int size = strlen(input1);
    if (strlen(input1) == strlen(input2))
    {
        for (int i = 0; i < size; i++)
        {
            int asc1 = input1[i];
            int asc2 = input2[i];

            if (asc1 - asc2 != 0)
            {
                return false;
            }

            else
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{

    char input1[100];
    char input2[100];
    
    cout<< " Input the string: " <<endl;
    cin.getline(input1, 100);
    cin.getline(input2, 100);

    cout << "*******************Using inbuilt function****************" << endl;
    if(strcmp(input1, input2)==0){
        cout<<"true"<<endl;
    }
    else{
        cout<< "false" <<endl;
    }

    cout << "*******************Using User-Defined function****************" << endl;
    cout << " The strings are: ";

    if (strcomp(input1, input2) == 0)
    {
        cout << " NOT EQUAL" << endl;
    }
    else
    {
        cout << " EQUAL" << endl;
    }
}
