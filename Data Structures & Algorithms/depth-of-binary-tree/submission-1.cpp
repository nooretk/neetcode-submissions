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
    int maxDepth(TreeNode* root) {
        if (!root) return 0;
        return max(solve(root->left, 1), solve(root->right, 1));
    }

    int solve(TreeNode* root, int ans)
    {
        if (!root) return ans;
        else ans++;
        
        return max(solve(root->left, ans), solve(root->right, ans));
    }
};
