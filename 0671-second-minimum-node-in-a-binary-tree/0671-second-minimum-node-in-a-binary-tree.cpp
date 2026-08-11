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
void solve(TreeNode*root,int minval ,long long &ans){
    if(root == NULL){
        return;
    }
    if(root->val>minval && root->val<ans){
        ans = root->val;
    }
    solve(root->left,minval,ans);
    solve(root->right,minval,ans);
}
    int findSecondMinimumValue(TreeNode* root) {
     long long ans = LLONG_MAX;
     solve(root,root->val,ans);

     if(ans == LLONG_MAX){
        return -1;
     }
     return int(ans);
    }
};