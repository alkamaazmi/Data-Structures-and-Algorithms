/*
 * [94] Binary Tree Inorder Traversal
 * Given the root of a binary tree, return the inorder traversal of its nodes' values.
 * An inorder traversal technique follows the Left Root Right policy.
 */


class Solution {
public:
    void helper(TreeNode * root,vector<int> &ans){
        if(root==NULL){
            return;
        }
        helper(root->left,ans);
        ans.push_back(root->val);
        helper(root->right,ans);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        helper(root,ans);
        return ans;
    }
};

//Time complexity: O(n)
//Space complexity: O(n)

