#include <iostream>
using namespace std;

void replaceChar(char input[], char c1,char c2)
{
  int count = 0;
  for(int i = 0; i < input[i]!='\0';i++)
  {
    count++;
  }
  for(int j=0;j<count;j++)
  {
    if(input[j]==c1)
    {
      input[j] = c2;
    }
  }
}
int main()
{
  char str[100];
  cout<<"Enter the string: ";
  cin>>str;
  char c1,c2;
  cout<<"Enter the character to be replaced: ";
  cin>>c1;
  cout<<"Enter the chracter with which you want to replace : ";
  cin>>c2;
  replaceChar(str,c1,c2);
  cout<<"The string after charater replacement is: "<<str;
}