class Solution {
public:
    void func(vector<string>& ans, int n, int open, int close, string s){
        //Base case
        if(open==n && close==n){            //TC = O(2^n)
            ans.push_back(s);
        }
        
        if(open<n){
            func(ans, n, open+1, close, s+"(");
        }
        
        if(close<open){
            func(ans, n, open, close+1, s+")");
        }
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        int open=0, close=0;
        func(ans, n, open, close, "");
        return ans;
    }
};