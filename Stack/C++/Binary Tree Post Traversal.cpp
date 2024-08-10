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
    void postorderTraversalHelper(TreeNode* root, vector<int>& ans) {
        if (root == nullptr) {
            return;
        }
        postorderTraversalHelper(root->left, ans);  // Traverse the left subtree
        postorderTraversalHelper(root->right, ans); // Traverse the right subtree
        ans.push_back(root->val);                   // Visit the root node
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        postorderTraversalHelper(root, ans);
        return ans;
    }
};
