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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int>map;
        for(int i=0;i<inorder.size();i++)
        {
            map[inorder[i]]=i;
        }
        int preindex[1]={0};
        return solve(preorder,inorder,map,preindex,0,preorder.size()-1);
    }
    
    TreeNode* solve(vector<int>&preorder,vector<int>&inorder,unordered_map<int,int>&map,int preindex[1],int start,int end)
    {
        if(start>end || preindex[0]>preorder.size())
            return NULL;
        int cn=preorder[preindex[0]];
        int index=map[cn];
        TreeNode* root=new TreeNode(cn);
        preindex[0]+=1;
        root->left=solve(preorder,inorder,map,preindex,start,index-1);
        root->right=solve(preorder,inorder,map,preindex,index+1,end);
        return root;
        
    }
};