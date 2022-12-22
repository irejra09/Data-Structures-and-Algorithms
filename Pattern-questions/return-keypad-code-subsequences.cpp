#include <iostream>
#include <cstring>
using namespace std;

string getString(int d)
{
  if(d==2)
  {
    return "abc";
  }
  if (d ==3) 
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
  if (d == 9) 
  {
    return "wxyz";
  }
  return "";
}

int keypad(int num,string output[])
{
  if(num == 0)
  {
    output[0] = "";
    return 1;
  }
  int firstNums = num/10;
  int lastDigit = num % 10;
  int smallOutputSize = keypad(firstNums,output);
  string lastStr = getString(lastDigit);
  for(int i = 0; i <lastStr.length()-1;i++)
  {
    for(int j = 0; j <smallOutputSize; j++)
    {
      output[j + (i + 1)*smallOutputSize] = output[j];
    }
  }

  int k = 0;
  for(int i = 0; i < lastStr.length(); i++)
  {
    for(int j = 0; j < smallOutputSize; j++)
    {
      output[k] = output[k] + lastStr[i];
      k++;
    }
  }
  return smallOutputSize*lastStr.length();
  
}
int main()
{
  int n;
  cout<<"Enter the number:";
  cin >> n;
  string output[1000];
  int count = keypad(n,output);
  cout<<"Your combinations are :"<<endl;
  for(int i=0;i<count&&i<10000;i++)
  {
    cout<<output[i]<<endl;
  }
}