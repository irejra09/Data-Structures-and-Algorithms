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

Node* deleteNode(Node* head, int pos) {
    if (head == NULL) {
        return NULL;
    }

    if (pos == 0) {
        head = head->next;
        return head;
    }

    Node* prev = head;
    Node* curr = head->next;
    int count = 1;
    while (count < pos && curr != NULL) {
        prev = curr;
        curr = curr->next;
        count++;
    }

    if (curr == NULL) {
        return head;
    }

    prev->next = curr->next;
    delete curr;
    return head;
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
		Node *head = takeinput();
		int pos;
		cin >> pos;
		head = deleteNode(head, pos);
		print(head);

	return 0;
}