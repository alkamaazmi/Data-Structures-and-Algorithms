/*
 * [145] Binary Tree Postorder Traversal
 * Given the root of a binary tree, return the postorder traversal of its nodes' values.
 * Given the root of a binary tree, return the postorder traversal of its nodes' values.
 */

class Solution {
public:
    void helper(TreeNode * root,vector<int> &ans){
        if(root==NULL){
            return;
        }
        helper(root->left,ans);
        helper(root->right,ans);
        ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        helper(root,ans);
        return ans;
    }
};

//Time complexity: O(n)
//Space complexity: O(n)

