#include <bits/stdc++.h>
using namespace std;

void sort012(int *a, int n)
{
  int lo = 0;
  int mid = 0;
  int tw = n - 1;
  while(mid <= tw)
  {
    switch(a[mid])
    {
      case 0:
      swap(a[mid],a[lo]);
      mid++;
      lo++;
      break;

      case 1:
      swap(a[mid],a[lo]);
      mid++;
      break;

      case 2:
      swap(a[mid],a[tw]);
      tw--;
      break;
    }
  }
}
int main()
{
  int n;
  cout<<"Enter the size of the array: ";
  cin>>n;
  int *a = new int[n];
  cout<<"Enter the elements of the array in terms of 0, 1, and 2: ";
  for(int i=0; i<n; i++)
  {
    cin>>a[i];
  }
  cout<<"Array before the sorting of the 0s, 1s and 2s in the array is:";
  for(int i=0; i<n; i++)
  {
    cout<<a[i]<<" ";
  }
  cout<<endl;
  sort012(a,n);
  cout<<"Array after the sorting of the 0s, 1s and 2s is:";
  for(int i=0; i<n; i++)
  {
    cout<<a[i]<<" ";
  }
}