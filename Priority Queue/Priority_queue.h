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

   ;
    }

    void insert(int element){
        //insert element into queue but we need to preserve heap-order property:
        
    
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
