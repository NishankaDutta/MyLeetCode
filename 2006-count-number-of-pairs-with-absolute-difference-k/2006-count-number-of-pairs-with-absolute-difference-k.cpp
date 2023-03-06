class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int count = 0;
        unordered_map<int,int> mp;
        
        for(auto x: nums){
            int val1 = mp[x+k];
            int val2 = mp[x-k];
            count += val1+val2;
            mp[x]++;
        }
        return count;
    }
};