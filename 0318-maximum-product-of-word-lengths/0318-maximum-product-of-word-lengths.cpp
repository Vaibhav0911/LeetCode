class Solution {
public:
    
    int state(string s){
        int index=0;
        for(int i=0 ; i<s.length() ; i++)        index = index | (1<<(s[i]-'a'));
        return index;
    }
    
    int maxProduct(vector<string>& words) {
        
        vector<int> same;
        int n=words.size(), mx=0;
        for(int i=0 ; i<n ; i++)     same.push_back(state(words[i]));
        for(int i=0 ; i<n ; i++){
            for(int j=i+1 ; j<n ; j++){
                if((same[i]&same[j]) == 0 && mx<words[i].size()*words[j].size())
                   mx=words[i].size()*words[j].size(); 
            }
        }
        return mx;
        
    }
};