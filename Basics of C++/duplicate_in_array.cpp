
#include <iostream>
using namespace std;


int findDuplicate(int *arr, int n)
{
    //Write your code here

    int ans=0;

    for(int j=0;j<n;j++){
        for(int i=j+1; i<n;i++){
            if(arr[i] == arr[j]){
                ans = arr[i];
                break;
            }
        }
    }

    return (ans);
    
    
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

		cout << findDuplicate(input, size) << endl;
	}

	return 0;
}