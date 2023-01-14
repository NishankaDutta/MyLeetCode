class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<int> temp(n);
        
        int i=1;
        int j=n-1;
        
        while(i<n){
            temp[i] = nums[j];
            i=i+2;
            j--;
        }
        
        i=0;
        while(i<n){
            temp[i] = nums[j];
            i=i+2;
            j--;
        }
        
        nums=temp;
    }
};