class Solution {
public:
    static bool custom_comparator(string a, string b){
        if(a+b>b+a)
            return true;
        else
            return false;
    }
    
public:
    string largestNumber(vector<int>& nums) {          // TC = O(nlogn)
        string ans;
        vector<string> v;
        
        for(auto x: nums){
            v.push_back(to_string(x));
        }
        
        sort(v.begin(), v.end(), custom_comparator);
        
        for(auto x: v){
            ans += x;
        }
        
        int start=0;
        while(ans[start]=='0' && start<nums.size()-1){
            start++;
        }
        
        return ans.substr(start);
    }
};