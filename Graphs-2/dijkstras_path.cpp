/*
    Given an undirected, connected and weighted graph G(V, E) 
    with V number of vertices (which are numbered from 0 to V-1) and E number of edges.
    Find and Print the shortest Path from source vertex using Dijkstra's Algorithm.
*/

#include <bits/stdc++.h>
using namespace std;

int findMinVertex(int* distance, bool* visited, int n){

    int minVertex = -1;
    for(int i=0;i<n;i++){
        if(!visited[i] && (minVertex==-1 || distance[i]<distance[minVertex])){
            minVertex=i;
        }
    }

    return minVertex;

}


void dijkastra(int **edges, int n){

    //arrays to store info: 
    bool* visited = new bool[n];
    int* distance = new int[n];

    for(int i=0;i<n;i++){
        distance[i]=INT_MAX;
        visited[i]=false;
    }

    distance[0]=0;

    for(int i=0;i<n-1;i++){

        int minVertex = findMinVertex(distance, visited, n);
        visited[minVertex]=true;
        for(int j=0;j<n;j++){
            if(edges[minVertex][j]!=0 && !visited[j]){
                int dist = distance[minVertex] + edges[minVertex][j];

                if(dist<distance[j]){
                    distance[j] = dist;
                }
            }
        }

    }

    for(int i=0;i<n;i++){
        cout<<i<<" "<<distance[i]<<endl;
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
    dijkastra(edges,n);

    for(int i=0;i<n;i++){
        delete [] edges[i];
    }

    delete [] edges;
}