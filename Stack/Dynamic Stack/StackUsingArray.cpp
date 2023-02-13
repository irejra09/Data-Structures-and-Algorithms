#include <iostream>
using namespace std;
class StackUsingArray
{
  int *data;
  int nextIndex;
  int capacity;
  public:
  StackUsingArray()  //total size of the stack
  {
    
    data = new int[4];
    nextIndex = 0;
    capacity = 4;
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
      int *newData = new int[capacity*2];
      for(int i = 0; i < capacity; i++)
      {
        newData[i] = data[i];
      }
      capacity = capacity * 2;  
      delete[] data;
      data = newData;    
      /* cout<<"Stack is full!"<<endl;
      return; */
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