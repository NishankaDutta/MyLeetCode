class Solution {
public:
    void sortColors(vector<int>& nums) {
       
        int low=0;                  //Using DUTCH NATIONAL FLAG ALGO:  TC=O(n) , SC=O(1)
        int mid=0;
        int high=nums.size()-1;
        
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else if(nums[mid]==2){
                swap(nums[mid],nums[high]);
                high--;
            }
        }
        
    }
};


// Method 1: Sorting the nums vector
// Time complexity - O(n log n) , SC=O(1)

// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//        sort(nums.begin(), nums.end());
//     }
// };


// Method 2: keep a count of 0's 1's and 2's
// Time complexity - O(2N) , SC=O(1)

// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int count0 = 0;
//         int count1 = 0; 
//         int count2  = 0;
//         for(int i =0; i< nums.size(); i++){
//             if(nums[i] == 0){
//                 count0++;
//             }else if (nums[i] == 1){
//                 count1++;
//             }else if (nums[i] ==2 ){
//                 count2++;
//             }
            
//          }
//         for(int i =0; i< count0; i++){
//             nums[i] =0;
//         }
//         for(int i =count0; i< (count1 + count0); i++){
//             nums[i] =1;
//         }
//         for(int i =(count1 + count0); i< nums.size(); i++){
//             nums[i] =2;
//         }
        
//     }
// };