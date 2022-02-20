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
    bool isPalindrome(ListNode* head) {
        if(head==NULL||head->next==NULL) return true;

        ListNode* slow=head;
        ListNode* fast=head;
        
        //finding middle node
        while(fast!=NULL && fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        
        //reversing middle to end nodes
        ListNode* temp;
        ListNode* prev=NULL;
        while(slow->next!=NULL)
        {
            temp=slow->next;
            slow->next=prev;
            prev=slow;
            slow=temp;
            
        }slow->next=prev;
        
        //comparing first half with second half of linked list
        ListNode* dummy=head;
        while(slow!=NULL)
        {
            if(slow->val!=dummy->val)
              return false;
            slow=slow->next;
            dummy=dummy->next;
            
            
        }
        return true;
        
        
        
    }
};