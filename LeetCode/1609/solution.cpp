// 1609. Even Odd Tree
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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*> Q;
        Q.push(root);
        int level = 0;

        while(!Q.empty()){
            int sz = Q.size();
            bool isOdd = level & 1;
            bool isEven = !isOdd;
            
            int prev = isOdd ? INT_MAX : INT_MIN;

            for(int i=0; i<sz; i++){
                TreeNode* node = Q.front();
                Q.pop();

                if ((isEven && (node->val % 2 == 0 || node->val <= prev)) ||
                    (isOdd && (node->val % 2 == 1 || node->val >= prev))) {
                    return false;
                }

                prev = node->val;

                if(node->left) Q.push(node->left);
                if(node->right) Q.push(node->right);
            }
            
            level++;
        }

        return true;
    }
};