#include <bits/stdc++.h>
using namespace std;


//vector/array will take huge size for this PS. Hence use maps. 

vector<int> removeDuplicates(int* a,int size){
    vector<int> output;
    unordered_map<int,bool> seen;  //this map will store the elements in format of <int,bool>
    for(int i=0;i<size;i++){
        if(seen.count(a[i])>0){
            continue; //if the element is previously visited, then ignore this step. 
        }
        seen[a[i]]=true; //this will update element to status "seen".
        output.push_back(a[i]); //push_back this element into the output. (It will be unique).
    }

    return output;
}

int main(){
    
    int a[] = {1,2,2,3,3,4,3,1,4,5,6,1,2,2,3};
   
    vector<int> ans = removeDuplicates(a,15);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}