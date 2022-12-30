class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();              //TC=O(n) , SC=O(n)
        vector<int> ans(n);
        vector<int> left(n);              //to store left_product vector
        vector<int> right(n);             //to store right_product vector
        
        left[0] = 1;
        for(int i=1;i<n;i++){
            left[i] = left[i-1]*nums[i-1];
        }
        
        right[n-1] = 1;
        for(int i=n-2;i>=0;i--){
            right[i] = right[i+1]*nums[i+1];
        }
        
        for(int i=0;i<n;i++){
            ans[i] = left[i]*right[i];
        }
        return ans;
    }
};



//1. BRUTE-FORCE:     TC=O(n^2)   -----> Time limit exceeded(TLE problem)

// vector<int> v;
// for(int i=0;i<nums.size();i++){
//     int p=1;
//     for(int j=0;j<nums.size();j++){
//         if(i==j){
//             continue;
//         }
//         p*=nums[j];
//     }
//    v.push_back(p);
// }
// return v;