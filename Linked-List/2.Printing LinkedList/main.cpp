#include "Node.cpp"
#include <iostream>
using namespace std;
Node *takeInput()
{
  int data;
  cout<<"Enter the data:";
  cin >> data;
  Node *head = NULL;
  Node *tail = NULL;
  while(data != -1)
  {
    Node * newnode = new Node(data);
    if(head == NULL)
    {
      head = newnode;
      tail = newnode;
    }
    else
    {
      tail->next = newnode;
      tail = newnode;
    }
    cout<<"Enter the data :";
    cin>>data;
  }
  return head;
}

void print(Node *head)
{
  Node *temp = head;
  while(temp != NULL)
  {
    cout<<temp->data<<" ";
    temp = temp->next;
  }
}
int main()
{
  Node *head = takeInput();
  print(head);
}