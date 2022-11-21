#include <iostream>
#include <cstring>
using namespace std;
int main()
{
  char rev[100];
  cout<<"Enter the string :";
  cin>>rev;
  int i=0;
  int j = strlen(rev)-1;
  while(i<j)
  {
    if(rev[i]==rev[j])
    {
      i++;
      j--;
      continue;

    }
    else
    {
      cout<<"Not Palindrome!";
      return 0;
    }
  }
  cout<<"Pallindrome";
}
