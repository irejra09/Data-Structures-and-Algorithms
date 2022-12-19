#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int subst(string input, string output[])
{
  if(input.empty())
  {
    output[0]=" ";
    return 1;
  }
  string smallStr = input.substr(1);
  int smallOutputSize = subst(smallStr, output);
  for(int i = 0; i < smallOutputSize;i++)
  {
    output[i+smallOutputSize] = input[0] + output[i];
  }
  return 2*smallOutputSize;
}
int main()
{
  string str;
  cout<<"Enter the string:";
  cin >> str;
  int ln = str.size();
  int sz = pow(2,ln);
  string *output = new string[sz];
  int count = subst(str,output);
  cout<<"The possible subsequences of the string are: "<<endl;
  for(int i = 0; i < count; i++)
  {
    cout<<output[i]<<endl;
  }
}