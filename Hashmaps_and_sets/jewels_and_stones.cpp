
#include <iostream>
#include <string>
#include <set>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) 
    {
        set<char> ss;
        int j = jewels.size();
        int s = stones.size();

        int i = 0;
        while(i < j)
        {
            ss.insert(jewels[i]);
            i++;
        }

        int cnt = 0;

        for(int i = 0; i < s; i++)
        {
            if(ss.find(stones[i]) != ss.end())
            {
                cnt++;
            }
        }

        return cnt;
    }
};

int main()
{
    Solution sol;

    string jewels = "aA";
    string stones = "aAAbbbb";

    cout << "Number of Jewels: "
         << sol.numJewelsInStones(jewels, stones)
         << endl;

    return 0;
}
