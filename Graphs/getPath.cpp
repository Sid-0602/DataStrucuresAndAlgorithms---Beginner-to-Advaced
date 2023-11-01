#include <bits/stdc++.h>
using namespace std;


vector<int>* getPathHelper(int** edges, int n, int sv, int ev, bool* visited){

    if(sv==ev){
        vector<int>* output = new vector<int>();
        output->push_back(ev);
        return output;
    }
    visited[sv]=true;
    for(int i=0;i<n;i++){
        if(edges[sv][i]==1 && !visited[i]){
            vector<int>* smallOutput = getPathHelper(edges,n,i,ev,visited); //function call to find from i->ev.
            if(smallOutput!=NULL){
                smallOutput->push_back(sv);
                return smallOutput;
            }
        }
    }
    return NULL; //if we have path returned as NULL.

}   

vector<int>* getPath(int **edges, int n, int sv, int ev){
    bool* visited = new bool[n];
    for(int i=0;i<n;i++){
        visited[i]=false;
    }

    vector<int>* output = getPathHelper(edges, n, sv, ev, visited);
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

    int sv,ev;
    cout<<"Give starting and end vertex for the graph: "<<endl;
    cin>>sv>>ev;

    vector<int>* output = getPath(edges,n,sv,ev);
    if(output!=NULL){ 
        for(int i=0;i<output->size();i++){
            cout<<"path: "<<output->at(i)<<endl;
        }
    }else{
        cout<<"No path exists!!"<<endl;
    }

}