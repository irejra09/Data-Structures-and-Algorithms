/* Invert Binary Tree
Easy
12.2K
173
Companies

Given the root of a binary tree, invert the tree, and return its root.

 

Example 1:

Input: root = [4,2,7,1,3,6,9]
Output: [4,7,2,9,6,3,1]

Example 2:

Input: root = [2,1,3]
Output: [2,3,1]

Example 3:

Input: root = []
Output: []

 

Constraints:

    The number of nodes in the tree is in the range [0, 100].
    -100 <= Node.val <= 100

 */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) 
    {
        if(root == NULL)
        {
            return NULL;
        }

        /* if(root -> left != NULL && root -> right != NULL)
        {
            int temp = root -> left -> val;
            root -> left -> val = root -> right -> val;
            root -> right -> val = temp;

            invertTree(root -> left);
            invertTree(root -> right);
        } */
        TreeNode* temp = root->left;
        root->left = invertTree(root->right);
        root->right = invertTree(temp);


        return root;
    }
};