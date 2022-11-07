int findElement(int arr[], int n,int t)
{
  for(int i = 0; i < n; i++)
  {
    if(t == arr[i])
    {
      return i;
    }
  }
  return -1;
};




#include <iostream>
using namespace std;
int main()
{
  int n; // size of the array;
  cout<<"Enter the size: ";
  cin>>n;
  int t; //Item to be searched;
  int arr[100];
  cout<<"Enter the elements: "; 
  for(int i = 0; i < n; i++)
  {
    cin>>arr[i];
  }
  int k=0;
  cout<<"Enter the element to be searched in the array: ";
  cin>>t;
  k = findElement(arr, n, t);
  if(k>=0)
  {
    cout<<"Element "<<t<<" found at index :"<<k<<endl;
  }
  return 0;
}
