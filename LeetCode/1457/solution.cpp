// 1457. Pseudo-Palindromic Paths in a Binary Tree
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
    vector<int> digit;

    int pseudoPalindromicPaths (TreeNode* root) {
        digit.resize(10, 0);
        return dfs(root);
    }

    int dfs(TreeNode* node){
        if(node==nullptr) 
            return 0;

        digit[node->val]++;

        if(node->left==nullptr && node->right==nullptr){
            int cnt = oddCount();
            digit[node->val]--;
            return cnt <= 1;
        }

        int left = dfs(node->left);
        int right = dfs(node->right);

        digit[node->val]--;

        return left + right;
    }

    int oddCount(){
        int cnt = 0;
        for(int i=1; i<10; i++) {
            if(digit[i] & 1) cnt++;
        }
        return cnt;
    }
};