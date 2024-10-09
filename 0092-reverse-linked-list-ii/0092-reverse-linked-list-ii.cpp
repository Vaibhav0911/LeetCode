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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        if(head == NULL || left == right)        return head;
        
        else if(left == 1){
            
            ListNode *temp1=head, *temp2=head, *temp3=head;
            for(int i=1 ; i<=right ; i++)    temp3 = temp3->next;
            
            for(int i=left ; i<=right ; i++){
                temp1 = temp2->next;
                temp2->next = temp3;
                temp3 = temp2;
                temp2 = temp1;
            }
            
            head = temp3;
            return head;

        }
        
        else{
            
            ListNode *temp1=head, *temp2=head, *temp3=head, *temp4=head;
            for(int i=1 ; i<=right ; i++){
                if(i == left-1){
                    temp4=temp3;
                    temp1 = temp2 = temp3->next;
                }
                temp3 = temp3->next;
            }
            
            for(int i=left ; i<=right ; i++){
                temp1 = temp2->next;
                temp2->next = temp3;
                temp3 = temp2;
                temp2 = temp1;
            }
            
            temp4->next = temp3;
            return head;
            
        }
        
    }
};