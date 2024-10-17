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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode *temp = head;
        int sz=0;
        
        while(temp != NULL){
            temp = temp->next;
            sz++;
        }  
        
        n = sz-n;
        temp = head;
        for(int i=1 ; i<n ; i++){
            temp = temp->next;
        }
        
        ListNode *temp1 = temp->next;
        if(n == 0){
            temp->next = NULL;
            head = temp1;
        }
        else{ 
            temp->next = temp1->next;
            temp1->next = NULL;
        }
        
        return head;
        
    }
};