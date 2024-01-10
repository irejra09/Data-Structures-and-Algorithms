//Given a sorted array of size n. Find a number of elements that are less than or equal to a given element.

#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arraySize = 8;
    int arr[8] = {10,20,30,40,50,60,70,80};
    int n = 5;

    int start = 0;
    int end = arraySize - 1;
    int ans = 0;

    while(start <= end)
    {
        int mid = start + (end - start)/2;
        if(arr[mid] <= n)
        {
            ans = mid;
            start = mid+1;
        }
        else
        {
            end = mid -1;
        }
    }
    if(ans == 0)
    {
        cout<<"The number of elements smaller than or equal to "<<n<<" are "<<ans<<endl;
        return 0;

    }
    cout<<"The number of elements smaller than or equal to "<<n<<" are "<<ans+1<<endl;
    return 0;
}