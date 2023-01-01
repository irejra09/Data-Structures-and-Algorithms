#include <iostream>
using namespace std;
int main()
{
  int arr[100][100];
  int nrows,ncols;
  int rsum=0;
  int csum=0;
  int rind,cind;

  //entering number of rows and columns
  cout<<"Enter the number of rows:";
  cin >> nrows ;
  cout<<"Enter the number of columns:";
  cin >> ncols ;

  //entering the array elements
  cout<<"Enter the elements of the array:"<<endl;
  for(int i=0;i<nrows;i++)
  {
    for(int j=0;j<ncols;j++)
    {
      cin>>arr[i][j];
    }
  }

  //row sum
  for(int i=0;i<nrows;i++)
  {
    int sum=0;
    for(int j=0;j<ncols;j++)
    {
      sum += arr[i][j];
    }
    if(sum>rsum)
    {
      rsum = sum;
      rind = i;
    }
  }

  //column sum
  for(int i=0; i<ncols;i++)
  {
    int sum = 0;
    for(int j = 0; j<nrows;j++)
    {
      sum += arr[j][i];
    }
    if(sum>csum)
    {
      csum = sum;
      cind = i;
    }
  }
  
  //Printing the Largest Row's or Column's Index with th largest sum value of Row or Column.
  if(nrows==0 && ncols==0)
  {
        cout<<"row"<<" "<<0<<" "<<-2147483648;
  }
  else if(csum>rsum)
  {
    cout<<"column"<<" "<<cind<<" "<<csum;
  }
  else
  {
    cout<<"row"<<" "<<rind<<" "<<rsum;
  }
}