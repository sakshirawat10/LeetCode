/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
  if(p == NULL || q == NULL){
            return p == q;
        }
       bool isleftsame = isSameTree(p->left,q->left);
       bool isrightsame = isSameTree(p->right,q->right);
        
        return isleftsame && isrightsame && p->val == q->val;
     
}