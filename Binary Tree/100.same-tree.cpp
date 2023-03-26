/*
 * [100] Same Tree
 * Given the roots of two binary trees p and q, write a function to check if they are the same or not.
 * Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.
 */

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL and q==NULL){
            return true;
        }else if(p==NULL || q==NULL){
            return false;
        }else if(p->val==q->val){
            return (isSameTree(p->right,q->right)&&isSameTree(p->left,q->left));
        }else{
            return false;
        }
    
    }
};


