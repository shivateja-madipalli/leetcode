/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
public class Solution {
    private void helper(TreeNode node, List<Integer> vals) {
        if (node == null) return;
        helper(node.left, vals);
        helper(node.right, vals);
        vals.add(node.val);
        return;
    }

    public List<Integer> postorderTraversal(TreeNode root) {
        List<Integer> vals = new ArrayList<Integer>();
        helper(root, vals);
        return vals;
    }
}
