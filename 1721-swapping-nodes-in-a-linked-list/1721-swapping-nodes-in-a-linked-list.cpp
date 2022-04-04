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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* dummy=new ListNode(0,head);
        ListNode* prev1=dummy;
        ListNode* prev2=dummy;
        ListNode* current=dummy;;
      
        
       
        for(int i=0;i<k;i++)
        {
            
            current=current->next;
        }
         for(int i=0;i<k-1;i++)
        {
            prev1=prev1->next;
        }
        
        while(current->next!=NULL)
        {
            prev2=prev2->next;
            current=current->next;
        }
        
        if(prev1->next==prev2)
        {
            current=prev2->next;
            prev1->next->next=prev2->next->next;
            current->next=prev1->next;
            prev1->next=current;
            return dummy->next;
        }
        current=prev1->next;
        prev1->next=prev2->next;
        prev1=prev2->next->next;
        prev2->next->next=current->next;
        prev2->next=current;
        current->next=prev1;
        return dummy->next;
        
        
        
     
    }
};