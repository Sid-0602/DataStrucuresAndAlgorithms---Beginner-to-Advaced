#include <iostream>
#include <cstring>
using namespace std;

void swap(int input[],int i, int j){
	int temp=input[i];
	input[i]=input[j];
	input[j] =temp;
}

int partition(int input[],int start, int end){
	int pivot = input[end];
	int i=start-1;
	for(int j=start;j<end;j++){
		if(input[j]<pivot){
			i++;
			swap(input,i,j);
		}
	}
	swap(input,i+1,end);
	return i+1;


}
void quickSort1(int input[], int start, int end){
    // your code goes here 
	if(start<end){
	int pi = partition(input,start,end);

	quickSort1(input,start,pi-1);
	quickSort1(input,pi+1,end);
	}

            
}


void quickSort(int input[], int size){
    		quickSort1(input, 0, size - 1);
}


int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    quickSort(input, n);
    for(int i = 0; i < n; i++) {
        cout << input[i] << " ";
    }
    
    delete [] input;

}
