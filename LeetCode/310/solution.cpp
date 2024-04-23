// 310. Minimum Height Trees
class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if (n==1) return {0};

        vector<vector<int>> graph(n);
        vector<int> deg(n, 0);

        for(auto& edge: edges){
            int u = edge[0], v = edge[1];
            graph[u].push_back(v);
            graph[v].push_back(u);
            deg[u]++;
            deg[v]++;
        }

        queue<int> q;
        for(int i=0; i<n; i++){
            if(deg[i]==1)
                q.push(i);
        }

        vector<int> ans;
        int cnt = n;

        while(!q.empty()){
            int sz = q.size();
            cnt -= sz;
            for(int i=0; i<sz; i++){
                int node = q.front();
                q.pop();
                
                if(cnt==0)
                    ans.push_back(node);

                for(int adj: graph[node]){
                    deg[adj]--;
                    if(deg[adj]==1){
                        q.push(adj);
                    }
                }
            }
        }

        return ans;
    }
};