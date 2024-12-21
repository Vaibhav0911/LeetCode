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
    ListNode* insertionSortList(ListNode* head) {
     
        if(head == NULL || head->next == NULL)    return head;
        
        ListNode *t1 = head->next;
        head->next = NULL;
        
        while(t1 != NULL){
            ListNode *t2, *t3;
            if(head->val >= t1->val){
                t2=t1;
                t1=t1->next;
                t2->next=head;
                head=t2;
            }
            else{
                t2=head; t3=t1;
                while(t2->next != NULL){
                    if(t2->next->val < t1->val)      t2=t2->next;
                    else{
                        t1=t1->next;
                        t3->next=t2->next;
                        t2->next=t3;
                        break;
                    }
                }
                if(t2->next == NULL){
                    t2->next=t1;
                    t1=t1->next;
                    t2->next->next=NULL;
                }
            }
        }
        
        return head;
        
    }
};