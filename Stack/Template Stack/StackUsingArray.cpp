#include <iostream>
using namespace std;
template <typename T>
class StackUsingArray
{
  T *data;
  int nextIndex;
  int capacity;
  public:
  StackUsingArray()  //total size of the stack
  {
    
    data = new T[4];
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

  void push(T element)
  {
    if(nextIndex == capacity)
    {
      T *newData = new T[capacity*2];
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
  T pop()
  {
    if(isEmpty())
    {
      cout<<"Stack is empty!"<<endl;
      return 0;
    }
    nextIndex = nextIndex - 1;
    return data[nextIndex];
  }

  //access the topmost element
  T top()
  {
    if(isEmpty())
    {
      cout<<"Stack is empty!"<<endl;
      return 0;
    }
    return data[nextIndex - 1];
  }

};