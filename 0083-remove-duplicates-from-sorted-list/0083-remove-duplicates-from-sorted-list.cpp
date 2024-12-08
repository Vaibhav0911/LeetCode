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
     
        if(head == NULL || head->next == NULL)    return head;
        
        ListNode* ptr1=head;
        ListNode* ptr2=ptr1->next;
        ListNode* ptr3=ptr2->next;
        
        while(ptr3 != NULL){
            if(ptr1->val == ptr2->val){
                ptr2->next = NULL;
                ptr2 = ptr3;
                ptr3 = ptr3->next;    
                ptr1->next = ptr2;
            }
            else{
                ptr1 = ptr2;
                ptr2 = ptr3;
                ptr3 = ptr3->next;
            }
        }
        
        if(ptr1->val == ptr2->val){
            ptr2->next = NULL;
            ptr2 = ptr3;
            ptr1->next = ptr2;
        }
        
        return head;
        
    }
};