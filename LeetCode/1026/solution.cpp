// 1026. Maximum Difference Between Node and Ancestor 
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
  public:
    int maxAncestorDiff(TreeNode* root) {
      dfs(root, INT_MAX, INT_MIN);
      return diff;
    }
    
  private:
    int diff = 0;

    void dfs(TreeNode* root, int mn, int mx){
      if(!root) return;
      mn = min(mn, root->val);
      mx = max(mx, root->val);
      diff = max(diff, abs(mx-mn));
      dfs(root->left, mn, mx);
      dfs(root->right, mn, mx);
    }
};