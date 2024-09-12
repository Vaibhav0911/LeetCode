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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* list3=NULL,* list4=NULL;
        while(list1 != NULL && list2 != NULL){
           int data; 
           if(list1->val <= list2->val){
              data=list1->val;
              list1=list1->next;
           }
           else{                           
              data=list2->val;
              list2=list2->next;
           }

           ListNode* newnode = new ListNode;
           newnode->val = data;
           newnode->next = NULL;

           if(list3 == NULL){
            list3=newnode;
            list4=list3;
           } 
           else{
            list4->next = newnode;
            list4=newnode;
           }
        }  

        while(list1 != NULL){
           ListNode* newnode = new ListNode;
           newnode->val = list1->val;
           newnode->next = NULL; 
           if(list3 == NULL){
            list3=newnode;
            list4=list3;
           } 
           else{
            list4->next = newnode;
            list4=newnode;
           }
           list1=list1->next;
        }

        while(list2 != NULL){
           ListNode* newnode = new ListNode;
           newnode->val = list2->val;
           newnode->next = NULL; 
           if(list3 == NULL){
            list3=newnode;
            list4=list3;
           } 
           else{
            list4->next = newnode;
            list4=newnode;
           }
           list2=list2->next;
        }

        return list3;

    }
};