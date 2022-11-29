/* This is the problem of floyds-triangle.
Suppose the value is 5, then the pattern is
0
1 2
3 4 5
6 7 8 9
10 11 12 13 14 */
#include <iostream>
using namespace std;
int main()
{
  int n;
  int j;
  int k =0;
  cout<<"Enter the value of n:";
  cin>>n;
  cout<<endl;
  cout<<"The floyds triangle for the value of "<<n<<" is"<<endl;
  for(int i=1; i<=n; i++)
  {
    j=1;
    while(j<=i)
    {
      cout<<k<<" ";
      k++;
      j++;
    }
    cout<<endl;
  }
}