
#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxNumberOfBalloons(string text) 
    {
        int n = text.size();
        unordered_map<char,int> mpp;
        for(auto it: text)
        {
            mpp[it]++;
        }

        int mini = min({mpp['a'],mpp['b'],mpp['l']/2,mpp['o']/2,mpp['n']});
        return mini;
    }
};

int main()
{
    Solution solution;
    string text = "nlaebolko";

    cout << solution.maxNumberOfBalloons(text) << endl;

    return 0;
}
