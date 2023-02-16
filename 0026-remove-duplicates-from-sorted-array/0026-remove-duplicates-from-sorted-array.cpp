class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0, j=i+1;
        
        while(j<nums.size()){
            if(nums[j]==nums[i])
                j++;
            else{
                i++;
                nums[i] = nums[j];
            }
        }
        return i+1;
    }
};