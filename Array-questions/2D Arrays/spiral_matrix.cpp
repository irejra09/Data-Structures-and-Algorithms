
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        // Number of rows
        int m = matrix.size();

        // Handle empty matrix
        if (m == 0) return {};

        // Number of columns
        int n = matrix[0].size();

        // Total number of elements
        int elements = m * n;

        // Initialize boundaries
        int top = 0;
        int left = 0;
        int right = n - 1;
        int bottom = m - 1;

        int count = 0;
        vector<int> ans;

        while (count < elements)
        {
            // Traverse from left to right
            for (int i = left; i <= right && count < elements; i++)
            {
                ans.push_back(matrix[top][i]);
                count++;
            }
            top++;

            // Traverse from top to bottom
            for (int i = top; i <= bottom && count < elements; i++)
            {
                ans.push_back(matrix[i][right]);
                count++;
            }
            right--;

            // Traverse from right to left
            for (int i = right; i >= left && count < elements; i--)
            {
                ans.push_back(matrix[bottom][i]);
                count++;
            }
            bottom--;

            // Traverse from bottom to top
            for (int i = bottom; i >= top && count < elements; i--)
            {
                ans.push_back(matrix[i][left]);
                count++;
            }
            left++;
        }

        return ans;
    }
};

int main()
{
    // Input matrix
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    Solution obj;

    // Get spiral order
    vector<int> result = obj.spiralOrder(matrix);

    // Print result
    cout << "Spiral Order: ";

    for (int num : result)
    {
        cout << num << " ";
    }

    cout << endl;

    return 0;
}
