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
    int count=0;
    int pseudoPalindromicPaths (TreeNode* root) {
        if(!root)
            return 0;
        set<int>set;
    
        solve(root,set);
        return count;
    }
        
    void solve(TreeNode* root,set<int>set)
    {
        
        int v=root->val;
        if(set.find(v)!=set.end())
        {
            set.erase(v);
        }
        else{
            set.insert(v);
        }
        if(root->left==NULL && root->right==NULL)
        {
            int size=set.size();
            if(size<=1)
                count++;
            return;
        }
       
        if(root->left) solve(root->left,set);
        
        if(root->right)solve(root->right,set);
        
        
    
    }
};