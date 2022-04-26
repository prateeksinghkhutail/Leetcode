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
    bool hasPathSum(TreeNode* root, int targetSum) {
        int sum=0;
        return targetsum(root,targetSum,sum);
    }
    
    bool targetsum(TreeNode* root,int ts,int sum)
    {
        if(!root)
            return false;
        sum+=root->val;
        if(!root->left && !root->right)
            if(sum==ts)
                return true;
        bool leftc=false;
        bool rightc=false;
        if(root->left)
            leftc=targetsum(root->left,ts,sum);    
        if(root->right)
            rightc=targetsum(root->right,ts,sum);
        
        return leftc||rightc;
            
    }
    
};