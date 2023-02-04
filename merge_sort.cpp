#include <iostream>
#include <cstring>
using namespace std;

void merge(int input[], int l, int mid, int r){

    int n1 = mid-l+1;
    int n2= r-mid;
    //Constructing 2 temporary arrays: 
    int a[n1];
    int b[n2];

    for(int i=0; i<n1;i++){
        a[i] = input[l+i];
    }

    for(int i=0; i<n2; i++){
        b[i] = input[mid+1+i];
    }

    int i=0;
    int j=0;
    int k=l;

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

    while(i<n1){
        input[k] = a[i];
            k++;
            i++;
    }

    while(j<n2){
        input[k] = b[j];
            k++;
            j++;
    }

}

void mergeSort1(int input[], int l, int r){

    if(l<r){
        int mid= (l+r)/2;
        mergeSort1(input,l,mid);
        
        mergeSort1(input,mid+1,r);

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