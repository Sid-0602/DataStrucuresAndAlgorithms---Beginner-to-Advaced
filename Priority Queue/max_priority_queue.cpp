#include <bits/stdc++.h>
using namespace std; 

class PriorityQueue {
    // Declare the data members here
    vector<int>pq;

   public:
    PriorityQueue() {
        // Implement the constructor here
    }

    int getSize() { 
        // Implement the getSize() function here
        return pq.size();
    }

    bool isEmpty() {
        // Implement the isEmpty() function here
        return pq.size()==0;
    }
    
    int getMax() {
        // Implement the getMax() function here
        if(pq.size()==0){
            return 0;
        }
        return pq[0];
    }


    void insert(int element) {
        // Implement the insert() function here
        pq.push_back(element);
        int childIndex = pq.size()-1;

        while(childIndex>0){
    
            int parentIndex = (childIndex-1)/2;
            
            if(pq[childIndex]>pq[parentIndex]){

                //swap if child is greater than parent. 
                int temp = pq[childIndex];
                pq[childIndex] = pq[parentIndex];
                pq[parentIndex] = temp; 
            }
            else{
                break;
            }
            childIndex = parentIndex;
        }
    }

    int removeMax() {
        // Implement the removeMax() function here
        if(isEmpty()){
            return 0;
        }

        int max_element = pq[0];
        pq[0] = pq[pq.size()-1];
        pq.pop_back();

        int parentIndex = 0;
        int leftChildIndex = 2*parentIndex + 1;
        int rightChildIndex = 2*parentIndex + 2;

        while(leftChildIndex<pq.size()){
            int maxIndex = parentIndex;

            if(pq[maxIndex]<pq[leftChildIndex]){
                maxIndex = leftChildIndex;
            }
            if(rightChildIndex<pq.size() && pq[maxIndex]<pq[rightChildIndex]){
                maxIndex = rightChildIndex;
            }

            if(maxIndex == parentIndex){
                break;
            }

            int temp = pq[maxIndex];
            pq[maxIndex] = pq[parentIndex];
            pq[parentIndex] = temp;
        }

        return max_element;
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
            case 2:  // getMax
                cout << pq.getMax() << "\n";
                break;
            case 3:  // removeMax
                cout << pq.removeMax() << "\n";
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