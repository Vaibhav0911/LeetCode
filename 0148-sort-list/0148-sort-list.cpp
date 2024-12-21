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
    
    ListNode* msort(ListNode* h, ListNode* s){
        
        ListNode *ans, *ph=NULL;
        if(h->val > s->val)     ans = s;
        else                    ans = h;
        while(h != NULL && s!= NULL){
            if(h->val <= s->val){
                ph = h;
                h = h->next;
            }
            else{
                if(ph == NULL){
                    ph=s;
                    s=s->next;
                    ph->next=h;
                }
                else{
                    ph->next=s;
                    s=s->next;
                    ph=ph->next;
                    ph->next=h;
                }
            }
        }
        if(h == NULL)       ph->next=s;
        return ans;
        
    }
    
    ListNode* sortList(ListNode* head) {
        
        if(head == NULL || head->next == NULL)        return head;
        ListNode *s, *ps, *f;
        s = f = head;
        while(f != NULL && f->next != NULL){
            ps = s;
            s = s->next;
            f = f->next->next;
        }
        ps->next = NULL;
        head = sortList(head);
        s = sortList(s);
        head = msort(head, s);
        return head;  
        
    }
};