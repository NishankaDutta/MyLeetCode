class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> res;
        unordered_map<int,int> mp;
        int n=nums.size();
        for(auto x: nums){
            mp[x]++;
        }
        
        for(auto x: mp){
            if(x.second > floor(n/3))
                res.push_back(x.first);
        }
        return res;
    }
};