// 2385. Amount of Time for Binary Tree to Be Infected
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
    unordered_map<int, vector<int>> graph;

    int amountOfTime(TreeNode* root, int start) {
      constructGraph(root);

      queue<int> q;
      q.push(start);

      unordered_map<int, bool> visited;

      int cnt = 0;

      while (!q.empty()) {
        cnt++;
        for (int level = q.size(); level > 0; --level) {
          int currNode = q.front();
          q.pop();
          visited[currNode] = true;
          for (int adjNode : graph[currNode]) {
            if (!visited[adjNode]) {
              q.push(adjNode);
            }
          }
        }
      }

      return cnt - 1;
    }

    void constructGraph(TreeNode* root) {
      if (!root) return;

      if (root->left) {
        graph[root->val].push_back(root->left->val);
        graph[root->left->val].push_back(root->val);
      }

      if (root->right) {
        graph[root->val].push_back(root->right->val);
        graph[root->right->val].push_back(root->val);
      }

      constructGraph(root->left);
      constructGraph(root->right);
    }
};
