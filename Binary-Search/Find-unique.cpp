// You have been provided a sorted array with each element occuring twice
//and There is a single element which has been ocurring only once.

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    vector<int> arr(n);
    cout<<"Enter the size of the array:";
    cin>>n;
    cout<<"Enter the elements of the array:"<<endl;
    for(int i = 0; i < n ;i++)
    {
        cin>>arr[i];
    }
    //implementing the binary search logic to find the unique element
    int l = 0;
    int r = n-1;
    while(l <= r)
    {
        int mid = (l+r)/2;
        if(arr[mid] == arr[mid^1])
        {
            l = mid+1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout<<"The unique element in the array is "<<arr[l]<<" present at index "<<l+1;
    return 0;
}
