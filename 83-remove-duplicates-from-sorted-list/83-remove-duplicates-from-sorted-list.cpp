/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)return NULL;
        ListNode* p=head;
        ListNode* temp=head;
        if(temp->next==NULL)
            return temp;
        temp=temp->next;
        while(temp!=NULL)
        {
            if(temp->val==p->val)
            {
                temp=temp->next;
            }
            else{
                p->next=temp;
                p=temp;
                temp=temp->next;
            }
        }
    if(p->next!=NULL)
        p->next=NULL;
    return head;
    }
};