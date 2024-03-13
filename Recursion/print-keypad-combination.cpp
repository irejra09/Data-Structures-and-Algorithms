/*
Given an integer n, using phone keypad find out and print all 
the possible strings that can be made using digits of input n.

Input Format : Integer n
Output Format : All possible strings in different lines

Sample Input:23
Sample Output:
ad
ae
af
bd
be
bf
cd
ce
cf
*/

#include <iostream>
#include <string>
using namespace std;
string getString(int d) {
  if (d == 2) 
  {
    return "abc";
  }
  if (d == 3) 
  {
    return "def";
  }
  if (d == 4) 
  {
    return "ghi";
  }
  if (d == 5) 
  {
    return "jkl";
  }
  if (d == 6) 
  {
    return "mno";
  }
  if (d == 7) 
  {
    return "pqrs";
  }
  if (d == 8) 
  {
    return "tuv";
  }
  if (d == 9) {
    return "wxyz";
  }
  return "";
}
void keypad(int num, string outputSoFar = "")
{
  if(num == 0)
  {
    cout<<outputSoFar<<endl;
    return;
  }
  int lastnum = num%10;
  int init_num  = num/10;
  string newstr = getString(lastnum);
  for(int i=0; i<newstr.size(); i++)
  {
    keypad(init_num, newstr[i]+outputSoFar);
  }
}
int main()
{
  int num;
  cout<<"Enter the number:";
  cin>>num;
  cout<<"The possible combinations are:"<<endl;
  keypad(num);
}