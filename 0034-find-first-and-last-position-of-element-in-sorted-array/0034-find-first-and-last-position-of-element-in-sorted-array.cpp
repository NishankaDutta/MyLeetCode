class Solution {
public:
    int firstOccur(vector<int>& nums, int target){
        int n = nums.size();                            //TC=O(logn)   -----> Very Important B.S PROBLEM
        int firstIndex = -1;
        int start = 0 , end = n-1;

        while(start<=end){
            int mid = start + (end-start)/2;

            if(nums[mid]==target){
                firstIndex = mid;
                end = mid-1;
            }
            else if(nums[mid]<target)
                start = mid+1;
            else
                end = mid-1;
        }
        return firstIndex;
    }    

public:
    int lastOccur(vector<int>& nums, int target){
        int n = nums.size();
        int lastIndex = -1;
        int start = 0 , end = n-1;

        while(start<=end){
            int mid = start+(end-start)/2;

            if(nums[mid]==target){
                lastIndex = mid;
                start = mid+1;
            }
            else if(nums[mid]<target)
                start = mid+1;
            else
                end = mid-1;
        }
        return lastIndex;
    }    

public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        
        ans.push_back(firstOccur(nums, target));
        ans.push_back(lastOccur(nums,target));
        
        return ans;
    }
};