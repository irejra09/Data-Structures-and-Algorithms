/* Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.

 

Example 1:

Input: intervals = [[1,3],[2,6],[8,10],[15,18]]
Output: [[1,6],[8,10],[15,18]]
Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].

Example 2:

Input: intervals = [[1,4],[4,5]]
Output: [[1,5]]
Explanation: Intervals [1,4] and [4,5] are considered overlapping.

 

Constraints:

    1 <= intervals.length <= 104
    intervals[i].length == 2
    0 <= starti <= endi <= 104

 */

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        //Brute force Approach//
        /* sort(intervals.begin(), intervals.end());
        vector<vector<int>> vp;
        for(int i = 0; i < intervals.size(); i++)
        {
            int start = intervals[i][0];
            int end = intervals[i][1];
            if(vp.size() && end <= vp[vp.size()-1][1])
            {
                continue;
            }
            for(int j = i+1; j< intervals.size();j++)
            {
                if(intervals[j][0] <= end)
                {
                    end = max(end,intervals[j][1]);
                }
                else
                {
                    break;
                }
            }
            vp.push_back({start,end});
        }
        return vp; */
        
        sort(intervals.begin(), intervals.end());
        vector<int> v = intervals[0];
        vector<vector<int>> answala;
        for(auto it: intervals)
        {
            if(it[0] <= v[1])
            {
                v[1] = max(it[1],v[1]);
            }
            else
            {
                answala.push_back(v);
                v = it;
            }
        }
        answala.push_back(v);
        return answala;
    }
};