#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Node{
    public:

    int data;
    Node* next;


    Node(int data){
        this->data;
        next = NULL;
    }
};

class Pair{
    public:

    Node* head;
    Node* tail;
};

Pair reverse_LL_2(Node* head){
    if(head == NULL || head->next ==NULL){
        Pair ans;
        ans.head = head;
        ans.tail = head;
        return ans;
    }

    Pair small_ans = reverse_LL_2(head->next); //this returns a linked-list with reverse order for (n-1) elements

    //attaching 1st element to small_ans: 
    small_ans.tail->next = NULL;
    head->next = NULL;

    Pair ans;
    ans.head = small_ans.head;
    ans.tail = head;

    return ans;

}

Node* reverse_LL(Node* head){
    return reverse_LL_2(head).head;
}

Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
	int t;
	cin >> t;

	while(t--)
	{
		Node *head = takeinput();
		head = reverse_LL(head);
		print(head);
	}

	return 0;
}



