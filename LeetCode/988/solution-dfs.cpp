// 988. Smallest String Starting From Leaf

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
    string smallest;

    string smallestFromLeaf(TreeNode* root) {
        dfs(root, "");
        return smallest;
    }

    void dfs(TreeNode* node, string path) {
        if(!node) return;
        
        path += char('a' + node->val);
        
        if(!node->left && !node->right) {
            reverse(path.begin(), path.end());
            if(smallest.empty() || path < smallest) {
                smallest = path;
            }
            reverse(path.begin(), path.end());
        }
        
        dfs(node->left, path);
        dfs(node->right, path);
    }
};