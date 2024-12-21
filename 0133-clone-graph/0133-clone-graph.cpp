/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    
    map<int, Node*> mp;
    Node* cloneGraph(Node* node) {
        
        if(node == NULL)    return NULL;
        Node* newnode = new Node(node->val);
        mp[newnode->val] = newnode;
        for(auto i: node->neighbors){
            if(mp.find(i->val) == mp.end())     newnode->neighbors.push_back(cloneGraph(i));
            else                                newnode->neighbors.push_back(mp[i->val]);
        }
        return newnode;
        
    }
};