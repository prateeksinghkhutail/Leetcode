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
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>ans;  
        if(!root)return ans;
        queue<Node*>q;
      
        q.push(root);
        while(!q.empty())
        {
            vector<int>v;
            int cs=q.size();
            while(cs>0)
            {
            Node* cn=q.front();
            q.pop();
            v.push_back(cn->val);
            for(Node* cc:cn->children)
            {
                q.push(cc);
            }
            cs-=1;
            }
            ans.push_back(v);
         }
      return ans; 
    }
};