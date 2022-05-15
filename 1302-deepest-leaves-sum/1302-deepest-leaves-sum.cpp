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
    int deepest=0,sum=0;
    int deepestLeavesSum(TreeNode* root) {
        return solve(root,0);
        
    }
    
    int solve(TreeNode* root,int depth)
    {
        if(!root)return 0;
        if(!root->left && !root->right)
            if(deepest==depth)sum+=root->val;
            else 
                if(depth>deepest)
                {
                    sum=root->val;
                    deepest=depth;
                }
        solve(root->left,depth+1);
        solve(root->right,depth+1);
        return sum;
    }
};