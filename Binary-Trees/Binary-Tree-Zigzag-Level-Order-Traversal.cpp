/* Given the root of a binary tree, return the zigzag level order traversal of its nodes' values. (i.e., from left to right, then right to left for the next level and alternate between).

 

Example 1:

Input: root = [3,9,20,null,null,15,7]
Output: [[3],[20,9],[15,7]]

Example 2:

Input: root = [1]
Output: [[1]]

Example 3:

Input: root = []
Output: []

 

Constraints:

    The number of nodes in the tree is in the range [0, 2000].
    -100 <= Node.val <= 100

 */

class Solution {
public:


    vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
    {
        vector<vector<int>> result;
        if (root == nullptr) {
            return result;
        }
        
        stack<TreeNode*> s1;
        stack<TreeNode*> s2;
        s1.push(root);
        bool leftToRight = true;
        
        while (!s1.empty() || !s2.empty()) {
            vector<int> levelValues;
            
            if (leftToRight) {
                while (!s1.empty()) {
                    TreeNode* node = s1.top();
                    s1.pop();
                    levelValues.push_back(node->val);
                    
                    if (node->left) {
                        s2.push(node->left);
                    }
                    
                    if (node->right) {
                        s2.push(node->right);
                    }
                }
            } else {
                while (!s2.empty()) {
                    TreeNode* node = s2.top();
                    s2.pop();
                    levelValues.push_back(node->val);
                    
                    if (node->right) {
                        s1.push(node->right);
                    }
                    
                    if (node->left) {
                        s1.push(node->left);
                    }
                }
            }
            
            if (!levelValues.empty()) {
                result.push_back(levelValues);
            }
            
            leftToRight = !leftToRight;
        }
        
        return result;
    }
};