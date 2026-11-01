
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        // Transposing the matrix
        for(int i = 0; i < matrix.size(); i++)
        {
            for(int j = i + 1; j < matrix[0].size(); j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Reversing each row
        int n = matrix.size();

        for(int i = 0; i < n; i++)
        {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};

int main()
{
    // Input matrix
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    Solution obj;

    // Rotate matrix 90 degrees clockwise
    obj.rotate(matrix);

    // Print rotated matrix
    cout << "Matrix after 90-degree clockwise rotation:" << endl;

    for(int i = 0; i < matrix.size(); i++)
    {
        for(int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
