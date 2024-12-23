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
    ListNode* oddEvenList(ListNode* head) {
        
        if(head == NULL || head->next == NULL)        return head;
        
        ListNode *head2 = head->next;
        ListNode *p1 = head, *p2 = head2;
        
        while(p2->next != NULL && p2->next->next != NULL){
            p1->next = p2->next;
            p1 = p1->next;
            p2->next = p1->next;
            p2 = p2->next;
        }
        
        if(p2->next == NULL)       p1->next = head2;
        
        else if(p2->next->next == NULL){
            p1->next = p2->next;
            p1 = p1->next;
            p2->next = NULL;
            p1->next = head2;
        } 
        
        return head;
        
    }
};