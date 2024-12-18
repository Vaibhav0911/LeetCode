/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        Node *temp=head;
        int size=0;
        while(temp != NULL){
            temp = temp->next;
            size++;
        }
        
        temp=head;
        vector<pair<int, int>> v;  
        while(temp != NULL){
            int f=temp->val;
            int s=0;
            Node *temp1 = temp->random;
            if(temp1 == NULL)     s= -1;
            else{
                while(temp1 != NULL){
                    s++;
                    temp1 = temp1->next;
                }
                s = size-s;
            }
            temp = temp->next;
            pair<int, int> p = make_pair(f,s);
            v.push_back(p);
        }
        
        Node *head1=NULL, *temp2=head1;    
        for(int i=0 ; i<size ; i++){
            Node  *temp1 = new Node(v[i].first);
            if(head1 == NULL){
                head1 = temp1;
                temp2 = temp1;
            }
            else{
                temp2->next = temp1;
                temp2 = temp2->next;
            }
        }
        
        temp=head1;
        for(int i=0 ; i<size ; i++){
            temp2=head1;
            if(v[i].second == -1)     temp2=NULL;
            else{
                for(int j=0 ; j<v[i].second ; j++)    temp2=temp2->next;
            }
            temp->random = temp2;
            temp = temp->next;
        }
        
        return head1;
        
    }
};