#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  char arr1[100],arr2[100];
  cout<<"Enter the Ist string:";
  cin>>arr1;
  cout<<endl;
  cout<<"Enter the second string:";
  cin>>arr2;
  if(strcmp(arr1,arr2)==0)
  {
    cout<<"Both the strings are equal"<<endl;
  }
  else
  {
    cout<<"Both the strings are not equal"<<endl;
  }

}