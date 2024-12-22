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
    
    bool ans = true;
    
    ListNode* check(ListNode *p1, ListNode *p2){
        
        if(p2 == NULL)      return p1;
        
        p1 = check(p1, p2->next);
        
        if(p1->val != p2->val)     ans = false;
        
        return p1->next;
        
    }
    
    bool isPalindrome(ListNode* head) {
        
        check(head, head);
        return ans;
        
    }
};