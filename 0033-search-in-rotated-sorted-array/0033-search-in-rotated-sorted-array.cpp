class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();            //VERY IMP B.S PROBLEM
        int left = 0;          
        int right = n-1;                  //TC = O(logn) , SC=O(1)
        
        while(left<=right){
            int mid = left+(right-left)/2;
            
            if(nums[mid]==target)
                return mid;
            
            //if Left side is sorted
            else if(nums[left]<=nums[mid]){        
                //check if the target lies on the left side or not
                if(nums[left]<=target && target<=nums[mid]) 
                    right=mid-1;
                else
                    left=mid+1;
            }
            
            //if Right side is sorted
            else{
                //check if the target lies on the right side or not
                if(nums[mid]<=target && target<=nums[right]) 
                    left=mid+1;
                else
                    right=mid-1;
            }
        }
        return -1;
    }
};

// for(int i=0;i<nums.size();i++){
//             if(nums[i]==target)
//                 return i;
//         }
//         return -1;