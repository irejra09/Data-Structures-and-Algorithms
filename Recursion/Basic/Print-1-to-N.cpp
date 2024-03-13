#include <iostream>
#include <vector>
using namespace std;

void addDigits(vector<int> &ans,int n, int x)
{
    if(n == x)
    {
        ans.push_back(n);
        return;
    }
    ans.push_back(n);
    addDigits(ans,n+1,x);
}

vector<int> printNos(int x) 
{
    // Write Your Code Here
    vector<int> ans;
    int n = 1;
    addDigits(ans,n,x);
    return ans;
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    vector<int> printNo = printNos(n);

    cout<<"The digits are: ";
    for(int i = 0; i < printNo.size(); i++)
    {
        cout<<printNo[i]<<" ";
    }
    cout<<endl;
    return 0;
    
}