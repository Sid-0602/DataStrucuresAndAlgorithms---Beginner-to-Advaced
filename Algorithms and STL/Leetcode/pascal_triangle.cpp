#include <bits/stdc++.h>
using namespace std;



long long nCr(int R, int C){
    int n=R-1;
    int r=C-1;

    long long ans =1;
    for(int i=0;i<r;i++){
        ans = ans*(n-i);
        ans = ans/(i+1);
    }

    return ans; 
}

void printRrow(int R, int C){  
    
    long long ans = 1;
    cout<<ans<<" ";
    for(int i=1;i<R;i++){
        ans = ans*(R-i);
        ans = ans/i;
        cout<<ans<<" ";
    }
}

vector<int> generateRow(int row){
    long long ans = 1;
    vector<int> ansVector; 
    ansVector.push_back(ans);
    for(int i=1;i<row;i++){
        ans = ans * (row-i);
        ans = ans/i;
        ansVector.push_back(ans);
    }

    return ansVector; 
}

vector<vector<int>> printPascalTriangle(int row){
    vector<vector<int>> pascalTri;
    for(int i=1;i<=row;i++){
        pascalTri.push_back(generateRow(i));
    }

    return pascalTri;

}

int main(){
        int R,C;
        cout<<"Give input for R and C"<<endl;
        cin>>R;
        cin>>C;

        cout<<"Element at that position is: "<<nCr(R,C)<<endl;

        cout<<"The nth row elements are: "<<endl;
        printRrow(R,C);

        vector<vector<int>> ans = printPascalTriangle(R);
}
