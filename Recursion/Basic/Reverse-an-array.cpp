#include<iostream>
#include<vector>
using namespace std;

void helper(int start, int end, vector<int> &help)
{
    if(start < end)
    {
        swap(help[start],help[end]);
        helper(start+1,end-1,help);
    }
    return;
}

void reverseArray(int size, vector<int> &nums)
{
    if(size == 1) return;
    helper(0,size-1,nums);
}

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the array elements: ";
    for(int i = 0; i < n; i++)
    {
        int k;
        cin>>k;
        arr[i] = k;
    }
    reverseArray(n,arr);
    cout<<"The array after reverse is: ";
    for(int i = 0; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}