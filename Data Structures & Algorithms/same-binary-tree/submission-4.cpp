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
    std::vector<int> flattenTree(TreeNode* root)
    {
        std::vector<int> list;
        std::queue<TreeNode*> q;

        q.push(root);

        while (!q.empty())
        {
            TreeNode* current = q.front();
            q.pop();

            if (current == nullptr)
            {
                list.push_back(-10001);
            }
            else
            {
                list.push_back(current->val);
                q.push(current->left);
                q.push(current->right);


            }
        }

        return list;
    }
public:
    bool isSameTree(TreeNode* p, TreeNode* q) 
    {
    
        std::vector<int> resultP = flattenTree(p);
        std::vector<int> resultQ = flattenTree(q);
        return resultP == resultQ;
    }
};
