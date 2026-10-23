/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 void preorder(struct TreeNode* root,int*result,int*returnSize){
    if(root == NULL){
        return;
    }
    result[*returnSize]=root->val;
    (*returnSize)++;
    preorder(root->left,result,returnSize);
    preorder(root->right,result,returnSize);


 }
int* preorderTraversal(struct TreeNode* root, int* returnSize) {
int *result = malloc(100*sizeof(int));
   *returnSize = 0;
   preorder(root,result,returnSize);
   return result;
}