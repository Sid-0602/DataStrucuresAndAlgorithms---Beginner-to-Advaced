#include <bits/stdc++.h>
using namespace std;

void print_bfs(int ** edges, int n, int sv, bool* visited){

    queue<int> pendingVertices;
    pendingVertices.push(sv); //push the starting vertex into the queue.
    visited[sv]=true; //this marks the visited vertex as true. 
    while(!pendingVertices.empty()){
        int currentVertex = pendingVertices.front(); //this stores the front index of the queue.
        pendingVertices.pop();
        cout<<currentVertex<<endl;
        //find adjacent vertex to curent Vertex.
        for(int i=0;i<n;i++){
            if(currentVertex==i){continue;}
            if(edges[currentVertex][i]==1 && !visited[i]){
                pendingVertices.push(i);
                visited[i]=true;
            }
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
    
    print_bfs(edges,n,0,visited);
}