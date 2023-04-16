class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size(), m = needle.size();
        
        if(needle.size() == 0)
            return 0;
        
        for(int i=0;i<=n-m;i++){                   //TC = O(N*M)
            string s = haystack.substr(i,m);
            if(s == needle)
                return i;
        }
        return -1;
    }
};