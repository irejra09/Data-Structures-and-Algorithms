#include<iostream>
#include<string>
using namespace std;

bool helper(int start, int end, string &S)
{
    bool flag = false;
    if(start < end)
    {
        if(S[start] == S[end])
        {
            flag = true;
            helper(start+1,end-1,S);
        }
        else{
            flag = false;
        }
    }
    return flag;
}

int isPalindrome(string &s,int size)
{
    if(helper(0,size-1,s))
    {
        return 1;
    }
    return 0;
}

int main()
{
    string s;
    cout<<"Enter a string without spaces: ";
    cin>>s;
    if(isPalindrome(s,s.size()))
    {
        cout<<"The entered string is palindrome."<<endl;
    }
    else
    {
        cout<<"The entered string is not palindrome."<<endl;
    }
    return 0;
}