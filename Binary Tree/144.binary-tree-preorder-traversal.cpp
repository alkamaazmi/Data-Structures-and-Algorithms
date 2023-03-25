/*
 * [144] Binary Tree Preorder Traversal
 * Given the root of a binary tree, return the preorder traversal of its nodes' values.
 * The preorder traversal technique follows the Root Left Right policy. 
 */

class Solution {
public:
    void helper(TreeNode * root,vector<int> &ans){
        if(root==NULL){
            return;
        }
        ans.push_back(root->val);
        helper(root->left,ans);        
        helper(root->right,ans);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        helper(root,ans);
        return ans;
    }
};

//Time complexity: O(n)
//Space complexity: O(n)
