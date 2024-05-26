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
    bool isValidBST(TreeNode* root) {
        return validate(root, nullptr, nullptr);
    }

private:
    bool validate(TreeNode* node, TreeNode* minNode, TreeNode* maxNode) {
        if (node == nullptr) {
            return true;  // An empty tree is a valid BST
        }
        if (minNode != nullptr && node->val <= minNode->val) {
            return false;  // Current node's value must be greater than minNode's value
        }
        if (maxNode != nullptr && node->val >= maxNode->val) {
            return false;  // Current node's value must be less than maxNode's value
        }
        // Recursively validate the left and right subtrees
        return validate(node->left, minNode, node) && validate(node->right, node, maxNode);
    }
};
