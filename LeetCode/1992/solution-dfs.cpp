// 1992. Find All Groups of Farmland
// Time: O(n*m)
// Space: O(n*m)

class Solution {
public:
    int rows = 0;
    int cols = 0;

    vector<vector<int>> ans;

    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        rows = land.size();
        cols = land[0].size();
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                if(land[i][j]==1){
                    int r1=i, c1=j, r2=i, c2=j;
                    dfs(i, j, r1, c1, r2, c2, land);
                    ans.push_back({ r1, c1, r2, c2 });   
                }
            }
        }
        return ans;
    }

    void dfs(int i, int j, int& r1, int& c1, int& r2, int& c2,vector<vector<int>>& land){
        if(i<0 || i>=rows || j<0 || j>=cols) return;
        if(land[i][j]!=1) return;
       
        // mark as visited
        land[i][j] = -1;

        r1 = min(r1, i), c1 = min(c1, j);
        r2 = max(r2, i), c2 = max(c2, j);

        dfs(i+1, j, r1, c1, r2, c2, land);
        dfs(i, j+1, r1, c1, r2, c2, land);
        dfs(i-1, j, r1, c1, r2, c2, land);
        dfs(i, j-1, r1, c1, r2, c2, land);
    }
};