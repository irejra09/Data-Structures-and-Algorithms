
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        unordered_map<char,int> mp;
        for(int i = 0; i < ransomNote.size(); i++)
        {
            mp[ransomNote[i]]++;
        }    
        for(int i = 0; i < magazine.size(); i++)
        {
            mp[magazine[i]]--;
        }

        for(auto it: mp)
        {
            if(it.second > 0) return false;
        }
        return true;
    }
};

int main()
{
    Solution solution;
    string ransomNote = "aa";
    string magazine = "aab";

    cout << (solution.canConstruct(ransomNote, magazine) ? "true" : "false") << endl;

    return 0;
}
