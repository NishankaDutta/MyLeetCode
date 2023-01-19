class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-3;i++){
            if(i>0 && nums[i]==nums[i-1])
                continue;
            
            for(int j=i+1;j<n-2;j++){
                if(j>i+1 && nums[j]==nums[j-1])
                    continue;
                
                int low = j+1;
                int high = n-1;
                long long tSum = target-((long long)nums[i]+(long long)nums[j]);
                while(low<high){
                    if(nums[low]+nums[high]==tSum){
                        vector<int> temp;
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[low]);
                        temp.push_back(nums[high]);
                        ans.push_back(temp);
                        
                        while(low<high && nums[low]==nums[low+1]) low++;
                        while(low<high && nums[high]==nums[high-1]) high--;
                        
                        low++;
                        high--;
                    }
                    else if(nums[low]+nums[high]<tSum)
                        low++;
                    else
                        high--;
                }
            }
        }
        return ans;
    }
};