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
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head == NULL)     return head;
        
        ListNode *last = head;
        int n=1;
        
        while(last->next != NULL){
            last = last->next;
            n++;
        }
        
        if(k%n == 0)         return head;
        k = k%n;
        
        ListNode *temp1=head, *temp2=head->next;
        for(int i=1 ; i<n-k ; i++){
            temp1 = temp2;
            temp2 = temp2->next;
        }
        
        temp1->next = NULL;
        last->next = head;
        head = temp2;
        return head;
        
    }
};