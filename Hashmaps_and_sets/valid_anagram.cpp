
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        unordered_map<char,int> mp;
        bool map = true;
        for(int i = 0; i<s.size(); i++)
        {
            mp[s[i]]++;
        }
        
        for(int i = 0; i < t.size(); i++)
        {
            mp[t[i]]--;
        }
        
        for(auto it:mp)
        {
            if(it.second != 0)
            {
                return false;
            }
        }
        return map;
    }
};

int main()
{
    Solution solution;
    string s = "anagram";
    string t = "nagaram";

    cout << (solution.isAnagram(s, t) ? "true" : "false") << endl;

    return 0;
}
