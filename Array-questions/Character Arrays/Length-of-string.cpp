#include <iostream>
using namespace std;
int LengthS(char input[])
{
  int count = 0;
  for(int i=0; input[i] != '\0';i++)
  {
    count++;
  }
  return count;
}

int main()
{
  char name[100];
  cout<<"Enter the string :";
  cin>>name;
  cout<<"The String is :"<<name<<endl;
  cout<<"Length of String is: "<<LengthS(name);
}
