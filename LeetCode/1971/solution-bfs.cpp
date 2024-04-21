// 1971. Find if Path Exists in Graph
// Time: O(V+E)
// Space: O(V+E)
class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> graph(n);
        
        for(const auto& edge: edges) {
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }
        
        queue<int> q;
        vector<bool> visited(n);

        q.push(source);
        visited[source] = true;

        while(!q.empty()){
            int node = q.front();
            q.pop();

            if(node==destination) 
                return true;

            for(int adj: graph[node]){
                if(!visited[adj]){
                    q.push(adj);
                    visited[adj] = true;
                }
            }
        }

        return false;
    }
};