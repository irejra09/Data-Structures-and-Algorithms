// Program to find the second largest element in the array.
#include <iostream>
using namespace std;
int main()
{
  int arr[100];
  int n;
  //Entering the number of elements in the array.
  cout<<"Enter the number of elements:";
  cin>>n;
  //Entering the elements of the array.
  cout<<"Enter the elements:"<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }

  //Declaring variables to find the second largest element in the array.
  int max1 = arr[0];
  int max2 = 0;
  int max1ind = 0;
  int max2ind = 0;
  for(int i=1;i<n;i++)
  {
    if(arr[i] > max1)
    {
      max1ind = i;
      max1 = arr[i];
    }
  }
  for(int i=0;i<n;i++)
  {
    if(i == max1ind)
    {
      continue;
    }
    if((max2<=arr[i]))
    {
      max2ind = i;
      max2 = arr[i];
    }
  }
  //Printing the second largest element of the array.
  cout<<"The second largest element is "<<max2<<" at index "<<max2ind+1<<endl;
}