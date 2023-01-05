class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n=nums.size();        //TC=O(N) , SC=O(N)  ----> USING EXTRA SPACE
        vector<int> temp(n);
        
        for(int i=0;i<n;i++){
            temp[(i+k)%n] = nums[i];
        }
        nums = temp;        
    }
};

//1. Best method: ----> TC=O(N) , SC=O(1)

 //       k = k%nums.size();      //if size of given vector is 7 and given k is 10 then, it will be same                                     as 10%7 = 3 rotation
 //        reverse(nums.begin() , nums.end());           //TC=O(N) , SC=O(1)
 //        reverse(nums.begin() , nums.begin()+k);
 //        reverse(nums.begin()+k , nums.end());