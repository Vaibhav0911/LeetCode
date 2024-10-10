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
        
        if(head == NULL || head->next == NULL)       return head;
        
        ListNode *temp1=head, *temp2=head->next, *temp3=head->next->next;
        head = head->next;
        
        while(temp3 != NULL && temp3->next != NULL){
            temp1->next = temp3->next;
            temp2->next = temp1;
            temp1 = temp3;
            temp2 = temp1->next;
            temp3 = temp2->next;
        }
        
        temp1->next = temp3;
        temp2->next = temp1;
        temp1 = temp2 = temp3;
        return head;
        
    }
};