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
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL) 
        {
        return head;
        }
        ListNode* a=head;
        ListNode* mid=midpoint(head);
        ListNode* b=mid->next;
        mid->next=NULL;
        
        a=sortList(a);
        b=sortList(b);
        ListNode* temp=merge(a,b);
        return temp;
    }
    
    
    ListNode* midpoint(ListNode* head)
    {
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast!=NULL && fast->next!=NULL)
        {   
            fast=fast->next->next;
            slow=slow->next;
            
        }
        return slow;
        
    }
   ListNode* merge(ListNode* a,ListNode* b)
   {
       if(a==NULL)return b;
       if(b==NULL)return a;
       ListNode* temp;
   
       if(a->val<=b->val)
           {
                temp=a;
                temp->next=merge(a->next,b);            
           }
           else{temp=b;
                temp->next=merge(a,b->next);
               }
          
      return temp;
   }
};