#include <iostream>
using namespace std;

void pushZeroes(int input[], int n)
{
  int not_zero = 0;
  for (int i = 0; i < n; i++)
  {
    if(input[i]!=0)
    {
      int temp = input[i];
      input[i] = input[not_zero];
      input[not_zero]=temp;
      not_zero++;
    }
  }
}
int main()
{
  int size;
  cout<<"Enter the size of the array: ";
  cin>>size;
  int *input = new int[size];
  cout<<endl;
  cout<<"Enter the elements of the array: ";
  for(int i = 0; i < size; i++)
  {
    cin>>input[i];
  }
  pushZeroes(input,size);
  cout<<"After pushing zeroes to the end the array is:"<<endl;
  for(int j = 0; j < size; j++)
  {
    cout<<input[j]<<" ";
  }
}