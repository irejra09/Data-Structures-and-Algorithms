#include <iostream>
using namespace std;
int main()
{
  int arr[100][100];
  int nrows,mcols;
  //Entering the number of rows and columns
  cout<<"Enter the number of rows: ";
  cin>>nrows;
  cout<<"Enter the number of columns: ";
  cin>>mcols; 

  //Entering the arrays elements
  cout<<"Enter the elements of the matrix: "<<endl;
  for(int i=0;i<nrows;i++)
  {
    for(int j=0;j<mcols;j++)
    {
      cin>>arr[i][j];
    }
  }

  //Printing the wave pattern of the entered 2D array
  for(int i = 0;i<mcols;i++)
  {
    if(i%2==0)
    {
      for(int j = 0;j<nrows;j++)
      {
        cout<<arr[j][i]<<" ";
      }
    }
    else
    {
      for(int j = nrows-1;j>=0;j--)
      {
        cout<<arr[j][i]<<" ";
      }
    }
  }
}