/* Given two strings, where the first string may contain wild card characters and the second string is a normal string. Write a function that returns true if the two strings match. The following are allowed wild-card characters in the first string:


* - Matches with 0 or more instances of any character or set of characters.

? - Matches with any one character.
Input format :

The first string contains the characters along with the symbols - ? and *.

The second string is the one without any symbols.
Output format :

The output displays either "Yes" or "No", based on the string matching.
Code constraints :

2 <= Length of the string <= 100


Sample test cases :
Input 1 :

i?mneo
iamneo

Output 1 :

Yes

Input 2 :

i?m
iaam

Output 2 :

No

Input 3 :

i*mn?o
iaamneo

Output 3 :

Yes */

#include <iostream>
using namespace std;


//ValidWildCard function
bool ValidWildcard(string &s, string &t)
{
    int minLen = s.size();
    int i = 0, j = 0;
    bool ans = true;
    while( i < minLen)
    {
        if(s[i] == t[j])
        {
            i++;
            j++;
            ans = true;
        }
        else if(s[i] == '?')
        {
            i++;
            j++;
            ans = true;
        }
        else if(s[i] == '*')
        {
            ans = true;
            char x = t[j];
            while(t[j] == x)
            {
                j++;
            }
            i++;
        }
        else return false;
    }
    return ans;
}

int main()
{
    string s1;
    string s2;
    cout<<"Enter the string S1:";
    cin>>s1;
    cout<<"Enter the string S2:";
    cin>>s2;

    //function to check whether it is valid wildcard or not
    ValidWildcard(s1,s2) == 1 ? cout<<"True" : cout<<"False";
    return 0;
}