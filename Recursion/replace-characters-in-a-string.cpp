#include <iostream>
#include <cstring>
using namespace std;
void replaceC(char input[], char c1, char c2)
{
  if(input[0] == '\0')
  {
    return;
  }
  replaceC(input+1, c1, c2);
  if(input[0]==c1)
  {
    input[0] = c2;
  }
}
int main()
{
  char c1,c2;
  char c[100];
  cout<<"Ente the string :";
  cin>>c;
  cout<<"Enter the character you want to replace :";
  cin>>c1;
  cout<<"Enter the character you want to replace te character with :";
  cin>>c2;
  cout<<"String before replacement is :"<<c<<endl;
  replaceC(c,c1,c2);
  cout<<"String after replacement is :"<<c<<endl;
}