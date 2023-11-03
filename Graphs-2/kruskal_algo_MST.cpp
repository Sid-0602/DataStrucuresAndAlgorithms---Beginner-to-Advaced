/*
    Given an undirected, connected and weighted graph G(V, E) 
    with V number of vertices (which are numbered from 0 to V-1) and E number of edges.
    Find and print the Minimum Spanning Tree (MST) using Kruskal's algorithm.

*/
#include <bits/stdc++.h>
using namespace std;

class Edge{
    public:
        int source;
        int dest;
        int weight;
};

bool compare(Edge e1, Edge e2){ 
    return e1.weight<e2.weight; //this helps array to get sort into increasing order.
} 

int findParent(int v, int *parent){
    if(parent[v]==v){
        return v;
    }

    return findParent(parent[v], parent);
}

void kruskalsAlgo(Edge *input, int n, int E){
    //sort the input array in ascending order based on weights:

    sort(input, input + E, compare);

    //this contains the output of MST function: 
    Edge *output = new Edge[n-1];

    int count = 0;
    int i = 0;

    //this is parent index for union-find algo: 
    int *parent = new int[n];
    for(int i=0;i<n;i++){
        parent[i]=i;
    }

    while(count!=n-1){
        Edge currentEdge = input[i];
        //check if edge current creates a cycle:
        int sourceParent = findParent(currentEdge.source, parent);
        int destinationParent = findParent(currentEdge.dest, parent);

        //check if source and destination has same parent, then skip or else add : 
        if(sourceParent!=destinationParent){
            output[count] = currentEdge;
            count++;
            parent[sourceParent] = destinationParent; //update source parent with destination. 
        }
        i++;
    }

    //print MST: 
    for(int i=0;i<n-1;i++){
        cout<<output[i].source << " "<<output[i].dest <<" "<<output[i].weight<<endl;
    }

}


int main(){

    //taking input for input array: 
    int n,E;
    cout<<"Enter number of vertices and edges: "<<endl;
    cin>>n>>E;
    Edge *input = new Edge[E]; 


    //filling the input array with edges object containing source, destination and weight.
    for(int i=0;i<E;i++){
        int s,d,w;
        cin>>s>>d>>w;
        input[i].source = s;
        input[i].dest=d;
        input[i].weight = w;
    }

    kruskalsAlgo(input,n,E);

}