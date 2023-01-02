#include <iostream>
#include <cstring>
using namespace std;

//function to check the permutation
//Approach 1
/* bool isPermutation(char input1[],char input2[])
{
  if(strlen(input1)!=strlen(input2))
  {
    return false;
  }
  int freq1[26]={0};
  int freq2[26]={0};
  for(int i = 0;input1[i]!='\0';i++)
  {
    freq1[input1[i]-'a']++;
  }

  for(int i = 0;input2[i]!='\0';i++)
  {
    freq2[input2[i]-'a']++;
  }

  for(int i = 0;i<26;i++)
  {
    if(freq1[i]!=freq2[i])
    {
      return false;
    }
  }
  return true;
} */

//Approach 2
bool isPermutation(char input1[], char input2[])
{
  int freq1[26]={0};
  if(strlen(input1)!=strlen(input2))
  {
    return false;
  }
  for(int i = 0;input1[i]!='\0';i++)
  {
    freq1[input1[i]-'a']++;
  }

  for(int i = 0;input2[i]!='\0';i++)
  {
    freq1[input2[i]-'a']--;
  }
  for(int i = 0;i<26;i++)
  {
    if(freq1[i]!=0)
    {
      return false;
    }
  }
  return true;
}

//Main function
int main()
{

  //Getting the string inputs from the user.
  char str1[100],str2[100];
  cout<<"Enter the first string: ";
  cin>>str1;
  cout<<"Enter the second string: ";
  cin>>str2;

  //Callig the function and storing the result un the 'res' variable.
  bool res = isPermutation(str1, str2);

  //Printing whether the strings are permutation to each other or not.
  if(res==true)
  {
    cout<<"Both the strings are permutation to each other :)";
  }
  else
  {
    cout<<"The strings are not permutation to each other :(";
  }
}