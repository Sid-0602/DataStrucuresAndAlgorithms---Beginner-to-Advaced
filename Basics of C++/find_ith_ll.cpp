#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


class Node{
    public:

    int data;
    Node *next;

    Node(int data){
        this->data = data;
        next = NULL;
    }
};

int findNode(Node *head, int n){
    // Write your code here.

    Node* temp = head;
    int count = 0;
    int index=0;
    bool flag= false;
    if(head == NULL){
        return 0;
    }
    else{

        while(temp->next !=NULL && flag ==false){
            if(temp->data == n){
                index = count;
                count ++;
                flag=true;
                break;
            }

            else{
                temp = temp->next;
                count++;
            }
        }

        if(flag == true){
            return index;
        }
        else if(flag == false){
            return -1;
    }
    


    }
    
    
}

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

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		int val;
		cin >> val;
		cout << findNode(head, val) << endl;
	}
}

