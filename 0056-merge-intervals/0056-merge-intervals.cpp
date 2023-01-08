class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        if(intervals.size()==0){
            return ans;
        }
        
        sort(intervals.begin(),intervals.end());      //TC = O(nlogn)+O(n) == O(nlogn) , SC=O(n)
        vector<int> tempInterval = intervals[0];
        
        for(auto x: intervals){
            if(tempInterval[1] >= x[0]){
                tempInterval[1] = max(tempInterval[1],x[1]);
            } 
            else{
                ans.push_back(tempInterval);
                tempInterval=x;
            }
        }
        ans.push_back(tempInterval);
        return ans;
    }
};