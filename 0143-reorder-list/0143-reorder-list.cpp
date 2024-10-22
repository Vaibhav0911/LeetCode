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
    
    ListNode* rev(ListNode* head, ListNode* first, ListNode* end){
        
        if(end == NULL)   return head;
        
        first = rev(head, first, end->next);
        
        if(first == head && end->next != NULL)      return head;
        
        else if(first->next == first || first == end){
            first->next = NULL;
            return head;
        }
        
        else{
            ListNode* temp = first->next;
            first->next = end;
            end->next = temp;
            return temp;
        }
        
    }
    
    void reorderList(ListNode* head) {
        
        head = rev(head, head, head);       
        
    }
};