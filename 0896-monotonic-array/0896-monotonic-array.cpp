class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool incMono = true;
        bool decMono = true;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1])
                decMono = false;
            else if(nums[i]<nums[i-1])
                incMono = false;
        }
        
        return decMono||incMono;
    }
};