class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> res = {first};
        
        for(auto x: encoded){
            res.push_back(first ^= x);
        }
        return res;
    }
};