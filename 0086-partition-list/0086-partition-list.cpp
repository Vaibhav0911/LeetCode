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
    ListNode* partition(ListNode* head, int x) {
        
        if(head == NULL || head->next == NULL)   return head;
        
        ListNode *p1=NULL, *p2=NULL;
        ListNode *ptr1=NULL, *ptr2=head, *ptr3=NULL, *ptr4=head;
        while(ptr2 != NULL){
            
            if(ptr2->val < x){
                if(p1 == NULL)     ptr1 = p1 = ptr2;
                else{
                    ptr1->next = ptr2;
                    ptr1 = ptr2;
                }     
            }
            else{
                if(p2 == NULL)     ptr3 = p2 = ptr4;
                else{
                    ptr3->next = ptr4;
                    ptr3 = ptr4;
                }
            }
            
            ptr2 = ptr2->next;
            ptr4 = ptr4->next;
        } 
         
        if(ptr3 == NULL)        return head;
        if(ptr1 == NULL)        return head;
        ptr3->next = ptr4;
        ptr1->next = p2;
        head = p1;
        return head;
         
    }
};