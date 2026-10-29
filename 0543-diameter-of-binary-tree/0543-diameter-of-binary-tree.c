/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 int max (int a  ,int b){
    return a>b?a:b;
 }
 int height(struct TreeNode*root){
    if(root == NULL){
        return 0;
    }
    int leftheight = height(root->left);
    int rightheight = height(root->right);
    return max(leftheight,rightheight)+1;
 }
int diameterOfBinaryTree(struct TreeNode* root) {
    if(root == NULL){
        return 0;
    }
    int leftheight = height(root->left);
    int rightheight = height(root->right);

    int currdiameter = leftheight+rightheight;

    int leftdiameter = diameterOfBinaryTree(root->left);
    int rightdiameter = diameterOfBinaryTree(root->right);

    return max(currdiameter,max(leftdiameter,rightdiameter));
}