/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    unordered_map<int,Node*>m;
    
    void dfs(Node* oldnode)
    {
        if(oldnode!=NULL)
        {
            Node* newnode=new Node(oldnode->val);
            m[oldnode->val]=newnode;
            
            for(int i=0;i<oldnode->neighbors.size();i++)
            {
                if(m.find(oldnode->neighbors[i]->val)==m.end())
                {
                    dfs(oldnode->neighbors[i]);
                }
                newnode->neighbors.push_back(m[oldnode->neighbors[i]->val]);
                
            }
        }
    }
    
    
    
    Node* cloneGraph(Node* node) {
        m.clear();
        dfs(node);
        return m[1];
    }
};