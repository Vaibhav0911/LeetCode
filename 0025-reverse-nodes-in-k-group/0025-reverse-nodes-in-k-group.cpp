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
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(k == 1)      return head;
        
        ListNode *start = NULL, *end = head;
        ListNode *ptr=head, *ptr1=head, *ptr2=head;
        int flag=0;
        
        while(end != NULL){
            
            for(int i=1 ; i<k ; i++){
                end = end->next;
                if(end == NULL){
                    flag=1;
                    break;
                }
            }
            
            if(flag == 1)       break;
            else if(start == NULL){
                start = ptr;
                head = end;
            }
            else{
                start->next = end;
                start = ptr;
            }
            
            end = end->next;
            ptr1 = ptr->next;
            ptr2 = ptr->next->next;
            
            for(int i=1 ; i<k ; i++){
                ptr1->next = ptr;
                if(k-i == 1)    ptr = ptr1 = ptr2;
                else{
                    ptr = ptr1;
                    ptr1 = ptr2;
                    ptr2 = ptr2->next;
                }
            }
        }
        
        if(flag)    start->next = ptr;
        else        start->next = NULL;
        
        return head;
        
    }
};