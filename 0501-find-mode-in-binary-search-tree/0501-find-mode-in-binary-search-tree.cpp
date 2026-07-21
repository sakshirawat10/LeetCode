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
    TreeNode* prev = NULL;
    int count = 0, maxcount = 1;

    void inorder(TreeNode* root,vector<int>&ans) {    
    if(root == NULL){
        return;
    }
    inorder(root->left,ans);

    if(prev == NULL){
       count = 1;
    } else if(prev->val == root->val){
        count++;
    } else{
        count = 1;
    } 
     if(count>maxcount){
        maxcount = count;
        ans.clear();
        ans.push_back(root->val);
     }
     else if(count == maxcount){
        ans.push_back(root->val);
    
    } 
    prev = root;
    inorder(root->right,ans);
    
    }

    vector<int> findMode(TreeNode* root) {
    vector<int>ans;
    inorder(root , ans);
    return ans;
    }
};