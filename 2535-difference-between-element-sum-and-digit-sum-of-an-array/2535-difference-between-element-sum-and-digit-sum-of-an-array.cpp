class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int aSum = 0, dSum = 0;
        for(auto x: nums){
            aSum += x;
            while(x>0){
                dSum += x%10;
                x/=10;
            }
        }
        return (aSum - dSum);
    }
};