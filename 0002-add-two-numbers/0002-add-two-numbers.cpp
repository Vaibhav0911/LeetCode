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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3=NULL,* l4=NULL;
        int carry=0;

        while(l1 != NULL && l2 != NULL){

            int sum = l1->val + l2->val + carry;
            ListNode* newnode = new ListNode;
            newnode->val = sum%10;
            newnode->next = NULL;
            carry = sum/10;

            if(l3 == NULL){
                l3 = newnode;
                l4 = newnode;
            }
            else{
                l4->next = newnode;
                l4 = newnode;
            }

            l1 = l1->next;
            l2 = l2->next;

        }

        while(l1 != NULL){
           int sum = l1->val + carry;
           ListNode* newnode = new ListNode;
           newnode->val = sum%10;
           newnode->next = NULL;
           carry = sum/10;

           l4->next = newnode;
           l4 = newnode;
           l1 = l1->next;
        }

        while(l2 != NULL){
           int sum = l2->val + carry;
           ListNode* newnode = new ListNode;
           newnode->val = sum%10;
           newnode->next = NULL;
           carry = sum/10;

           l4->next = newnode;
           l4 = newnode;
           l2 = l2->next;
        }

        if(carry != 0){
           ListNode* newnode = new ListNode;
           newnode->val = carry;
           newnode->next = NULL;
           l4->next = newnode;
           l4 = newnode;
        }

        return l3;

    }
};