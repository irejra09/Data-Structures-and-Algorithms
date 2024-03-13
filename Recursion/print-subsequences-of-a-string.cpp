#include <iostream>
using namespace std;
void get_subs(string input, string output)
{
  if(input.empty())
  {
    cout<<output<<endl;
    return;
  }
  get_subs(input.substr(1), output);
  get_subs(input.substr(1), output + input[0]);
}
int main()
{
  string str;
  cout<<"Enter the string:";
  cin>>str;
  string output = "";
  get_subs(str, output);
}