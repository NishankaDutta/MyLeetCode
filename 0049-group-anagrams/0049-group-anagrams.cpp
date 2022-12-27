class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        vector<vector<string>> ans;               //TC=O(n*mlogm) , SC=O(n*mlogm)
        unordered_map<string,vector<string>> m;
        
        for(auto x:strs){
            string temp = x;             
            sort(x.begin(),x.end());
            m[x].push_back(temp);
        }
        
        for(auto x:m){
            ans.push_back(x.second);
        }
        return ans;
        
    }
};