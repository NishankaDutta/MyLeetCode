class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        int thirdMax = INT_MIN;
        int count=0;
        for(int i=nums.size()-1;i>=0;i--){
            if(thirdMax!=nums[i]){
                count++;
                thirdMax=nums[i];
            }
            if(count==3)
                return thirdMax;
        }
        
        return nums[nums.size()-1];
    }
};