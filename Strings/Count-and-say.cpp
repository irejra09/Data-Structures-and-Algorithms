// Problem statement
// The Look-And-Say sequence is a sequence of positive integers. The sequence is as follows:

// 1, 11, 21, 1211, 111221, 312211, 13112221,...

// This sequence is constructed in the following way:

// The first number is 1.

// This is read as “One 1”. 
// Hence, the second number will be 11.

// The second number is read as “Two 1s”. 
// Hence, the third number will be 21.

// The third number is read as “One 2, One 1”. 
// Hence, the fourth number will be 1211. And so on.

// The fourth term is read as “One 1, One 2, Two 1s”.

// Hence, the fifth term will be 111221. And so on.
// Given an integer N, find the Nth term of the sequence.
// Constraints:
// 1 <= T <= 30
// 1 <= N <= 40

// Where 'T' is the number of test cases and 'N' is the given sequence index.

// Time Limit: 1 sec
// Sample Input 1:
// 3
// 1
// 2
// 3
// Sample Output 1:
// 1
// 11
// 21
// Explanation for Sample 1:
// The first term is 1.

// The second term is 11.

// The third term is 21.
#include<iostream>
#include<string>
using namespace std;

string Nthnumber(int n)
{
    if(n == 1) return "1";
    if(n == 2) return "11";
    string s = "11";
    for(int i = 3; i <= n; i++)
    {
        string temp = "";
        s = s+'&';
        int cnt = 1;
        for(int j = 1; j < s.size(); j++)
        {
            if(s[j] == s[j-1])
            {
                cnt++;
            }
            else
            {
                temp += to_string(cnt);
                temp += s[j-1];
                cnt = 1;
            }
        }
        s = temp;
    }
    return s;
}
int main()
{
    int t;
    cout<<"Enter the numbe rof test cases: ";
    cin>>t;
    while(t > 0)
    {
        int n;
        cout<<"Enter the value of n: ";
        cin>>n;
        cout<<"The "<<n<<"th "<<"string is :"<<Nthnumber(n)<<endl;
        t--;
    }
    return 0;
}