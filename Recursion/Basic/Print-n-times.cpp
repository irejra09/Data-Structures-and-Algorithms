#include<iostream>
#include<vector>
#include<string>
using namespace std;

void helper(vector<string> &ans,int n,string &s)
{
	if(n == 1)
	{
		ans.push_back(s);
		return;
	}
	ans.push_back(s);
	helper(ans,n-1,s);
}

vector<string> printNTimes(int n,string &s) 
{
	// Write your code here.
	vector<string> ans;
	helper(ans,n,s);
	return ans;
}

int main()
{
    string s;
    cout<<"Enter the string s: ";
    getline(cin,s);
    int n;
    cout<<"Enter the number of times you want the string s to be printed: ";
    cin>>n;
    vector<string> Str = printNTimes(n,s);
    for(int i = 0; i < n; i++)
    {
        cout<<Str[i]<<endl;
    }
    return 0;

}