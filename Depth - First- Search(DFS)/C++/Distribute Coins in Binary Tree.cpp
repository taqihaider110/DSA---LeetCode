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
    int res;

    Solution() : res(0) {}

    int distributeCoins(TreeNode* root) {
        dfs(root);
        return res;
    }

private:
    int dfs(TreeNode* curr) {
        if (!curr) {
            return 0;
        }

        int l_extra = dfs(curr->left);
        int r_extra = dfs(curr->right);
        int extra_coins = curr->val - 1 + l_extra + r_extra;
        res += abs(extra_coins);

        return extra_coins;
    }
};