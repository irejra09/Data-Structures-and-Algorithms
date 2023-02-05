#include <iostream>
#include "Node.cpp"
using namespace std;

Node *insertNode(Node *head, int data, int i)
{
  Node *temp = head;
  int count = 0;
  Node *newNode = new Node(data);
  if(i == 0)
  {
    newNode -> next = head;
    head = newNode;
    return head;
  }

  while(temp != NULL && count < i-1)
  {
    count++;
    temp = temp->next;
  }

  if(temp != NULL)
  {
    newNode -> next = temp -> next;
    temp -> next = newNode;
  }
  return head;
}


Node *takeInput()
{
  int data;
  cout<<"Enter the data:";
  cin>>data;
  Node *head = NULL;
  Node *tail = NULL;
  while(data != -1)
  {
    Node *newnode = new Node(data);
    if(head == NULL)
    {
      head = newnode;
      tail = newnode;
    }
    else
    {
      tail -> next = newnode;
      tail = newnode;
    }
    cout<<"Enter the data again:";
    cin>>data;
  }
  return head;
}
void print(Node *head)
{
  while (head != NULL)
  {
    cout<<head -> data<<" ";
    head = head -> next;
  }
}
int main()
{
  Node *head = takeInput();
  print(head);
  cout<<"\n";
  int dat, pos;
  cout<<"Enter the position you want to enter the data at:";
  cin>>pos;
  cout<<"Enter the data you want to place at position "<<pos<<":";
  cin>>dat;
  head = insertNode(head, dat, pos);
  print(head);
}