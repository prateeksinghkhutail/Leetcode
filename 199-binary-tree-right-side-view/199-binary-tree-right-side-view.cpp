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
    vector<int>ans;
    vector<int> rightSideView(TreeNode* root) {
        solve(root,0);
        return ans;
    }
    
    void solve(TreeNode* root,int cl)
    {
        if(!root)return;
        if(ans.size()==cl)
        {
            ans.push_back(root->val);
        }
        solve(root->right,cl+1);
        solve(root->left,cl+1);
        return;
    }
};