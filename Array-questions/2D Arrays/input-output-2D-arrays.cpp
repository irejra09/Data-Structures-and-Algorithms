#include <iostream>
using namespace std;
int main()
{
  int arr[100][100];
  int n,m;
  cout<<"Enter the number of rows:"<<endl;
  cin>>m;
  cout<<"Enter the number of columns:"<<endl;
  cin>>n;
  cout<<"Enter the elements of the array:"<<endl;
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      cin>>arr[i][j];
    }
  }
  cout<<"The elements of the 2D array are: "<<endl;
  for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
    {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}