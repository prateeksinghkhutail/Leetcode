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
    int ans=0;
    int sumRootToLeaf(TreeNode* root) {
        int x=0;
        dfs(root,x);
        return ans;
    }
    
    void dfs(TreeNode* root,int x)
    {
        x=x*2+root->val;
        if(!root->left && !root->right){
            ans+=x;
            return;
        }
        if(root->left)dfs(root->left,x);
        if(root->right)dfs(root->right,x);
            
    }
};