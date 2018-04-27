/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool Symmetric(struct TreeNode *left, struct TreeNode *right){
        if (!left && !right)
            return 1;
        if (!left || !right)
            return 0;
        if (left->val == right->val){
            return (Symmetric(left->left, right->right) && Symmetric(right->left, left->right));
        }
        return 0;
}

bool isSymmetric(struct TreeNode* root) {
    if (!root)
            return 1;
    return Symmetric(root->left, root->right);
}