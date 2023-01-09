class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxprod = INT_MIN;          //TC=O(2N)==O(N) , SC=O(1)
        int prod = 1;
        
        for(int i=0;i<nums.size();i++){
            prod = prod*nums[i];
            maxprod = max(maxprod,prod);
            if(prod==0){
                prod=1;
            }
        }
        
        prod=1;
        for(int i=nums.size()-1;i>=0;i--){
            prod = prod*nums[i];
            maxprod = max(maxprod,prod);
            if(prod==0){
                prod=1;
            }
        }
        return maxprod;
    }
};


//1. BRUTE-FORCE:              TC=O(n^2) , SC=O(1)

//  int maxProduct(vector<int>& nums) {
//     int ans = INT_MIN;
//     for(int i = 0; i < nums.size(); i++) {
//         int curProd = 1;
//         for(int j = i; j < nums.size(); j++)
//             curProd *= A[j],
//             ans = max(ans, curProd);
//     }
//     return ans;
//  }
