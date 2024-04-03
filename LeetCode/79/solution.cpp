// 79. Word Search
class Solution {
public:
    int n, m;
    bool exist(vector<vector<char>>& board, string word) {
        n = board.size();
        m = board[0].size();

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(dfs(i, j, 0, board, word)){
                    return true;
                }
            }
        }

        return false;
    }

    bool dfs(int i, int j, int k, vector<vector<char>>& board, string& word){
        if(k == word.length()) 
            return true;
        if(i<0 || i>=n || j<0 || j>=m || board[i][j] != word[k])
            return false;
        
        char ch = board[i][j];
        board[i][j] = '.';        
        
        bool lt = dfs(i-1, j, k+1, board, word);
        bool rt = dfs(i+1, j, k+1, board, word);
        bool up = dfs(i, j-1, k+1, board, word);
        bool dn = dfs(i, j+1, k+1, board, word);

        board[i][j] = ch;

        return lt || rt || up || dn;
    }
};