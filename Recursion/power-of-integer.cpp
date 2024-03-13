#include <iostream>
using namespace std;
int power(int x, int n)
{
  if(n==0)
  {
    return 1;
  }
  int res = power(x, n-1);
  return x*res;
}
int main()
{
  int n,x;
  cout<<"Enter the value of x: ";
  cin>>x;
  cout<<"Enter the value of n: ";
  cin>>n;
  int result = power(x,n);
  
  cout<<"The power is: "<<result<<endl;
}