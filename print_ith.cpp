#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};



Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newNode = new Node(data);
		if (head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
		}
		cin >> data;
	}
	return head;
}

int length(Node *head){
     int counter = 0;
    Node *temp = head;

    while(temp!=NULL){
        counter++;
        temp=temp->next;
    }

    return counter;
}


void printIthNode(Node *head, int i)
{
    //Write your code here
    Node *temp = head;
    int len = length(head);
    int counter=0;
    if(temp==NULL){
        cout<<" ";
    }
    else if(len<i){
        cout<<" ";
    }
    else{
        while(counter!=i){
        counter++;
        temp = temp->next;
        }

        cout<<temp->data;
    }
    

}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		int pos;
		cin >> pos;
		printIthNode(head, pos);
		cout << endl;
        cout<<length(head);
        
	}
	return 0;
}