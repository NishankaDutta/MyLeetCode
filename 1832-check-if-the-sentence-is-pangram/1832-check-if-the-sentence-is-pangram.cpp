class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> res(26,0);
        
        for(auto x: sentence){
            res[x-'a']++;
        }
        
        for(auto x: res){
            if(x == 0)
                return false;
        }
        return true;
    }
};