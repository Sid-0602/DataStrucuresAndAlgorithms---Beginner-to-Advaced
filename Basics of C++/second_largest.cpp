#include <iostream>
using namespace std;

int findSecondLargest(int *input, int n)
{
    // Write your code here
    for (int i = 0; i < n; i++)
    {
        int min = input[i];
        int min_index = i;

        for (int j = i + 1; j < n - 1; j++)
        {
            if (input[j] < min)
            {
                min = input[j];
                min_index = j;
            }
        }

        int temp = input[i];
        input[i] = input[min_index];
        input[min_index] = temp;
    }

    int second_largest = INT_MIN;
    int max = INT_MIN;

    for(int j=0; j<n; j++){
        if(input[j]>max){
            max=input[j];
        }
    }

    for(int j=0;j<n;j++){
        if(input[j]>second_largest && input[j]<max){
            second_largest = input[j];
        }
    }
    cout<<"Maximum element is: "<<max<<endl;
    cout<<"second max element is: "<<second_largest<<endl;
    
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

        cout << findSecondLargest(input, size) << endl;

        delete[] input;
    }

    return 0;
}