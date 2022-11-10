#include <iostream>
using namespace std;

void selectSort(int *input, int n)
{
  int i = 0, j = 0;
  for(i = 0; i < n-1; i++)
  {
    int min = input[i], minindex = i;
    for(j = i+1; j < n ; j++)
    {
      if(input[j] < min)
      {
        min = input[j];
        minindex = j;
      }
    }
    //swap
    int temp = input[i];
    input[i] = min;
    input[minindex] = temp;
  }
}

void printArray(int *input, int n)
{
  for(int i = 0; i < n; i++)
  {
    cout << input[i]<<" ";
  }
}


int main()
{
  int input[100];
  int n; // size of input array
  cout << "Enter the size of the input array: ";
  cin >> n;
  for(int i = 0; i < n; i++)
  {
    cin>>input[i];
  }

  selectSort(input, n);
  printArray(input, n);
}
