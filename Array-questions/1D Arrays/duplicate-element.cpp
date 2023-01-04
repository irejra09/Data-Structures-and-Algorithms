/*
You have been given an integer array/list(ARR) of size N which contains numbers from 0 to (N - 2). 
Each number is present at least once. That is, if N = 5, the array/list constitutes values ranging
from 0 to 3, and among these, there is a single integer value that is present twice. 
You need to find and return that duplicate number present in the array.

Sample Input 1:
9
0 7 2 5 4 7 1 3 6

Sample Output 1:
7

Sample Input 2:
5
0 2 1 3 1

Sample Output 2:
1
*/
#include <iostream>
using namespace std;
int main()
{
  int arr[100];
  int n,sum;
  cout<<"Enter the number of elements in the array:";
  cin>>n;
  cout<<"Enter the elements of the with one element repeated twice:"<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  for(int i=0;i<n;i++)
  {
    sum += arr[i];
  }
  int n1 = n-2;
  int lsum = (n1*(n1+1))/2;
  int dup = sum - lsum;
  cout<<"The duplicate element is:"<<dup<<endl;
}