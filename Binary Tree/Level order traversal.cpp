/*
 * Level order traversal
 * Given a binary tree, find its level order traversal.
 * Level order traversal of a tree is breadth-first traversal for the tree.
 */
class Solution
{
    public:
    vector<int> levelOrder(Node* node)
    {
      if(node==NULL){
          return {};
      }
      vector<int> ans;
      queue<Node *> q;
      q.push(node);
      while(!q.empty()){
          Node *n=q.front();
          ans.push_back(n->data);
          if(n->left!=NULL){
              q.push(n->left);
          }if(n->right!=NULL){
              q.push(n->right);
          }
          q.pop();
      }
      return ans;
    }
};

//Time Complexity: O(n)
//Space Complexity: O(n)