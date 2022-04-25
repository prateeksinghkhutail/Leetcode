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
    bool isUnivalTree(TreeNode* root) {
        return check(root,root->val);
    }
    
    bool check(TreeNode* root,int val)
    {
        if(!root)
            return true;
        if(root->val!=val)
            return false;
        
        bool ans1=check(root->left,val);
        bool ans2=check(root->right,val);
        return ans1&&ans2;
    }
};