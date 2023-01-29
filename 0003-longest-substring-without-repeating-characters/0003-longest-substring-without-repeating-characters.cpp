class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> st;
        int max = 0;
        int start = 0, end = 0;         // TC = O(N) , SC = O(N) ------> Sliding Window (IMPORTANT!!!)
        
        while(start<s.size()){
            auto it = st.find(s[start]);
            
            if(it == st.end()){
                if(start-end+1 > max)
                    max = start-end+1;
                st.insert(s[start]);
                start++;
            }
            else{
                st.erase(s[end]);
                end++;
            }
        }
        return max;
    }
};