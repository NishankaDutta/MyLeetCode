class Solution {
public:
    string reverseWords(string s) {
        string res = "";
        int n = s.size();
        
        int i=0;
        while(i<n){
            while(i<n && s[i] == ' ')
                i++;
            
            if(i>=n)
                break;
            
            int j = i+1;
            while(j<n && s[j] != ' ')
                j++;
            
            string word = s.substr(i,j-i);
            
            if(res.length() == 0)
                res = word;
            else
                res = word+' '+res;
            
            i = j+1;
        }
        return res;
    }
    
};