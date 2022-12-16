#include <iostream>
using namespace std;
void merge(int input[],int si,int ei)
{
  int size = (ei-si)+1;
  int* arra = new int[size];
  int mid = (si+ei)/2;
  int i = si;
  int j = mid+1;
  int k = 0;
  while(i<=mid&&j<=ei)
  {
    if(input[i]<input[j])
    {
      arra[k] = input[i];
      i++;
      k++;
    }
    else
    {
      arra[k] = input[j];
      k++;
      j++;
    }
  }
  while(i<=mid)
  {
    arra[k] = input[i];
    i++;
    k++;
  }
  while(j<=ei)
  {
    arra[k] = input[j];
    j++;
    k++;
  }
  int m = 0;
  for(int i=si;i<=ei;i++)
  {
    input[i] = arra[m];
    m++;
  }
  delete [] arra;
}
void merge_sort(int input[],int si,int ei)
{
  if(si>=ei)
  {
    return;
  }
  int mid = (si+ei)/2;
  merge_sort(input,si,mid);
  merge_sort(input,mid+1,ei);
  merge(input,si,ei);
}
int main()
{
  int n;
  cout<<"Enter the size of the array:";
  cin >> n;
  int* array = new int[n];
  cout<<"Enter the elements of the array: ";
  for(int i=0; i<n; i++)
  {
    cin>>array[i];
  }
  cout<<"The array before the recursive merge sort is:";
  for(int i=0;i<n; i++)
  {
    cout<<array[i]<<" ";
  }
  cout<<endl;
  merge_sort(array,0,n-1);
  cout<<"The array after the recursive merge sort is:";
  for(int i=0; i<n; i++)
  {
    cout<<array[i]<<" ";
  }
  cout<<endl;
  delete [] array;
}