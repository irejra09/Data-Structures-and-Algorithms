/*
Write a program that rotates the given array/list by D elements(towards the left).

Sample Input 1:
7
1 2 3 4 5 6 7
2

Sample Output 1:
3 4 5 6 7 1 2

Sample Input 2:
7
1 2 3 4 5 6 7
0

Sample Output 2:
1 2 3 4 5 6 7
*/

#include <iostream>
using namespace std;
void reverse(int *input, int start, int end)
{
  while(start < end)
  {
    swap(input[start], input[end]);
    start++;
    end--;
  }
}

void rotate(int *input,int n,int d)
{
  reverse(input,0,d-1);
  reverse(input,d,n-1);
  reverse(input,0,n-1);
}
int main()
{
  int arr[100];
  int n,d;
  cout<<"Enter the size of the array:";
  cin >> n;
  cout<<"Enter the elements of the array:"<<endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout<<"Enter the value by which you want to rotate the array towards the left:";
  cin>>d;
  rotate(arr,n,d);
  cout<<"The array after rotation by "<<d<<" elements is:"<<endl;
  for(int i = 0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
}