#include <iostream>
using namespace std;

// input - input array
// size - length of input array
// element - value to be searched

int binarySearchhelper(int arr[], int l, int r, int element)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == element){
            return mid;
        }
        if (arr[mid] > element){
            return binarySearchhelper(arr, l, mid - 1, element);
        }

        return binarySearchhelper(arr, mid + 1, r, element);
    }
    return -1;
}
int binarySearch(int input[], int size, int element) {
    // Write your code here

    return (binarySearchhelper(input,0,size-1,element));

}


int main() {
    int input[100000],length,element, ans;
    cin >> length;
    for(int i =0;i<length;i++)
    { 
        cin >> input[i];;
    }

    cin>>element;
    ans = binarySearch(input, length, element);
    cout<< ans << endl;
}
