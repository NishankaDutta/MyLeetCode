class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int count = 0;
        
        unordered_map<int, int> mp;
        
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        
        for(auto x: nums){
            if(mp[x+diff] && mp[x+2*diff])
                count++;
        }
        return count;
    }
};