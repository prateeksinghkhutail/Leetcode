/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int>v;
        traversal(root,v);
        return v;
        
    }
    
    void traversal(Node* root,vector<int>&v)
    {
        if(!root)
            return;
        for(Node* cn:root->children)
        {
            traversal(cn,v);
        }
         v.push_back(root->val);
        return;
    }
};