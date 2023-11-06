/*

    Given an undirected, connected and weighted graph G(V, E) 
    with V number of vertices (which are numbered from 0 to V-1) and E number of edges.
    Find and print the Minimum Spanning Tree (MST) using prims algorithm.

*/

#include <bits/stdc++.h>
using namespace std;

int findMinVertex(int *weights, bool* visited, int n){
    int minVertex= -1;
    for(int i=0;i<n;i++){
        if(!visited[i] && (minVertex==-1 || weights[i] < weights[minVertex])){
            minVertex = i;
        }
    }

    return minVertex;
}

void prims(int** edges, int n){

    //these are storages we will need: 
    int *parent = new int[n];
    int *weights = new int[n];
    bool *visited = new bool[n];

    for(int i=0;i<n;i++){
        visited[i]=false;
        weights[i]=INT_MAX;
    }


    //initialize first vertex with these values: 
    parent[0]=-1;
    weights[0]=0;

    for(int i=0;i<n;i++){
        int minVertex = findMinVertex(weights,visited,n); //this find minVertex among unvisited nodes.
        visited[minVertex]=true;
        //explore unvisited vertex:

        for(int j=0;j<n;j++){
            if(edges[minVertex][j]!=0 && !visited[j]){
                if(edges[minVertex][j]<weights[j]){
                    weights[j] = edges[minVertex][j];
                    parent[j] = minVertex;
                }
            }
        }
    }

    for(int i=0;i<n;i++){
        if(parent[i]<i){
            cout<<parent[i]<<" "<<i<<" "<<weights[i]<<endl;
        }else{
            cout<<parent[i]<<" "<<i<<" "<<weights[i]<<endl;
        }
    }
    

}


int main(){
    int n,e;
    cout<<"Enter number of edges and vertices in graph: "<<endl;
    cin>>n>>e;

    //this is adjacency matrix: 
    int **edges = new int*[n];
    for(int i=0;i<n;i++){
        edges[i] = new int[n];
        for(int j=0;j<n;j++){
            edges[i][j]=0;
        }
    }


    //assign weight to each edge: 
    for(int i=0;i<e;i++){
        int f,s,weight;
        cin>>f>>s>>weight;
        edges[f][s]=weight;
        edges[s][f]=weight;
    }


    cout<<endl;
    prims(edges,n);

    for(int i=0;i<n;i++){
        delete [] edges[i];
    }

    delete [] edges;
}