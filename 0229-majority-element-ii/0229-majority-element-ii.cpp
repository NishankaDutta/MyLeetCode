class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        vector<int> v;
        for(auto x: nums){
            mp[x]++;
        }
        
        for(auto x: mp){
            if(x.second > floor(n/3))
                v.push_back(x.first);
        }
        return v;
    }
};