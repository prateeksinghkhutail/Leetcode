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
public:vector<int>v1;
        vector<int>v2;
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        dfs1(root1);
        dfs2(root2);
        
        if(v1.size()!=v2.size())
           return false;
        for(int i=0;i<v1.size();i++)
        {
            if(v1[i]!=v2[i])
                return false;
        }
        
        return true;
    }
    
    void dfs1(TreeNode* root)
    {
        if(!root->left && !root->right)
            v1.push_back(root->val);
        if(root->left)dfs1(root->left);
        if(root->right)dfs1(root->right);
        return;
    }   
    void dfs2(TreeNode* root)
    {
        if(!root->left&&!root->right)
            v2.push_back(root->val);
        if(root->left)dfs2(root->left);
        if(root->right)dfs2(root->right);
        return;
    }
};