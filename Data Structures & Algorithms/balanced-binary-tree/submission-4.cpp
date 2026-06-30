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
    bool isBalanced(TreeNode* root) 
    {
        if (root == nullptr)
        {
            return true;
        }

        else
        {
            int left = getMaxSubtreeHeight(root->left);
            int right = getMaxSubtreeHeight(root->right);
            return std::abs(left - right) <= 1 && isBalanced(root->left) && isBalanced(root->right);
        }
         
    }

    private: int getMaxSubtreeHeight(TreeNode* node)
    {
        if (node == nullptr)
        {
            return 0;
        }

       

        
            return 1 + std::max(getMaxSubtreeHeight(node->left), getMaxSubtreeHeight(node->right));
        
    }
};
