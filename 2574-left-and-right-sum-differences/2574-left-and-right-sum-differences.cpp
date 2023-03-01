class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        int sum = 0;
        int leftSum = 0;
        int rightSum = 0;
        
        
        vector<int> res , left, right;
        
        for(int i=0;i<nums.size();i++){
            leftSum += nums[i];
            left.push_back(leftSum);
        }
        
        for(int i=nums.size()-1;i>=0;i--){
            rightSum += nums[i];
            right.push_back(rightSum);
        }
        
        reverse(right.begin(), right.end());
        
        for(int i=0;i<nums.size();i++){
            res.push_back(abs(left[i]-right[i]));
        }
        return res;
    }
};