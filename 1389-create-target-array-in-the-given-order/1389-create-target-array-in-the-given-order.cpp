class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> res;
        
        for(int i=0;i<index.size();i++){                     //TC = O(N^2)
            res.insert(res.begin()+index[i],nums[i]);
        }
        return res;
    }
};