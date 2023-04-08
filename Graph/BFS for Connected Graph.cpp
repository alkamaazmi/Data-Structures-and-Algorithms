/*
 * BFS for Connected Graph
 */

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int> ans;
        vector<int> vis(V,0);
        queue<int> q;
        q.push(0);
        vis[0]=1;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            ans.push_back(node);
            for(auto i:adj[node]){
                if(vis[i]==0){
                    q.push(i);
                    vis[i]=1;
                }
            }
        }
        return ans;
    }
};