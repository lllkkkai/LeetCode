/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int maxDepth(struct TreeNode* root) {
    if(root==NULL){
        return 0;
    }
    int nleft=maxDepth(root->left);
    int nright=maxDepth(root->right);
    return nleft>nright?nleft+1:nright+1;
}