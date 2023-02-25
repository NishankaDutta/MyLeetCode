class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int> mp1,mp2;
        
        for(auto x: words1){                 //TC = O(N) , SC = O(N)
            mp1[x]++;
        }
        
        for(auto x: words2){
            mp2[x]++;
        }
        
        int count = 0;
        for(auto x: words1){
            if(mp1[x] == 1 && mp2[x] == 1)
                count++;
        }
        return count;
    }
};