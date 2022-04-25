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
    int sumOfLeftLeaves(TreeNode* root) {
        return dfs(root,false);
    }
    
    int dfs(TreeNode* root,bool check)
    {
        if(root==NULL)
            return 0;
        if(!root->left && !root->right)
            return check?root->val:0;
    
        
        
        int leftans=dfs(root->left,true);
        
        int rightans=dfs(root->right,false);
        return leftans+rightans;
    }
};