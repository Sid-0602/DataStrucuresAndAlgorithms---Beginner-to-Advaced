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

Node *appendLastNToFirst(Node *head, int n)
{
    //Write your code here

    if (n == 0 || head == NULL)
    {
        return head;
    }
    Node *temp = head;
    int length = 1;
    while (temp->next != NULL)
    {
        temp = temp->next;
        length++;
    }
    temp->next = head;
    int i = length - n;
    temp = head;
    while (i > 1 && temp != NULL)
    {
        temp = temp->next;
        i--;
    }
    Node *newHead = temp->next;
    temp->next = NULL;
    return newHead;
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
	while (t--)
	{
		Node *head = takeinput();
		int n;
		cin >> n;
		head = appendLastNToFirst(head, n);
		print(head);
	}
	return 0;
}