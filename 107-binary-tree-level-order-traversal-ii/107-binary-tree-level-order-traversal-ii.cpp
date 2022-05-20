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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>ans;  
        if(!root)return ans;
        queue<TreeNode*>q;
      
        q.push(root);
        while(!q.empty())
        {
            vector<int>v;
            int cs=q.size();
            while(cs>0)
            {
            TreeNode* cn=q.front();
            q.pop();
            v.push_back(cn->val);
            if(cn->left)q.push(cn->left);
            if(cn->right)q.push(cn->right);
            cs-=1;
            }
            ans.push_back(v);
         }
       reverse(ans.begin(),ans.end());
        return ans;
    }
};