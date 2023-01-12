class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        int ans = 0;
        
        for(int i=0;i<nums.size();i++){            //TC = O(nk) == O(n) , SC = O(n)
            s.insert(nums[i]);
        }
        
        for(int i=0;i<nums.size();i++){
            int current_element = nums[i];
            int previous_element = current_element-1;
            
            if(s.find(previous_element)!=s.end())
                continue;
            else{
                int count=0;
                while(s.find(current_element)!=s.end()){
                    current_element++;
                    count++;
                }
                ans = max(ans,count);
            }
        }
        return ans;
    }
};