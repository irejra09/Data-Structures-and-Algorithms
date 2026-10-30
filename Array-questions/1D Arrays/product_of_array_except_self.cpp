#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> left(n, 1);
        vector<int> right(n, 1);

        // Left array product
        for(int i = 1; i < n; i++)
        {
            left[i] = nums[i-1] * left[i-1];
        }

        // Right array product
        for(int i = n-2; i > -1; i--)
        {
            right[i] = right[i+1] * nums[i+1];
        }

        vector<int> ans(n, 0);

        for(int i = 0; i < n; i++)
        {
            ans[i] = left[i] * right[i];
        }

        return ans;
    }
};

int main()
{
    Solution obj;

    vector<int> nums = {1, 2, 3, 4};

    vector<int> ans = obj.productExceptSelf(nums);

    for(int x : ans)
    {
        cout << x << " ";
    }

    return 0;
}