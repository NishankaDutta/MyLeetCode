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