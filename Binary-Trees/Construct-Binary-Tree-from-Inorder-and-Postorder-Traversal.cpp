/* Given two integer arrays inorder and postorder where inorder is the inorder traversal of a binary tree and postorder is the postorder traversal of the same tree, construct and return the binary tree.

 

Example 1:

Input: inorder = [9,3,15,20,7], postorder = [9,15,7,20,3]
Output: [3,9,20,null,null,15,7]

Example 2:

Input: inorder = [-1], postorder = [-1]
Output: [-1]

 

Constraints:

    1 <= inorder.length <= 3000
    postorder.length == inorder.length
    -3000 <= inorder[i], postorder[i] <= 3000
    inorder and postorder consist of unique values.
    Each value of postorder also appears in inorder.
    inorder is guaranteed to be the inorder traversal of the tree.
    postorder is guaranteed to be the postorder traversal of the tree.

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
    TreeNode* buildTreeHelper(vector<int>& inO,vector<int>& postO,int inS,int inE,int postS,int postE)
    {
        if(postS > postE)
        {
            return NULL;
        }
        TreeNode *root = new TreeNode(postO[postE]);
        int k = 0;
        for(int i = inS; i<=inE;i++)
        {
            if(postO[postE]==inO[i])
            {
                k=i;
                break;
            }
        }
        int linS = inS;
        int linE = k-1;
        int lpostS = postS;
        int lpostE = linE - linS + lpostS;
        int rinS = k + 1;
        int rinE = inE;
        int rpostS = lpostE + 1;
        int rpostE = postE - 1;

        root -> left = buildTreeHelper(inO,postO,linS,linE,lpostS,lpostE);
        root -> right = buildTreeHelper(inO,postO,rinS,rinE,rpostS,rpostE);
        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) 
    {
        return buildTreeHelper(inorder,postorder,0,inorder.size()-1,0,postorder.size()-1);
    }
};