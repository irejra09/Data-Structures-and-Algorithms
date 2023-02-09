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

int findNode(Node *head, int n){
    // Write your code here.
    if(head == NULL)
    {
        return -1;
    }
    int count = 0;

    Node *temp = head;

    while (temp != NULL)
    {
        if(n == temp -> data)
        {
            return count;
        }
        temp = temp -> next;
        count++;
    }  
    return -1;
    
}

int main()
{
	cout<<"Enter the nodes in your linked list: ";
	Node *head = takeinput();
  cout<<"Enter the value you want to find index of:";
	int val;
	cin >> val;
	cout <<"The element "<<val<<"is present at "<< findNode(head, val) <<" index."<< endl;
}