int max(int a, int b){
    if(a>=b)
        return a;
    else
        return b;
}

int depthOfNode(struct TreeNode *node) {
    if (!node) return 0;
    return max(depthOfNode(node->left), depthOfNode(node->right)) + 1;
}

int diameterOfBinaryTree(struct TreeNode *root) {
    if (!root) return 0;
    int res = depthOfNode(root->left) + depthOfNode(root->right);
    return max(res, max(diameterOfBinaryTree(root->left), diameterOfBinaryTree(root->right)));
}
