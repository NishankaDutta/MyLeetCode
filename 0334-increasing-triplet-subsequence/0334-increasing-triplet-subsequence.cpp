class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        
        if(nums.size()<3)
            return false;
        
        int first = INT_MAX;
        int second = INT_MAX;                       //TC = O(n) , SC=O(1)
        
        for(int i=0;i<nums.size();i++){
            if(nums[i] < first)
                first = nums[i];
            else if(nums[i] > first && nums[i] < second)
                second = nums[i];
            else if(nums[i] > second)
                return true;
        }
        return false;
    }
};



//1. Brute-force approach ------> TC=O(N^2)

// int n = nums.size();
// for(int i=0;i<n;i++){
//     for(int j=i+1;j<n;j++){
//         for(int k=j+1;k<n;k++){
//             if(nums[i]<nums[j] && nums[j]<nums[k])
//                 return true;
//         }
//     }
// }
// return false;

