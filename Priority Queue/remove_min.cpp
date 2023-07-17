#include <bits/stdc++.h>
using namespace std;


class PriorityQueue {
    vector<int> pq;

   public:
    bool isEmpty() { 
        return pq.size() == 0; 
    }

    int getSize() { 
        return pq.size(); 
    }

    int getMin() {
        if (isEmpty()) {
            return 0;
        }

        return pq[0];
    }

    void insert(int element) {
        pq.push_back(element);

        int childIndex = pq.size() - 1;

        while (childIndex > 0) {
            int parentIndex = (childIndex - 1) / 2;

            if (pq[childIndex] < pq[parentIndex]) {
                int temp = pq[childIndex];
                pq[childIndex] = pq[parentIndex];
                pq[parentIndex] = temp;
            } else {
                break;
            }

            childIndex = parentIndex;
        }
    }

    int removeMin(){

       if(isEmpty()){
            return 0; //if priority queue is empty, return 0. 
       }   

        int ans = pq[0];
        pq[0] = pq[pq.size()-1];
        pq.pop_back(); 

        //down-heapify: 

        int parent_index = 0;
        int leftChildIndex = 2*parent_index + 1;
        int rightChildIndex = 2*parent_index + 2;

        while(leftChildIndex<pq.size()){
            int minIndex = parent_index;

            //compare right child and left child with min index element. 
            if(pq[minIndex]>pq[leftChildIndex]){
                minIndex = leftChildIndex;
            }

            if(rightChildIndex<pq.size() && pq[rightChildIndex]<pq[minIndex]){
                minIndex = rightChildIndex;
            }
            
            //if minIndex and parent_index are same, then element is at correct position.
            if(minIndex == parent_index){
                break;
            }
            //swapping the parent index element with min_index element. 
            int temp = pq[minIndex];
            pq[minIndex] = pq[parent_index];
            pq[parent_index]=temp;

            //re assigning the values of left childIndex and rightChildIndex with the new value of parentIndex.
            parent_index = minIndex;
            leftChildIndex = 2*parent_index+1;
            rightChildIndex = 2*parent_index+2;


        }

        return ans;
    }
};


int main() {
    PriorityQueue pq;

    int choice;
    cin >> choice;

    while (choice != -1) {
        switch (choice) {
            case 1:  // insert
                int element;
                cin >> element;
                pq.insert(element);
                break;
            case 2:  // getMin
                cout << pq.getMin() << "\n";
                break;
            case 3:  // removeMax
                cout << pq.removeMin() << "\n";
                break;
            case 4:  // size
                cout << pq.getSize() << "\n";
                break;
            case 5:  // isEmpty
                cout << (pq.isEmpty() ? "true\n" : "false\n");
            default:
                return 0;
        }
        
        cin >> choice;
    }
}