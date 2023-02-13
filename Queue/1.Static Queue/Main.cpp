#include <iostream>
using namespace std;
#include "QueueUsingArray.h"
int main()
{
  QueueUsingArray<int> q(5);
  q.enqueue(101);
  q.enqueue(102);
  q.enqueue(103);
  q.enqueue(104);
  q.enqueue(105);
  q.enqueue(106);

  cout << q.getSize() << endl;
  cout << q.dequeue() << endl;
  cout << q.dequeue() << endl;
  cout << q.dequeue() << endl;

  cout << q.getSize() << endl;
  cout << q.isEmpty() << endl;
}