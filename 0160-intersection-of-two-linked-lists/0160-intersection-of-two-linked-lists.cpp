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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
     
        ListNode *temp1=headA, *temp2=headB;
        int a=0,b=0;
        
        while(temp1 != NULL){
            a++;
            temp1 = temp1->next;
        }   
        while(temp2 != NULL){
            b++;
            temp2 = temp2->next;
        }
        
        if(a>b){
            temp1=headA;
            temp2=headB;
            for(int i=0 ; i<a-b ; i++)     temp1=temp1->next;
        }
        else{
            temp1=headA;
            temp2=headB;
            for(int i=0 ; i<b-a ; i++)     temp2=temp2->next;
        }
        
        while(temp1 != temp2){
            temp1=temp1->next;
            temp2=temp2->next;
        }
        
        if(temp1 != NULL)        return temp1;
        
        return NULL;
        
    }
};