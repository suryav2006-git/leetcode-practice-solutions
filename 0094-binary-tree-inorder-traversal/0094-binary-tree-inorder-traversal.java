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

    public void recursiveTree(TreeNode root, List<Integer> result) {
        if(root == null) return;

        recursiveTree(root.left , result);

        result.add(root.val);

        recursiveTree(root.right , result);
    }

    public List<Integer> inorderTraversal(TreeNode root) {
        List<Integer> ans = new ArrayList<>();

        recursiveTree(root, ans);

        return ans;
    }
}