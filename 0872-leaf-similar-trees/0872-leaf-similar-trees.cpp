/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
void getleaves(TreeNode*root,vector<int>&l){
    if(root == NULL){
        return;
    }
    if(root->left == NULL && root->right==NULL){
        l.push_back(root->val);
    }
    getleaves(root->left,l);
    getleaves(root->right,l);
}
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
      vector<int>l1,l2;
      getleaves(root1,l1);
      getleaves(root2,l2);
      return l1==l2;

    }
};