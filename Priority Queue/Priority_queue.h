#include<bits/stdc++.h>
using namespace std;

class PriorityQueue{

    vector<int> pq;

    public :

    //Constructor: 
    PriorityQueue(){}


    //public function: 

    

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

    int removeMin() { 
        // Write your code here

        if(isEmpty){
            return 0; //priority queue is empty. 
        }
        int ans = pq[0]; //store the min element in ans variable.
        pq[0] = pq[pq.size()-1]; //assigning the value of
        pq.pop_back(); //removing the last element. 

        
        //Down-Heapify: 
        int parent_index = 0 ;
        int left_child=2*(parent_index)+1;
        int right_child=2*(parent_index)+2;

        
        while(left_child<pq.size()){
            
            int min_index = parent_index; //intialising min index with parent index.
            if(pq[min_index]>pq[left_child]){ 
                min_index = left_child;
            } //if left is smaller, store it's index in min_index.

            if(right_child<pq.size() && pq[right_child]<pq[min_index])
            { 
                min_index = right_child;
            } //if right is smaller, store it's index in min_index.


            if(parent_index == min_index){
                break;
            }
            //swap the parent index with
            int temp = pq[min_index];
            pq[min_index] = pq[parent_index];
            pq[parent_index] = temp;


            parent_index = min_index; 
            int left_child=2*(parent_index)+1;
            int right_child=2*(parent_index)+2;

        }

        return ans;

    }
};
