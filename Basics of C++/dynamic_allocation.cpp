#include <iostream>
using namespace std;

int main()
{   
    //Dynamically allocating the memory and assigning into heap memory.

    int* p=new int;
    *p=10;

    cout<<*p<<endl;
    
    
    
    //Constructing an array:
    int n;
    cout << "Enter number of elements: " << endl;
    cin>>n; 
    
    int* pa=new int[n];
    for(int i=0; i<n; i++){
        cin>>pa[i];
    }

    int max=-1;
    for(int i=0;i<n;i++){
        if(max<pa[i]){
            max=pa[i];
        }
    }

    cout<<max<<endl;




}