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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL)return head;
      
        ListNode* dummy=new ListNode();
        dummy->next=head;
        ListNode* slow=dummy;
        ListNode* fast=dummy;
        
        while(n>0)
        {
            fast=fast->next;
            n--;
        }
        while(fast->next!=NULL)
        {
            
            slow=slow->next;
            fast=fast->next;
            
        }
       
        slow->next=slow->next->next;
        
        return dummy->next;
        
    }
};