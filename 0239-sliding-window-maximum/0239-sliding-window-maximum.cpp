class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int> dq;                           
        vector<int> ans;           //using deque and monotonic queue ---> TC = O(N) , SC = O(N)
        
        for(int i=0;i<k;i++){
            int curr = nums[i];
            while(!dq.empty() && dq.back() < curr){
                dq.pop_back();
            }
            
            dq.push_back(nums[i]);
        }
        ans.push_back(dq.front());
        
        for(int i=k;i<nums.size();i++){
            if(dq.front() == nums[i-k]){
                dq.pop_front();
            }
            
            int curr = nums[i];
            while(!dq.empty() && dq.back() < curr){
                dq.pop_back();
            }
            
            dq.push_back(nums[i]);
            ans.push_back(dq.front());
        }
        return ans;
    }
};

// int n = nums.size();
        // vector<int> ans;
        // for(int i=0;i<n;i++){
        //     int maxi = INT_MIN;
        //     for(int j=i;j<i+k-1;j++){
        //         maxi = max(maxi,nums[j]);
        //     }
        //     ans.push_back(maxi);
        // }
        // return ans;