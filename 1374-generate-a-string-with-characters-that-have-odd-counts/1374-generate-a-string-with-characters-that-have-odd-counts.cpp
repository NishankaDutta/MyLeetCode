class Solution {
public:
    string generateTheString(int n) {
        string ans="";
        if(n%2==1)
        {
            for(int i=0;i<n;i++)
                ans+='t';
        }
        else
        {
            for(int i=0;i<n-1;i++)
                ans+='p';
            ans+='t';
        }
        return ans;
    }
};