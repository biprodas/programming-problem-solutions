// 513. Find Bottom Left Tree Value
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
    int leftMost;
    int maxDepth;

    int findBottomLeftValue(TreeNode* root) {
        leftMost = 0;
        maxDepth = -1;
        dfs(root, 0);
        return leftMost;
    }

    void dfs(TreeNode* curr, int depth) {
        if(!curr) return;
        if (depth > maxDepth) {
            maxDepth = depth;
            leftMost = curr->val;
        }
        dfs(curr->left, depth+1);
        dfs(curr->right, depth+1);
    }
};