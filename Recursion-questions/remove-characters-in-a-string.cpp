#include <iostream>
using namespace std;
int length(char input[])
{
  if(input[0] =='\0')
  {
    return 0;
  }
  int l = length(input+1);
  return 1+l;
}

void removeC(char s[],char c)
{
  if(s[0] == '\0')
  {
    return;
  }
  if(s[0]!=c)
  {
    removeC(s+1,c);
  }
  else
  {
    int i = 1;
    for(;s[i]!='\0'; i++)
    {
      s[i-1]=s[i];
    }
    s[i-1]='\0';
    removeC(s,c);
  }
}
int main()
{
  char narr[100];
  char ch;
  cout<<"Enter the string:";
  cin>>narr;
  cout<<"Enter the character that you want to remove in the string:";
  cin>>ch;
  cout<<"The length of the string before the removal is element "<<ch<<"is "<<length(narr)<<endl;
  cout<<"String before the removal of character "<<ch<<" is "<<narr<<endl;
  removeC(narr,ch);
  cout<<"String after the removal of character "<<ch<<" is "<<narr<<endl;
  cout<<"The length of string after the removal of element "<<ch<<"is "<<length(narr);
}