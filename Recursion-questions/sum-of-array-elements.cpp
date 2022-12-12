#include <iostream>
using namespace std;
int summ(int *input,int n)
{
  if(n==1)
  {
    return input[0];
  }
  int suma = summ(input+1,n-1);
  return input[0] + suma;
}
int main()
{
  int n;
  cout<<"Enter the size of the array you want to create: ";
  cin>>n;
  int *arra = new int[n];
  cout<<"Enter the elements of the array: ";
  for(int i = 0; i < n; i++)
  {
    cin>>arra[i];
  }
  cout<<"The sum of the arrays using recursion is "<<summ(arra,n);
}