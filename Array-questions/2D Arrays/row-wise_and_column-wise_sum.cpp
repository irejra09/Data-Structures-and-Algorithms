#include <iostream>
using namespace std;
int main()
{
  int arr[100][100];
  int nrows,ncols,csum,rsum;
  cout<<"Enter the number of rows:";
  cin >> nrows;
  cout<<"Enter the number of columns:";
  cin >> ncols;
  cout<<"Enter the elements of the array:"<<endl;
  for(int i=0; i<nrows; i++)
  {
    for(int j=0; j<ncols; j++)
    {
      cin >> arr[i][j];
    }
  }
  //column wise sum;
  cout<<"Column wise sum:"<<endl;
  for(int i=0; i<ncols; i++)
  {
    csum = 0;
    for(int j=0; j<nrows; j++)
    {
      csum = csum + arr[j][i];
    }
    cout<<csum<<" ";
  }
  cout<<endl;
  //row wise sum 
  cout<<"Row wise sum:"<<endl;
  for(int i=0; i<nrows; i++)
  {
    rsum = 0;
    for(int j=0; j<ncols; j++)
    {
      rsum = rsum + arr[i][j];
    }
    cout<<rsum<<" ";
  }
}