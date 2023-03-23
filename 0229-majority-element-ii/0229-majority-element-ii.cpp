class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int num1 = INT_MIN, num2 = INT_MIN , count1 = 0, count2 = 0;
        int n = nums.size();
        vector<int> ans;
        
        for(int i=0;i<n;i++){        //USING BOYER-MOORE VOTING ALGO. TC = O(N) , SC = O(1)
            if(nums[i] == num1)
                count1++;
            else if(nums[i] == num2)
                count2++;
            else if(count1 == 0){
                num1 = nums[i];
                count1 = 1;
            }
            else if(count2 == 0){
                num2 = nums[i];
                count2 = 1;
            }
            else{
                count1--;
                count2--;
            }
        }
        
        count1 = 0, count2 = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==num1)
                count1++;
            else if(nums[i]==num2)
                count2++;
        }
        
        if(count1 > n/3)
            ans.push_back(num1);
        if(count2 > n/3)
            ans.push_back(num2);
        
        return ans;
    }
};





// Using Unordered map:  TC = O(N) , SC = O(N)

//     int n = nums.size();
//     unordered_map<int,int> mp;        //TC = O(N) , SC = O(N)
//     vector<int> v;
//     for(auto x: nums){
//         mp[x]++;
//     }
    
//     for(auto x: mp){
//         if(x.second > floor(n/3))
//             v.push_back(x.first);
//     }
//     return v;