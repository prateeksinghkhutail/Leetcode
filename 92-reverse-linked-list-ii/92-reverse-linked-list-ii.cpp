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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* current=head;
        ListNode* lprev=dummy;
        ListNode* temp;
        ListNode* prev=NULL;
        for(int i=0;i<left-1;i++)
        {
            lprev=current;
            current=current->next;
            
        }
        
        for(int i=0;i<right-left+1;i++)
        {
            temp=current->next;
            current->next=prev;
            prev=current;
            current=temp;
        }
        lprev->next->next=current;
        lprev->next=prev;
        return dummy->next;
    }
};