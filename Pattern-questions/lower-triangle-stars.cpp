#include <iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the value of n: ";
  cin>> n;
  cout<<"Your pattern is: "<<endl;
  for(int i = 0; i < n; i++)
  {
    for(int j = 0; j <=i; j++)
    {
      cout<<"*";
    }
    cout<<endl;
  }

}