struct Node{
    
    Node *arr[26];
    bool flag;
    
    Node(){
        for(int i=0 ; i<26 ; i++)    arr[i]=NULL;
        flag=false;
    }
};

class WordDictionary {
    
private:
    
    Node *root;
  
public:
    WordDictionary() {
        root = new Node();
    }
    
    void addWord(string word) {
        Node *root1 = root;
        for(int i=0 ; i<word.length() ; i++){
            if(root1->arr[word[i]-'a'] == NULL)     root1->arr[word[i]-'a'] = new Node();
            root1 = root1->arr[word[i]-'a'];
        }
        root1->flag = true;
    }
    
    bool s(string word, int i, Node *root1){
        if(i == word.length()){
            if(root1->flag)      return true;
            else                 return false;
        }
        if(word[i] == '.'){
            bool ch=false;
            for(int j=0 ; j<26 ; j++){
                if(root1->arr[j] == NULL)    continue;
                ch = s(word, i+1, root1->arr[j]);
                if(ch)                       return ch;
            }
            return ch;
        }
        if(root1->arr[word[i]-'a'] == NULL)  return false;
        
        return s(word, i+1, root1->arr[word[i]-'a']);
    }
    
    bool search(string word) {
        return s(word, 0, root);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */