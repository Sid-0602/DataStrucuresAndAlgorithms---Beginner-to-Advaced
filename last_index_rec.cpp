#include<iostream>
using namespace std;

int lastIndex(int input[], int size, int x) {
    bool flag= false;
    if(size < 0){
        return -1;
    }

    if(input[size] == x){
        return size;
        flag = true;
    }

    if(flag==true){
        if(input[0] == x){
            return 1;
        }
    }

    else{
        int small_arr = lastIndex(input+1, size-1, x);
        if(size > 0){
            return (1+small_arr);
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
    
    cout << lastIndex(input, n, x) << endl;

}
