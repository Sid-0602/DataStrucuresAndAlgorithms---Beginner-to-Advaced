/* DFS/BFS for disconnected graph components */
#include <bits/stdc++.h>
using namespace std;


void bfs(int **edges, int n){

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


void dfs(int **edges, int n){
    bool *visitedDFS = new bool[n];
    for(int i=0;i<n;i++){
        visitedDFS[i]=false;
    }
    
    //check for unvisited vertex and call it: 
    for(int i=0;i<n;i++){
        //if the vertex is not visited, then call the vertex with i as starting index.
        if(!visitedDFS[i]){
            print_dfs(edges,n,i,visitedDFS);
        }
    }
    
    delete[] visitedDFS;
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
    
    cout<<"This is DFS for the graph: "<<endl;
    dfs(edges,n);

    cout<<"This is BFS for the graph: "<<endl;
    bfs(edges,n);
}