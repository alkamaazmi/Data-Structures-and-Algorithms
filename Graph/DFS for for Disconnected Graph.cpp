/*
 * DFS for Disconnected Graph
 */

class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(int node, vector<int> &ans,vector<int> &visited,vector<int> adj[]){
        ans.push_back(node);
        visited[node]=1;
        for(auto i:adj[node]){
            if(visited[i]==0){
                dfs(i,ans,visited,adj);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> ans; 
        vector<int> visited(V,0);
        dfs(0,ans,visited,adj);
        return ans;
    }
};