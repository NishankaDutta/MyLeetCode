class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());    //TC=O(nlogn) , SC=O(1)
        int res=0;
        
        for(int i=1;i<n;i++){
            if(nums[i]<=nums[i-1]){
                res += nums[i-1] + 1 - nums[i];
                nums[i] = nums[i-1]+1;
            }
        }
        return res;
    }
};