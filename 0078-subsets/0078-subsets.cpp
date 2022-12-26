class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();            //TC=O(n*2^n) , SC=O(1) , auxiliary space = O(n*2^n)

        for(int i=0;i<pow(2,n);i++){         //i < pow(2,n) or i < (1<<n);    both means 2^n
            vector<int> v;
            for(int j=0;j<n;j++){
                if(i&(1<<j)){
                    v.push_back(nums[j]);
                }
            }
            ans.push_back(v);
        }
        return ans;
    }
};