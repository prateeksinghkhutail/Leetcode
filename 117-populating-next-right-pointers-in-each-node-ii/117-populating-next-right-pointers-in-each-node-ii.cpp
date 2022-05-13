/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root)return NULL;
        auto n=root->next;
        auto l=root->left;
        auto r=root->right;
        while(n)
        {
            if(n->left)
            {
                n=n->left;
                break;
            }
            if(n->right)
            {
                n=n->right;
                break;
            }
            n=n->next;
            
        }
        
        if(r) r->next=n;
        if(l) l->next=r?r:n;
        connect(r);
        connect(l);
        return root;
        
    }
};