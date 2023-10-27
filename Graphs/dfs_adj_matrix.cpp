#include <bits/stdc++.h>
using namespace std;



void print(int** edges, int n, int sv, bool* visited){
    cout<<"Starting vertex: "<<sv<<endl;
    visited[sv]=true; //mark this as visited.
    for(int i=0;i<n;i++){
        if(i==sv){ continue;}
        if(edges[sv][i]==1){
            if(visited[i]){continue;}
            print(edges,n,i,visited); //if edge is present, then starting index is replaced by i for further recursive call.

        }
    }
}   

int main(){
    int n,e;
    cout<<"Enter vertices and edges: "<<endl;
    cin>> n >>e;
    int ** edges = new int*[n];
    for(int i=0;i<n;i++){
        edges[i]= new int[n];
        for(int j=0;j<n;j++){
            edges[i][j] = 0;
        }
    }

    for(int i=0; i<e;i++){
        int f,s; //input first and second vertex: 
        cin>>f>>s;
        edges[f][s]=1;
        edges[s][f]=1;
    }

    bool* visited = new bool[n]; //maintain an array for visited node

    //initialise everything with false first.
    for(int j=0;j<n;j++){
        visited[j]=false;
    }
    
    print(edges,n,0,visited);

}