#include <iostream>
using namespace std;
int count(int n)
{
  if(n==0) 
  {
    return 0;
  }
  int i = count(n/10);
  return 1+i;
}
int main()
{
  int a;
  cout<<"Enter the a number:";
  cin>>a;
  cout<<"The number of digits in the given number "<<a<<" are "<<count(a)<<endl;
}