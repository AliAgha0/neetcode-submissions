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
    private:
     int longestPath = 0;


    private:
     int calculateHeight(TreeNode* node)
    {
        if (node == nullptr)
        {
            return 0;
        }

        int leftHeight = calculateHeight(node->left);
        int rightHeight = calculateHeight(node->right);

        longestPath = std::max(longestPath, leftHeight + rightHeight);
        return std::max(leftHeight, rightHeight) + 1;
    }
    public:
    
    int diameterOfBinaryTree(TreeNode* root) 
    {

        longestPath = 0;
        calculateHeight(root);
        return longestPath;
    }
};
