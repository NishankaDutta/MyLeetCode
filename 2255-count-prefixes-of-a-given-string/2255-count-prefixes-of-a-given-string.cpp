class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count = 0;
        
        for(auto x: words){                            //TC = O(N)
            string str = s.substr(0,x.size());
            if(x == str)
                count++;
        }
        return count;
    }
};