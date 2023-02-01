class Solution {
public:
    static bool isPalindrome(string s){
        int l = 0;                  //Time: O(n*2^n), n=number of characters. 2^n is max substrings 
        int r = s.size()-1;         //Space: O(N^2)
        
        while(l<r){
            if(s[l++] != s[r--])
                return false;
        }
        return true;
    }
    
    void helper(string s, vector<vector<string>>& ans, vector<string>& temp){
        //base case
        if(s.size()==0){
            ans.push_back(temp);
            return;
        }
        
        for(int i=0;i<s.size();i++){
            string leftPar = s.substr(0,i+1);
            if(isPalindrome(leftPar)){
                temp.push_back(leftPar);
                helper(s.substr(i+1), ans, temp);
                temp.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> temp;
        helper(s,ans,temp);
        return ans;
    }
};