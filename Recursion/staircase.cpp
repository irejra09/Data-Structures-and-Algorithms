/*
A child is running up a staircase with N steps, and can hop either 1 step, 
2 steps or 3 steps at a time. Implement a method to count how many possible
ways the child can run up to the stairs. You need to return number of possible ways W.


Input format : Integer N
Output Format :Integer W

Sample Input1 : 4 
Sample Output 1: 7

Sample Input2 : 5
Sample Output2 : 13
*/

#include <iostream>
using namespace std;
int staircase(int n)
{
  if(n<0)
  {
    return 0;
  }
  if(n==0)
  {
    return 1;
  }

  return staircase(n-1)+staircase(n-2)+staircase(n-3);
}
int main()
{
  int n;
  cout<<"Enter the number of steps: ";
  cin >> n;
  int output = staircase(n);
  cout<<"The number of possible ways are: "<<output;
}