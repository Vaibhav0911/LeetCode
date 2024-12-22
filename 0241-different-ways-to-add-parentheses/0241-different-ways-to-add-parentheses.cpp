class Solution {
public:
    
    unordered_map<string, vector<int>> mp;
    
    vector<int> diffWaysToCompute(string exp) {
        
        if(exp.size() == 1 || exp.size() == 2){
            int exp1=0;
            vector<int> ans;
            for(int i=0 ; i<exp.size() ; i++)  exp1 = exp1*10 + (exp[i]-'0');
            ans.push_back(exp1);
            return ans;
        } 
        
        if(mp.find(exp) != mp.end())     return mp[exp];
        
        vector<int> result;
        
        for(int i=0 ; i<exp.size() ; i++){
            
            if(exp[i] == '*' || exp[i] == '+' || exp[i] == '-'){
                
                string lexp = exp.substr(0,i);
                string rexp = exp.substr(i+1,exp.size()-i-1);
                vector<int> left = diffWaysToCompute(lexp); 
                vector<int> right = diffWaysToCompute(rexp);
                vector<int> ans;
                
                for(int j=0 ; j<left.size() ; j++){
                    for(int k=0 ; k<right.size() ; k++){
                        if(exp[i] == '*')          ans.push_back(left[j]*right[k]);
                        else if(exp[i] == '+')     ans.push_back(left[j]+right[k]);
                        else                       ans.push_back(left[j]-right[k]);
                    }
                }
                
                for(int j=0 ; j<ans.size() ; j++)      result.push_back(ans[j]);
                    
            }
            
        }
        
        mp[exp] = result;
        return result;
        
    }
};