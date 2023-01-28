#include<iostream>
using namespace std;


int firstIndex(int input[], int size, int x){
   
  if (input[0] == x && size > 0) {
    return true;
  }

  else if (size == 0) {
    return -1;
  }

  else {
    int small_arr = firstIndex(input+1, size-1, x);
    if(small_arr >=0){
        return (small_arr + 1);
    }
    else{
        return (small_arr);
    }
}
}

int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    cout << firstIndex(input, n, x) << endl;

}


