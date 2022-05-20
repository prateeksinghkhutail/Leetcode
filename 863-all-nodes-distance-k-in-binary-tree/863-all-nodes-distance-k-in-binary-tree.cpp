/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        set<TreeNode*>s;
        stack<TreeNode*>st;
        unordered_map<TreeNode*,TreeNode*>map;
        vector<int>ans; 
        populatemap(root,map,NULL);
        printkdist(target,s,ans,map,k);
        return ans;
        }
    
    
    void populatemap(TreeNode* root,unordered_map<TreeNode*,TreeNode*>&map,TreeNode*parent)
    {
      if(!root)
          return;
        map[root]=parent;
        populatemap(root->left,map,root);
        populatemap(root->right,map,root);
        return;
    
    }
    
    void printkdist(TreeNode*root,set<TreeNode*>&s,vector<int>&ans,unordered_map<TreeNode*,TreeNode*>&map,int k)
    {
        if(!root||k<0||s.find(root)!=s.end())
            return;
        s.insert(root);
        if(k==0)
        {
            ans.push_back(root->val);
            return;
        }
        printkdist(root->left,s,ans,map,k-1);
        printkdist(root->right,s,ans,map,k-1);
        printkdist(map[root],s,ans,map,k-1);
        return;
    }
};