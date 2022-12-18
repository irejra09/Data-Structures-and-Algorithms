#include <iostream>
using namespace std;
int partition(int *input,int si , int end)
{
  int count = 0;
  int i = si;
  int j = end;
  int pe = input[si];
  for(int i = si+1;i<=end;i++)
  {
    if(input[i]<=pe)
    {
      count+=1;
    }
  }
  swap(input[si],input[si+count]);
  while(i<(si+count)&&j>(si+count))
  {
    if(input[i]<=pe)
    {
      i++;
    }
    else if(input[j]>pe)
    {
      j++;
    }
    else
    {
      swap(input[i],input[j]);
      i++;
      j++;
    }
  }
  return si+count;  
}
void quickSort(int *input, int start, int end)
{
  if(start>=end)
  {
    return;
  }
  int c = partition(input, start, end);
  quickSort(input,start,c-1);
  quickSort(input,c+1,end);
}
int main()
{
  int n;
  cout<<"--------------------------------------QUICK SORT USING RECURSION --------------------------------------"<<endl<<endl;
  cout<<"Enter the size of the array you want to perform quick sort on:";
  cin>>n;
  int *array = new int[n];
  cout<<"Enter the elements of the array: ";
  for(int i = 0;i<n;i++)
  {
    cin>>array[i];
  }
  int si = 0;
  int ei = n-1;
  cout<<"The array before the quick sort is:";
  for(int i = 0;i<n;i++)
  {
    cout<<array[i]<<" ";
  }
  quickSort(array,si,ei);
  cout<<endl;
  cout<<"The array after the quick sort is:";
  for(int i = 0;i<n;i++)
  {
    cout<<array[i]<<" ";
  }
}