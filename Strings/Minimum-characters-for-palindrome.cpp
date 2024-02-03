// Problem statement
// Given a string STR of length N. The task is to return the count of minimum characters to be added at front to make the string a palindrome.

// For example, for the given string “deed”, the string is already a palindrome, thus, minimum characters needed are 0.

// Similarly, for the given string “aabaaca”, the minimum characters needed are 2 i.e. ‘a’ and ‘c’ which makes the string “acaabaaca” palindrome.

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= T <= 10 
// 1 <= N <= 10 ^ 5 
// STR contains only lowercase English letters.

// Time limit: 1 sec
// Sample input 1 :
// 2
// abcd
// dad 
// Sample output 1 :
// 3
// 0
// Explanation of sample input 1 :
// For test case 1 : 
// Minimum characters to be added at front to make it a palindrome are 3 i.e. “dcb” which makes the string “dcbabcd”.  

// For test case 2 :
// The string is already a palindrome, we do not need to add any character.     
// Sample input 2 :
// 2
// xxaxxa    
// abb
// Sample output 2 :
// 1
// 2
#include<iostream>
#include<string>
using namespace std;

int minCharsforPalindrome(string str)
{
    int len = str.size();
    int i = 0;
    int j = len-1;
    int count=0;
    int trim = j;
    while(i < j)
    {
        if(str[i] == str[j])
        {
            i++;
            j--;
        }
        else
        {
            i=0;
            count++;
            j = --trim;
        }
    }
    return count;
}

int main()
{
    int t;
    cin>>t;
    while(t > 0)
    {
        string s;
        cout<<"Enter the string:";
        cin>>s;
        cout<<"Minimum no of characters need to be inserted in the beginning to make this string palidrome is: "<<minCharsforPalindrome(s)<<endl;
        t--;
    }
    return 0;
}
