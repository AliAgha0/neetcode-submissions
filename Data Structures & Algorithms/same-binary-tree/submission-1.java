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
    public boolean isSameTree(TreeNode p, TreeNode q) 
    {
        ArrayList<Integer> resultP = flattenTree(p);
        ArrayList<Integer> resultQ = flattenTree(q);
        return (resultP.equals(resultQ));


    }

    private ArrayList<Integer> flattenTree(TreeNode root)
    {
        ArrayList<Integer> list = new ArrayList<>();
        Queue<TreeNode> queue = new LinkedList<>();
        queue.add(root);

        while (!queue.isEmpty())
        {
            TreeNode current = queue.poll();

            if (current == null)
            {
                list.add(null);
            }

            else
            {
                list.add(current.val);

                queue.add(current.left);
                queue.add(current.right);
            }
        }
        

        return list;
    }
}
