#include <iostream>
using namespace std;



int arrayRotateCheck(int *input, int size)
{
    //Write your code here
    int i=0;
    int index=0;
	if(size == 1){
		return 0;
	}
    while(i<size){
        if(input[i+1]<input[i]){
            index = i+1;
            break;
        }
        i++;
    }

    return index;

    
}


int main()
{

	int t;
	cin >> t;
	while (t--)
	{

		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cout << arrayRotateCheck(input, size) << endl;
		delete[] input;
	}
	
	return 0;
}