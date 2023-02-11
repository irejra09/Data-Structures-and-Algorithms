#include <iostream>
using namespace std;
#include "Node.cpp"

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

Node *appendLastNToFirst(Node *head, int n)
{
    //Write your code here
	if(head == NULL || n==0)
	{
		return head;
	}
	Node *temp1 = head;
	Node *temp = head;
	Node *temp2 = head;
	int count = 0;
	while(temp != NULL)
	{
		count++;
		temp = temp -> next;
	}
	int mm = count - n;
	int co = 0;
	while(co<mm-1 && temp1 != NULL)
	{
		co++;
		temp1 = temp1-> next;
	}
	while(temp2->next != NULL)
	{
		temp2 = temp2 -> next;
	}
	temp2 -> next = head;
	head = temp1->next;
	temp1 -> next = NULL;
	return head;
}

int main()
{
	cout<<"Enter the elements of the LL:";
	Node *head = takeinput();
  cout<<"Enter the no of elements you want to push to the front:";
	int n;
	cin >> n;
	head = appendLastNToFirst(head, n);
  cout<<"Linked List after pushing "<<n<<"elements to the front:";
	print(head);
	return 0;
}