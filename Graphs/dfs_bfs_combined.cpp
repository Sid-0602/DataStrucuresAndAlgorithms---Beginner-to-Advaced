#include <bits/stdc++.h>
using namespace std;


void print_bfs(int **edges, int n, int sv, bool *visitedBFS){
    queue<int> pendingVertex; 
    pendingVertex.push(sv);
    visitedBFS[sv]=true;

    while(!pendingVertex.empty()){
        int currentIndex = pendingVertex.front();
        pendingVertex.pop();
        cout<<currentIndex<<endl;
        for(int i=0;i<n;i++){
            if(currentIndex==i){continue;}
            if(edges[currentIndex][i]==1){
                if(visitedBFS[i]){continue;}
                pendingVertex.push(i);
                visitedBFS[i]=true;
            }
        }

    }
}

void print_dfs(int **edges, int n, int sv, bool *visitedDFS){

    cout<<sv<<endl;
    visitedDFS[sv]=true;
    for(int i=0;i<n;i++){
        if(sv==i){continue;}
        if(edges[sv][i] == 1){
            if(visitedDFS[i]){continue;}
            visitedDFS[i]=true;
            print_dfs(edges,n,i,visitedDFS);
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

    bool* visitedDFS = new bool[n]; //maintain an array for visited node

    //initialise everything with false first.
    for(int j=0;j<n;j++){
        visitedDFS[j]=false;
    }

    bool* visitedBFS = new bool[n]; //maintain an array for visited node

    //initialise everything with false first.
    for(int j=0;j<n;j++){
        visitedBFS[j]=false;
    }
    
    cout<<"This is DFS for the graph: "<<endl;
    print_dfs(edges,n,0,visitedDFS);

    cout<<"This is BFS for the graph: "<<endl;
    print_bfs(edges,n,0,visitedBFS);

}