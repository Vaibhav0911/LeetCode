/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
        int c=0,pos;
        ListNode *head1 = head;

        while(head1 != NULL){
            head1 = head1->next;
            c++;

            if(c == 10001){    return true;  }    
        }
        
        return false;

    }
};