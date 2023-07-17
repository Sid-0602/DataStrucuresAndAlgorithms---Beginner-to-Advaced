#include <iostream>
using namespace std;


void heapSort(int arr[], int n) {

    //build the heap in input array: 
    // Write your code
    for (int i = 1; i < n; i++)
    {
        int childIndex = i;
        while (childIndex > 0)
        {
            int parentIndex = (childIndex - 1) / 2;
            if (arr[parentIndex] > arr[childIndex])
            {
                int temp = arr[parentIndex];
                arr[parentIndex] = arr[childIndex];
                arr[childIndex] = temp;
            }
            else
                break;
            childIndex = parentIndex;
        }
    }
    int size = n;

    while (size > 1)
    {
        int temp = arr[0];
        arr[0] = arr[size - 1];
        arr[size - 1] = temp;

        size--;

        int parentIndex = 0;
        while (parentIndex < size)
        {
            int leftChildIndex = 2 * parentIndex + 1;
            int rightChildIndex = 2 * parentIndex + 2;
            int minIndex;
            if (leftChildIndex < size && rightChildIndex < size)
                minIndex = (arr[leftChildIndex] <= arr[rightChildIndex]) ? leftChildIndex : rightChildIndex;
            else if (leftChildIndex < size)
                minIndex = leftChildIndex;
            else
                break;
            if (arr[minIndex] < arr[parentIndex])
            {
                int temp = arr[minIndex];
                arr[minIndex] = arr[parentIndex];
                arr[parentIndex] = temp;
            }
            else
                break;
            parentIndex = minIndex;
        }
    }
}



int main() {
    int size;
    cin >> size;

    int *input = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> input[i];
    } 

    heapSort(input, size);

    for (int i = 0; i < size; i++) {
        cout << input[i] << " ";
    } 

    delete[] input;
}