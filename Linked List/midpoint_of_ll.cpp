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
        next = NULL;
    }
};

int length(Node* head){
    int len = 0;
        class Node* temp = head;
        while (temp) {
            len++;
            temp = temp->next;
        }
        return len;
}

Node *midPoint(Node *head)
{
    // Write your code here
    int len = length(head);
    Node* temp = head;
    if(len % 2 ==0){
        int mid = (len-1)/2;
        for(int i=0;i<mid;i++){
            temp = temp->next;
        }

        return temp; 
    }
    else{

        int mid = (len-1)/2;
        for(int i=0;i<mid;i++){
            temp = temp->next;
        }

        return (temp);

    }

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
		Node *mid = midPoint(head);
		if (mid != NULL)
		{
			cout << mid->data;
		}
		cout << endl;
	}
	return 0;
}