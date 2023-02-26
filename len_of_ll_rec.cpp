#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        next=NULL;
    }

};

int length(Node *head) {
    // Write your code here
    int counter = 0;
    Node * temp = head;
    //base case:

    if(head == NULL){
        return 0;
    }

    else if(head!=NULL){
        if(temp->next == NULL){
            return 1; 
        }

        return (1 + length(temp->next));
    }
    

}

Node *takeinput() {
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while (data != -1) {
        Node *newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head) {
    Node *temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        Node *head = takeinput();
        cout << length(head) << "\n";
    }
}