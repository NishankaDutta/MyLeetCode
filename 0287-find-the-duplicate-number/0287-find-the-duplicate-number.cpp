class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];             
        int fast = nums[0];         //Using Tortoise-Method(SLOW pointer and fast pointer method)
                                    //TC = O(n) , SC = O(1)
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while(slow!=fast);
        
        fast = nums[0];
        while(slow!=fast){
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
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

//2. USING SORTING: 

//         sort(nums.begin(),nums.end());         //TC = O(nlogn) , SC=O(1)
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]==nums[i+1]){
//                 return nums[i];
//             }
//         }
//         return 0;

//3. WE CAN ALSO USE HASHMAP: TC=O(n) , SC=O(n)