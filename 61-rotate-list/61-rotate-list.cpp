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
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head==NULL)
            return head;
        ListNode* tail=head;
        ListNode* current=head;
        ListNode* newhead;
        int length=1;
        while(tail->next!=NULL)
        {
            tail=tail->next;
            length=length+1;
            
        }
        k=k%length;
        if(k==0)
            return head;
        for(int i=0;i<length-k-1;i++)
        {
            current=current->next;
        }
        newhead=current->next;
        current->next=NULL;
        tail->next=head;
        return newhead;
    }
};