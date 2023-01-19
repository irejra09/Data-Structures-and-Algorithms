#include <iostream>
using namespace std;
#include "Node.cpp"

void print(Node *head)
{
  Node *temp = head;
  while(temp !=NULL)
  {
    cout<<temp->data;
    cout<<endl;
    temp = temp->next;
  }
}
int main()
{
  //Statically creating objects
  Node n1(10);
  Node *head = &n1;
  Node n2(20);

  Node n3(30);
  Node n4(40);
  Node n5(50);

  n1.next = &n2;
  n2.next = &n3;
  n3.next = &n4;
  n4.next = &n5;

  print(head);
}