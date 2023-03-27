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

Node *getMid(Node* head){
    Node* slow=head;
    Node* fast = head;

    while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow=slow->next;
    }

    return slow;
}

Node* reverse(Node* head){
    Node* current = head;
    Node* prev = NULL;
    Node* next = NULL;

    while(current!=NULL){
        next = current->next;
        current->next = prev;
        prev= next;
        current = next;
    }
    return prev;
}

bool isPalindrome(Node *head)
{
    //Write your code here
    if(head==NULL || head->next ==NULL){
        return true;
    }

    Node *middle = getMid(head);

    //reversing LL after mid point.

    Node* temp = middle->next;
    middle->next = reverse(head);

    //compare both halves: 
    Node* head1=head;
    Node* head2=middle->next;

    while(head2!=NULL){
        if(head1->data!=head2->data){
            return false;
        }
        head1=head1->next;
        head2=head2->next;
    }

    //repeat step 2: 
    temp = middle->next;
    middle->next = reverse(head);

    return true;
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

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		Node *head = takeinput();
		bool ans = isPalindrome(head);

		if (ans) cout << "true";
		else cout << "false";

		cout << endl;
	}

	return 0;
}