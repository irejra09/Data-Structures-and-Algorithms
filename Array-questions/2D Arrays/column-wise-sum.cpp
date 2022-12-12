/* #include <iostream>
using namespace std;
int main()
{
  int arr[100][100];
  int m,n;
  cout<<"Enter the number of rows:";
  cin>>m;
  cout<<endl;
  cout<<"Enter the number of columns:";
  cin>>n;
  for(int i = 0; i<m;i++)
  {
    for(int j = 0; j<n;j++)
    {
      cin>>arr[i][j];
    }
  }
  cout<<"the columnwise sum of the given array is "<<endl;
  for(int b = 0; b<n;b++)
  {
    int sum = 0;
    for(int k = 0; k<m;k++)
    {
      sum = sum+arr[k][b];
    }
    cout<<"The sum of column "<<b+1<<" is "<<sum<<endl;
  }
} */