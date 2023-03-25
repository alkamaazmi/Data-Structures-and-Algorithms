/*
 * Given a Binary Search Tree. The task is to find the minimum valued element in this given BST.
 */

int minValue(Node* root) {
    if(root==NULL){
        return -1;
    }
    if(root->left==NULL){
        return root->data;
    }else{
        return minValue(root->left);
    }
}