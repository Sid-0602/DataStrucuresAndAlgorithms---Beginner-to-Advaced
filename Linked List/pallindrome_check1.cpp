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

int getSize(Node *head){

    Node* temp = head;
    int counter=0;
    while(temp!=NULL){
        temp=temp->next;
        counter++;
    }

    return counter; 
}
bool isPalindrome(Node *head)
{
    //Write your code here
	bool flag = true;

	if(head==NULL){
		flag=false;
		return flag;
	}
	else{
		int size = getSize(head);
		Node* temp = head;


		int *arr = new int(size);

		for(int i=0; i<size;i++){
			arr[i] = temp->data;
			temp = temp->next;
		}

		for(int i=0;i<=size/2 && size!=0; i++){
			if(arr[i]!=arr[size-i-1]){
				flag=false;
				break;
			}
		}

		return flag;
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
		bool ans = isPalindrome(head);

		if (ans) cout << "true";
		else cout << "false";

		cout << endl;
	}

	return 0;
}