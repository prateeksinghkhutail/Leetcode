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
    bool isCousins(TreeNode* root, int x, int y) {
        int parents[2];
        int levels[2];
        findparentandlevel(root,new TreeNode(-1),0,x,y,parents,levels);
        return parents[0]!=parents[1] &&levels[0]==levels[1];
    }
    
    void findparentandlevel(TreeNode* root,TreeNode* currentparent,int currentlevel,int x,int y,int parents[2],int levels[2])
    {
        if(root==NULL)
            return;
        if(root->val==x){
            parents[0]=currentparent->val;
            levels[0]=currentlevel;
        }
        if(root->val==y){
            parents[1]=currentparent->val;
            levels[1]=currentlevel;
        }
        findparentandlevel(root->left,root,currentlevel+1,x,y,parents,levels);
        findparentandlevel(root->right,root,currentlevel+1,x,y,parents,levels);
        return;
    }
};