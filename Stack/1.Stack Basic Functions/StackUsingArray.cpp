#include <iostream>
using namespace std;
class StackUsingArray
{
  int *data;
  int nextIndex;
  int capacity;
  public:
  StackUsingArray(int totalSize)  //total size of the stack
  {
    capacity = totalSize;
    data = new int[totalSize];
    nextIndex = 0;
  }

  //return the number of elements present in the stack
  int size()
  {
    return nextIndex;
  }

  bool isEmpty()
  {
    if(nextIndex == 0)
    {
      return true;
    }
    else
    {
      return false;
    }
  }

  //insert an element in the stack

  void push(int element)
  {
    if(nextIndex == capacity)
    {
      cout<<"Stack is full!"<<endl;
      return;
    }
    data[nextIndex] = element;
    nextIndex++;
  }

  //remove an element
  int pop()
  {
    if(isEmpty())
    {
      cout<<"Stack is empty!"<<endl;
      return INT_MIN;
    }
    nextIndex = nextIndex - 1;
    return data[nextIndex];
  }

  //access the topmost element
  int top()
  {
    if(isEmpty())
    {
      cout<<"Stack is empty!"<<endl;
      return INT_MIN;
    }
    return data[nextIndex - 1];
  }

};