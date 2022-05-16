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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*>s;
        vector<int>ans;
        if(root==NULL)
            return ans;
        addleftsubTree(root,s);
        while(!s.empty())
        {
            TreeNode* cn=s.top();
            s.pop();
            ans.push_back(cn->val);
            if(cn->right!=NULL)
            {
                addleftsubTree(cn->right,s);
            }
        }
        return ans;
    }
    
    void addleftsubTree(TreeNode* cn,stack<TreeNode*>&s)
    {
        s.push(cn);
        while(cn->left!=NULL)
        {
            s.push(cn->left);
            cn=cn->left;
        }
        return;
    }
};