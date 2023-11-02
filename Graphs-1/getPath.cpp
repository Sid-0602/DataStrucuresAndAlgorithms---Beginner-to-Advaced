
/* THIS IS CODE FOR GETTING PATH USING DFS AND BFS (NOT NECESSARILY SHORTEST PATH)*/

#include <bits/stdc++.h>
using namespace std;


vector<int>* getPath_bfs(int** edges, int n, int sv, int ev){
    queue<int> bfsQ;
    bool* visited = new bool[n];
    map<int,int> parentMap;
    for(int i=0;i<n;i++){
        visited[i]=false;
    }

    bfsQ.push(sv); //push starting element into the queue.
    visited[sv]=true;
    bool done = false;
    while(!bfsQ.empty() && !done){
        int frontElement = bfsQ.front();
        bfsQ.pop();
        for(int i=0;i<n;i++){
            if(edges[frontElement][i]==1 && !visited[i]){
                parentMap[i]=frontElement; // frontElement is pushed by ith element.
                bfsQ.push(i);
                visited[i]=true;
                //if end vertex is ith (we reached destination): 
                if(i==ev){
                    done= true;
                    break;
                }
            }
        }
    }
    if(!done){
        return NULL;
    }else{
        vector<int>* output = new vector<int>();
        int current = ev;
        output->push_back(ev);
        while(current!=sv){
            current = parentMap[current];
            output->push_back(current);
        }

        return output;
    }
}

vector<int>* getPathHelper_dfs(int** edges, int n, int sv, int ev, bool* visited){

    if(sv==ev){
        vector<int>* output = new vector<int>();
        output->push_back(ev);
        return output;
    }
    visited[sv]=true;
    for(int i=0;i<n;i++){
        if(edges[sv][i]==1 && !visited[i]){
            vector<int>* smallOutput = getPathHelper_dfs(edges,n,i,ev,visited); //function call to find from i->ev.
            if(smallOutput!=NULL){
                smallOutput->push_back(sv);
                return smallOutput;
            }
        }
    }
    return NULL; //if we have path returned as NULL.

}   

vector<int>* getPath_dfs(int **edges, int n, int sv, int ev){
    bool* visited = new bool[n];
    for(int i=0;i<n;i++){
        visited[i]=false;
    }

    vector<int>* output = getPathHelper_dfs(edges, n, sv, ev, visited);
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

    cout<<"Path by DFS: "<<endl;
    vector<int>* output_dfs = getPath_dfs(edges,n,sv,ev);
    if(output_dfs!=NULL){ 
        cout<<"path: "<<endl;
        for(int i=0;i<output_dfs->size();i++){
            cout<<output_dfs->at(i)<<" -> ";
        }
        cout<<endl;
    }else{
        cout<<"No path exists!!"<<endl;
    }

    cout<<"Path by BFS: "<<endl;
    vector<int>* output_bfs = getPath_bfs(edges,n,sv,ev);
    if(output_bfs!=NULL){
        cout<<"Path: "<<endl;
        for(int i=0;i<n;i++){
            cout<<output_bfs->at(i)<<" -> ";
        }
        cout<<endl;
    }else{
        cout<<"No path Exists!!"<<endl;
    }

}