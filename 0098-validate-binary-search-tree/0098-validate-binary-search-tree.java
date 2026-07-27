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
    public boolean isValidBST(TreeNode root) {
        return isValid( Long.MIN_VALUE , root, Long.MAX_VALUE );
    }

    public boolean isValid(long minval , TreeNode root, long maxval) {
        if(root == null) return true;

        if(root.val >= maxval || root.val <= minval) return false;

        return  isValid(minval, root.left , root.val ) && 
                isValid(root.val , root.right, maxval);

    }

}