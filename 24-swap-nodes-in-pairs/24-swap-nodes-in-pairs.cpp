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
    ListNode* swapPairs(ListNode* head) {
        ListNode* curr=head;;
        
        ListNode* second;
        ListNode* np;
        
        ListNode* dummynode=new ListNode(0,head);
        ListNode* prev=dummynode;
        
        if(head==NULL || head->next==NULL)
            return head;
        while(curr && curr->next)
        {
            np=curr->next->next;
            second=curr->next;
            
            second->next=curr;
            curr->next=np;
            prev->next=second;
            
            
            prev=curr;
            curr=np;
            
            
        }
        return dummynode->next;
     
        }
};