#include <iostream>
using namespace std;
int main()
{
  int arr[100][100];
  int n,m;
  cout<<"Enter the number of rows:";
  cin>>m;
  cout<<"Enter the number of columns:";
  cin>>n;
  cout<<"Enter the elements of the array:"<<endl;
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      cin>>arr[i][j];
    }
  }
  //row wise
  cout<<"Row Wise: "<<endl;
  for(int i = 0;i<m;i++)
  {
    for(int j = 0;j<n;j++)
    {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  //column wise
  cout<<"Column Wise: "<<endl;
  for(int i = 0;i<n;i++)
  {
    for(int j = 0;j<m;j++)
    {
      cout<<arr[j][i]<<" ";
    }
    cout<<endl;
  }
}