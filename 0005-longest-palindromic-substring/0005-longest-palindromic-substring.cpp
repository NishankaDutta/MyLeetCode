class Solution {
public:
    string longestPalindrome(string s) {
        string ans = "";
        int n = s.size();                           //TC = O(N^2) , SC = O(N^2) using DP
        int maxLength = 0;
        vector<vector<int>> dp(n, vector<int>(n,0));
        
        for(int diff = 0;diff<n;diff++){   //outer loop
            for(int i=0,j=i+diff; j<n; i++,j++){    //Inner loop
                if(i==j){
                    dp[i][j] = 1;
                }
                else if(diff==1){
                    if(s[i]==s[j])
                        dp[i][j] = 2;
                    else
                        dp[i][j] = 0;
                }
                else{
                    if(s[i]==s[j] && dp[i+1][j-1]>0){
                        dp[i][j] = dp[i+1][j-1] + 2;
                    }
                }
         
                if(dp[i][j]>0){
                    if(j-i+1 > maxLength)
                        maxLength = j-i+1;
                        ans = s.substr(i,maxLength);
                }
            }
        }
        return ans;
    }
};