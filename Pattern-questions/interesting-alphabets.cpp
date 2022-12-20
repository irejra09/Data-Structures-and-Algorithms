/* 
Print the following pattern.
For n = 5
E
DE
CDE
BCDE
ABCDE */

#include <iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the value of n:";
  cin >> n;
  n = n+64;
  for(int i = n;i>=65;i--)
  {
    for(int j = i;j<=n;j++)
    {
      cout<<(char)j;
    }
    cout<<"\n";
  }
}