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
    vector<string>v;
    vector<string> binaryTreePaths(TreeNode* root) {
        string s=to_string(root->val);
        dfs(root,s);
        return v;
    }
    
    void dfs(TreeNode*root,string s)
    {
       
        if(!root->left && !root->right)
            v.push_back(s);
        if(root->left)dfs(root->left,s+"->"+to_string(root->left->val));
        if(root->right)dfs(root->right,s+"->"+to_string(root->right->val));
        return;
    }
};