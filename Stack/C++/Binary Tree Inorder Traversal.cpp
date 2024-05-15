/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> t;
        inorder(root, t);
        return t;
    }

private:
    void inorder(TreeNode* root, vector<int>& t) {
        if (root != nullptr) {
            inorder(root->left, t);  // Traverse left subtree
            t.push_back(root->val);  // Visit node
            inorder(root->right, t); // Traverse right subtree
        }
    }
};