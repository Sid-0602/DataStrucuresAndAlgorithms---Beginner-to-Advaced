#include <iostream>
#include <cstring>
using namespace std;

void merge(int input[], int l, int mid, int r){
    //creating size of a and b arrays: 
    int n1 = mid-l+1;
    int n2= r-mid;
    //Constructing 2 temporary arrays: 
    int a[n1];
    int b[n2];

    //filling a and b array with the elements from start -> mid and mid+1 -> end:
    for(int i=0; i<n1;i++){
        a[i] = input[l+i];
    }

    for(int i=0; i<n2; i++){
        b[i] = input[mid+1+i];
    }

    //initize the varaibles i,j and k for using them as pointers:
    int i=0;
    int j=0;
    int k=l;
    //comparing a[i] and b[j] and then filling them into input[k]:
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            input[k] = a[i];
            k++;
            i++;
        }
        else{
            input[k] =b[j];
            k++;
            j++;
        }
    }

    //if j pointer runs to end before i, then this loop fills value of remaining elements in a array in sorted order.
    while(i<n1){
        input[k] = a[i];
            k++;
            i++;
    }
    //if i pointer runs to end before j, then this loop fills value of remaining elements in b array in sorted order.
    while(j<n2){
        input[k] = b[j];
            k++;
            j++;
    }

}

void mergeSort1(int input[], int l, int r){

    if(l<r){
        int mid= (l+r)/2;

        //calling mergesort function recursively for first half of array.
        mergeSort1(input,l,mid);
        //calling mergesort function recursively for last half of array.
        mergeSort1(input,mid+1,r);

        //calling merge function.
        merge(input, l, mid, r);
        
    }

}

void mergeSort(int input[] ,int size){
 mergeSort1(input,0,size);

}



int main() {
  int length;
  cin >> length;
  int* input = new int[length];
  for(int i=0; i < length; i++)
    cin >> input[i];
  mergeSort(input, length);
  for(int i = 0; i < length; i++) {
    cout << input[i] << " ";
  }
}