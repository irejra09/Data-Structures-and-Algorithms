#include <bits/stdc++.h> 
int flipBits(int* arr, int n) 
{
    // WRITE YOUR CODE HERE
    //BruteForce Approach
    /* int ans=0;
    int oneC=0;
    int cc = 0;
    for(int i = 0;i<n;i++)
    {
        if(arr[i]==0)
        {
            cc++;
        }
        else if(arr[i]==1)
        {
            cc--;
            oneC++;
            if(cc<0)
            {
                cc=0;
            }
        }
        if(cc > ans)
        {
            ans = cc;
        }
    }
    return ans+oneC; */


    //Kadane's algorithm
    int Ones = 0;
    int sum = 0;
    int maxsum=0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i]==1)
        {
            arr[i] = -1;
            Ones++;
        }
        else
        {
            arr[i]=1;
        }
    }

    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
        maxsum = max(sum,maxsum);
        if(sum<0)
        {
            sum = 0;
        }
    }
    return Ones+maxsum;
}