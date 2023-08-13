/* Longest Common Prefix

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"

Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
 */
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        string ans = "";
        int n = strs.size();
        
        for(int i = 0; i < strs[0].size(); i++)
        {
            bool match = true;
            char ch = strs[0][i];
            for(int j = 1; j < n; j++)
            {
                //not match
                if(strs[j].size() < i || ch != strs[j][i])
                {
                    match = false;
                    break;
                }
            }
            if(match == false) break;
            ans += ch;
        }
        return ans;
    }
};