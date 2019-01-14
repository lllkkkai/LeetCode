/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* invertTree(struct TreeNode* root) {
    struct TreeNode *node;
    if (root == NULL)
        return root;
    node = invertTree(root->left);
    root->left = invertTree(root->right);
    root->right = node;
    return root;
}