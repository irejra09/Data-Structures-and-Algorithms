#include <iostream>
#include <climits>
#include "StackUsingArray.cpp"
using namespace std;
int main()
{
  StackUsingArray<char> s;
  s.push(101);
  s.push(102);
  s.push(103);
  s.push(104);
  s.push(105);

  cout << s.top() << endl;
  cout<< s.pop() << endl;
  cout << s.pop() << endl;
  cout << s.pop() << endl;
  
  cout << s.size() << endl;

  cout << s.isEmpty() << endl;
}