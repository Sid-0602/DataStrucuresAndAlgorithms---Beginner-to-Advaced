/* Given an undirected graph G(V,E), check if the graph G is connected graph or not. */

#include <bits/stdc++.h>
using namespace std;


bool isConnectedBFS(int **edges, int n, int start, bool* visited){
    queue<int> pendingVertex;
    pendingVertex.push(start);  

    visited[start]=true;
    while(!pendingVertex.empty()){
        int current = pendingVertex.front();
        pendingVertex.pop();

        for(int i=0;i<n;i++){
            if(current==i){continue;}
            if(edges[current][i]==1 && !visited[i]){
                pendingVertex.push(i);
                visited[i]=true;
            }
        }
        
    }

    for(int i=0;i<n;i++){
        if(!visited[i]){
            return false;
        }
    }

    return true;
}

bool isConnected(int** edges, int n, int start){
    bool *visited = new bool[n];

    for(int i=0;i<n;i++){
        visited[i]=false;
    }

    return (isConnectedBFS(edges,n,start,visited));
}


void print_bfs(int **edges, int n, int sv, bool *visited){
    queue<int> pendingVertex; 
    pendingVertex.push(sv);
    visited[sv]=true;

    while(!pendingVertex.empty()){
        int currentIndex = pendingVertex.front();
        pendingVertex.pop();
        cout<<currentIndex<<endl;
        for(int i=0;i<n;i++){
            if(currentIndex==i){continue;}
            if(edges[currentIndex][i]==1){
                if(visited[i]){continue;}
                pendingVertex.push(i);
                visited[i]=true;
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

    
    cout<<"This is BFS for the graph: "<<endl;
    bfs(edges,n);

    cout<<endl;

    cout<<"Give the start index to start from : "<<endl;
    int start;
    cin>>start;
    cout<<"Is the graph connected??"<<endl;
    cout<< isConnected(edges,n,start)<<endl;

}