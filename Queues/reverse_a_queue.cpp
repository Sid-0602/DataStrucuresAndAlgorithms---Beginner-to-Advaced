#include <iostream>
using namespace std;
#include <queue>



void reverseQueue(queue<int> &input) {
	//using recursion: 

    //base case:
    if(input.empty()){
        return;
    }

    //storing the first element in an variable
    int front_element = input.front();
    
    //popping the first element
    input.pop();
    
    //recursive call to reverse the rest of queue
    reverseQueue(input);

    //push first-element into reveresed queue.
    input.push(front_element);



}

int main() {
    int t;
    cin >> t;

    while (t--) {
        queue<int> q;
        int size;
        cin >> size;

        for (int i = 0, val; i < size; i++) {
            cin >> val;
            q.push(val);
        }

        reverseQueue(q);
        while (!q.empty()) {
            cout << q.front() << " ";
            q.pop();
        }

        cout << "\n";
    }
}