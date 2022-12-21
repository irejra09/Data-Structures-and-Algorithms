/* 
Print the following pattern:
for n= 4
The output is:
4444
4444
4444
4444
 */
#include <iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the value of n:";
  cin>>n;
  cout <<"The pattern is :"<<endl;
  for(int i = 0;i<n;i++)
  {
    for(int j = 0;j<n;j++)
    {
      cout<<n;
    }
    cout<<endl;
  }
}