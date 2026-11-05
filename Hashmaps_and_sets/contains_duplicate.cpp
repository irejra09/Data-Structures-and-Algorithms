
#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        set<int> ss;
        for(int i = 0; i < nums.size(); i++)
        {
            if(ss.find(nums[i]) != ss.end())
            {
                return true;
            }
            else
            {
                ss.insert(nums[i]);
            }
        }
        return false;
    }
};

int main()
{
    Solution solution;
    vector<int> nums = {1, 2, 3, 1};

    cout << (solution.containsDuplicate(nums) ? "true" : "false") << endl;

    return 0;
}
