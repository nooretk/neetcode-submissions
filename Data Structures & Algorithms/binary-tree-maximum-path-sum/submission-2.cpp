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
    int ans = INT_MIN;
    int maxPathSum(TreeNode* root) {
       solve(root);
       return ans;
    }

    int solve(TreeNode* node)
    {
        if (!node) return 0;

        int val = node->val;
        int left = max(0, solve(node->left));
        int right = max(0, solve(node->right));

        ans = max(ans, val + left + right);

        return val + max(left, right); 
    }
};
