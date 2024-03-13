#include <iostream>
using namespace std;
void removeChars(char *input)
{
  if(input[0]=='\0')
  {
    return;
  }
  if(input[0]==input[1])
  {
    int i = 1;
    for(;input[i]!='\0';i++)
    {
      input[i-1]=input[i];
    }
    input[i-1]='\0';
    removeChars(input);
  }
  else
  {
    removeChars(input+1);
  }
}
int main()
{
  char input[100];
  int n;
  cout<<"Enter the string with consecutive characters:";
  cin >> input;
  cout<<"The string before the removal of consecutive characters is: "<<input<<endl;
  removeChars(input);
  cout<<"The string after the removal of consecutive characters is: "<<input;
}