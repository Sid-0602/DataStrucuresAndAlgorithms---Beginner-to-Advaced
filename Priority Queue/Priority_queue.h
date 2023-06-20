#include<bits/stdc++.h>
using namespace std;

class PriorityQueue{

    vector<int> pq;

    public :

    //Constructor: 

    PriorityQueue(){}


    //public function: 

     int removeMin() {
        // Write your code here
        int ans = pq[0];


    }

    void insert(int element){
        //insert element into queue but we need to preserve heap-order property:
        pq.push_back(element);

        int childIndex = pq.size()-1; //this is childIndex which we need to upheap.

        while(childIndex>0){
            int parentIndex  = (childIndex-1)/2;

            if(pq[childIndex]<pq[parentIndex]){

                //swap it with parent data node.
                int temp = pq[childIndex];
                pq[childIndex] = pq[parentIndex];
                pq[parentIndex]=temp; 
            }
            else{
                break;
            }

            childIndex = parentIndex; //update childIndex with ParentIndex after swapping.
        }
    
    }

    int getMin(){ 
        if(pq.size()==0) return 0;

        else return pq[0];
    }

    int getSize(){
        //return size of pq: 
        return pq.size();
    }
    bool isEmpty(){
        //checks the size of pq
        return pq.size()==0;
    }
};
