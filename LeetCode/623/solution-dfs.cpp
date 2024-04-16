// 623. Add One Row to Tree
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
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        return dfs(root, val, depth, 1);
    }

    TreeNode* dfs(TreeNode* root, int val, int depth, int curr) {
        if(!root) return nullptr;

        if(depth == 1){
            TreeNode* newRoot = new TreeNode(val);
            newRoot->left = root;
            newRoot->right = nullptr;
            return newRoot;
        }

        if(curr == depth - 1){
            TreeNode* leftSubtree = root->left;
            TreeNode* rightSubtree = root->right;

            root->left = new TreeNode(val);
            root->left->left = leftSubtree;
            root->left->right = nullptr;

            root->right = new TreeNode(val);
            root->right->left = nullptr;
            root->right->right = rightSubtree;
            
            return root;
        }

        root->left = dfs(root->left, val, depth, curr + 1);
        root->right = dfs(root->right, val, depth, curr + 1);

        return root;
    }
};