/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* searchBST(struct TreeNode* root, int val) {
  while(root!=NULL &&root->val != val){
    if(val>root->val){
        root = root->right;
    }
    else{
        root = root->left;
    }
  }  
  return root;
}