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
        pq[0] = pq[pq.size()-1]; //assigning the value of

        pq.pop_back(); //removing the last element. 

    }

    void insert(int element){
        //insert element into queue but we need to preserve heap-order property:
        pq.push_back(element);

        int childIndex = pq.size()-1;

        while(childIndex>0){
            int parentIndex = (childIndex-1)/2;
            if(pq[childIndex]<pq[parentIndex]){
                //swap child and parent:
                int temp = pq[childIndex];
                pq[childIndex] = pq[parentIndex];
                pq[parentIndex] = temp; 
            }
            else{break;}    //break the loop when the above condition is not valid, that means, element reached correct position    

            childIndex = parentIndex; //assign the parentIndex at childIndex
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
