class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[i+1]){
                return nums[i];
            }
        }
        return 0;
    }
};

//1. BRUTE-FORCE:   (will give TLE)

//         for(int i=0;i<nums.size();i++){          //TC=O(n^2) , SC=O(1)
//             for(int j=0;j<nums.size();j++){
//                 if(i==j)
//                     continue;
//                 else{
//                     if(nums[i]==nums[j])
//                         return nums[i];
//                 }
//             }
//         }
//         return 0;