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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        set<int>s;
        solve(root,ans,1,s);
        return ans;
    }
    
    void solve(TreeNode* root,vector<int>&ans,int level,set<int>&s )
    {
        if(root==NULL)
            return ;
        
        if(s.find(level)==s.end())
        {
            s.insert(level);
            ans.push_back(root->val);
        }
        solve(root->right,ans,level+1,s);
        solve(root->left,ans,level+1,s);
        return;
        
        
    }
};