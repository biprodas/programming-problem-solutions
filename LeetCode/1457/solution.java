// 1457. Pseudo-Palindromic Paths in a Binary Tree
/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    int[] digit = new int[10];

    public int pseudoPalindromicPaths(TreeNode root) {
        return dfs(root);
    }
    
    private int dfs(TreeNode node){
        if(node==null) return 0;

        digit[node.val]++;

        if(node.left==null && node.right==null){
            int cnt = oddCount();
            digit[node.val]--;
            return cnt <= 1 ? 1 : 0;
        }

        int left = dfs(node.left);
        int right = dfs(node.right);

        digit[node.val]--;

        return left + right;
    }

    int oddCount(){
        int cnt = 0;
        for(int i=1; i<10; i++) {
            if((digit[i] & 1) == 1) cnt++;
        }
        return cnt;
    }
}