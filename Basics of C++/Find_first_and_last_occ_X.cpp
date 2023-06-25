#include<bits/stdc++.h>
using namespace std;

bool flag=false;
vector<int>find(int arr[],int n, int x){
    int start=0,end=0;
    
    for(int i=0;i<n;i++){
        
        if(arr[i]==x && flag==false){
            start = i;
            end=i;
            flag=true;
            cout<<"Flag is true at "<<i<<" index"<<endl;
            cout<<endl;
        }

        
        else if(arr[i]==x && flag==true){
            cout<<"At: "<<arr[i]<<" of index "<<i<<endl; 
            cout<<"Before: "<<end<<endl;
            end++;
            cout<<"After: "<<end<<endl;
            
        }
    }

    cout<<endl;
    cout<<"Flag Status: "<<flag<<endl;
    cout<<"Start: "<<start<<endl;
    cout<<"End: "<<end<<endl;
    
    vector<int> ans;
    ans.push_back(start);
    ans.push_back(end);
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}