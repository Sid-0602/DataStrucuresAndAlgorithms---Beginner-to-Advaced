#include <iostream>
#include <cstring>
#include <string>
using namespace std;

//User defined function for string compare: 
bool strcomp(char input1[], char input2[]){
    int size=strlen(input1);
    if(strlen(input1) == strlen(input2)){
        for(int i=0; i< size; i++){
            int asc1= input1[i];
            int asc2= input2[i];

            if(asc1 - asc2!=0){
                return false;
            }

            else{
                return true;
            }
        }

    }

    return false;
}

void printprefix(char input3[]){
    //i represents end index of prefix
    for(int i=0; input3[i]!='\0';i++){
        //j represents start index of prefix
        for(int j=0; j<=i; j++){
            cout<<input3[j];
        }

        cout<<endl;
        
    }
}

int main()
{
    char str[100];
    cin.getline(str,100);
    cout<<"Size of character array is: "<< strlen(str) << endl;

    char input1[100];
    char input2[100];
    char input3[10] = "abxy";

    cin.getline(input1,100);
    cin.getline(input2,100);
    
    if(strcmp(input1, input2)==0){
        cout<<"true"<<endl;
    }
    else{
        cout<< "false" <<endl;
    }

    //Copying content of one string into the other: 
    cout<< "Before copying: "<<endl;
    cout<< "Input 1 string : "<< input1 << endl;
    cout << "Input 2 string : " << input2 << endl;

    strcpy(input1, input2);

    cout << "After copying: " << endl;
    cout << "Input 1 string : " << input1 << endl;
    cout << "Input 2 string : " << input2 << endl;

    strncpy(input2, input3, 4);

    cout<<" Input 2 after copying: "<< input2 <<endl;

    //printing prefixes: 
    cout<<"Printed prefixes are: "<<endl;
    printprefix(input3);




}


