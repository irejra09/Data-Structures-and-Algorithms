#include<iostream>
#include<vector>
using namespace std;

void helper(vector<int> &help, int n)
{
    if(n == 1)
    {
        help.push_back(1);
        return;
    }
    help.push_back(n);
    helper(help,n-1);
}

vector<int> printNos(int x) 
{
    // Write Your Code Here
    vector<int> ans;
    helper(ans,x);
    return ans;
}


int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"The numbers from "<<n<<" to 1 are: ";
    vector<int> ans = printNos(n);
    for(int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}