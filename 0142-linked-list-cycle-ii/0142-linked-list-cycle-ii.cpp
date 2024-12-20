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
    ListNode *detectCycle(ListNode *head) {
        
        ListNode *s = head, *f = head;

        while(f != NULL && f->next != NULL){    
            f = f->next->next;
            s = s->next;
            if(f == s){
                
                f=head;
                while(f!=s){
                    s=s->next;
                    f=f->next;
                }
                return f;
            }
        }
        
        return NULL;
        
    }
};