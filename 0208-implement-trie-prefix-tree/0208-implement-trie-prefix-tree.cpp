struct Node{
    
    Node *arr[26];
    bool flag;
    
    Node(){
        for(int i=0 ; i<26 ; i++)    arr[i]=NULL;
        flag=false;
    }
};

class Trie {

private:
    
    Node *root;
    
public:
    
    Trie() {
        root = new Node();     
    }
    
    void insert(string word) {
        
        Node *root1 = root;
        for(int i=0 ; i<word.length() ; i++){
            if(root1->arr[word[i]-'a'] == NULL)     root1->arr[word[i]-'a'] = new Node();
            root1 = root1->arr[word[i]-'a'];
        }
        root1->flag = true;
        
    }
    
    bool search(string word) {
        
        Node *root1 = root;
        for(int i=0 ; i<word.length() ; i++){
            if(root1->arr[word[i]-'a'] != NULL)     root1 = root1->arr[word[i]-'a'];
            else                                    return false;
        }
        if(root1->flag)                             return true;
        return false;
        
    }
    
    bool startsWith(string prefix) {
        
        Node *root1 = root;
        for(int i=0 ; i<prefix.length() ; i++){
            if(root1->arr[prefix[i]-'a'] != NULL)     root1 = root1->arr[prefix[i]-'a'];
            else                                      return false;
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */