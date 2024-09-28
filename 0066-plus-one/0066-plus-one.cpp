class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int n=digits.size();
        int carry=1;
        list<int> l;

        for(int i=n-1 ; i>=0 ; i--){
            if(digits[i]==9 && carry){
                l.push_front(0);
                carry=1;
            }
            else{
                l.push_front(digits[i]+carry);
                carry=0;
            }
        }

        if(carry)    l.push_front(1);

        vector<int> ans;
        for(auto i: l){
            ans.push_back(i);
        }

        return ans;

    }
};