/* DFS/BFS for disconnected graph components */
#include <bits/stdc++.h>
using namespace std;


int divided_components = 0; //this will give number of components graph is divided into. 
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

void bfs(int **edges, int n){
    bool *visitedBSF = new bool[n];

    for(int i=0;i<n;i++){
        visitedBSF[i]=false;
    }

    for(int i=0;i<n;i++){
        if(!visitedBSF[i]){
            print_bfs(edges,n,i,visitedBSF);
        }
    }

    delete [] visitedBSF;
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
            divided_components++;
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

    cout<<"The graph is divided into : "<<divided_components<<" components"<<endl;
}