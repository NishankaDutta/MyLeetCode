class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        
        int i=0, j=i+1;              //TC=O(N) , SC=O(1)
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