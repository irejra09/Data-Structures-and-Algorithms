/* 
This program is about recursion. In this program, we are printing numbers till 
a value n, given by the user. The program calls a recursive function to print the numbers. 
 */
#include <iostream>
using namespace std;
void print(int n)
{
  if(n==0)              //Base case
  {
    return;
  }
  print(n-1);           //Recursive Call
  cout << n << " ";     //Print
}

int main()
{
  int n;
  cout<<"Enter the value of n:";
  cin >> n;
  cout<<"The digits till "<<n<<" are below :"<<endl;
  print(n);     //Call for print function
}