class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> even;
        vector<int> odd;
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0)
                even.push_back(nums[i]);
            else
                odd.push_back(nums[i]);
        }
        
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        
        vector<int> res;
        for(auto x: even){
            res.push_back(x);
        }
        for(auto x: odd){
            res.push_back(x);
        }
        
        return res;
    }
};