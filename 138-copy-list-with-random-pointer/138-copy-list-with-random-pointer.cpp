/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*>map;
        Node* current=head;
        Node* copynode;
        while(current!=NULL)
        {
            copynode=new Node(current->val);
            map[current]=copynode;
            current=current->next;
        }
        current=head;
        while(current!=NULL)
        {
            copynode=map[current];
            copynode->next=map[current->next];
            copynode->random=map[current->random];
            current=current->next;
        }
        return map[head];
    }
};