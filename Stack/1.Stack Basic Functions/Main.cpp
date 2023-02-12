#include <iostream>
#include <climits>
#include "StackUsingArray.cpp"
using namespace std;
int main()
{
  StackUsingArray s(4);
  s.push(10);
  s.push(12);
  s.push(13);
  s.push(14);
  s.push(15);

  cout << s.top() << endl;
  cout<< s.pop() << endl;
  cout << s.pop() << endl;
  cout << s.pop() << endl;
  
  cout << s.size() << endl;

  cout << s.isEmpty() << endl;
}