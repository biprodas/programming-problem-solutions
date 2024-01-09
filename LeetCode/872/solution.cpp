// 872. Leaf-Similar Trees
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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
      vector<int> list1, list2;

      dfs(root1, list1);
      dfs(root2, list2);
      
      return list1 == list2;
    }

    void dfs(TreeNode* node, vector<int>& list) {
      if (!node) return;

      if (!node->left && !node->right) {
        list.push_back(node->val);
        return;
      }

      dfs(node->left, list);
      dfs(node->right, list);
    }
};