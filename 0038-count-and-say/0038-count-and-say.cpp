class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
            return "1";
        if(n==2)
            return "11";
        
        string s = "11";
    
        for(int i=3;i<=n;i++){
            int count = 1;
            string temp = "";
            s = s + '$';
            for(int j=1;j<s.size();j++){       //TC = O(N^2)
                if(s[j]==s[j-1])
                    count++;
                else{
                    temp = temp + to_string(count);
                    temp = temp + s[j-1];
                    count = 1;
                }
            }
            s = temp;
        }
        return s;
    }
};