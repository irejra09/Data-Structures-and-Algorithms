#include <iostream>
#include "Node.cpp"
using namespace std;

Node *removeDuplicates(Node *head)
{
    //Write your code here
	if(head == NULL)
	{
		return head;
	}
	Node *t1 = head;
	Node *t2 = head -> next;
	while(t2 != NULL)
	{
		if(t1 ->data == t2 ->data)
        {
            Node *prev = t2 ->next;
            delete t2;
            t1->next = prev;
            t2 = t1->next;
        }
        else 
        {
            t1 = t2;
            t2 = t2->next;
        }
	}
	return head;
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
  cout<<"Enter the data for LInked List: ";
  Node *head = takeinput();
  cout<<"Data of the Linked List Before removing duplicate elements: ";
  print(head);
  head = removeDuplicates(head);
  cout<<"Data of the Linked after removing duplicate elements: ";
	print(head);
}