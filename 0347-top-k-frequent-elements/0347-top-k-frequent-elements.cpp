class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;            //TC = O(nlogk) , SC=O(k)
        vector<int> ans;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> min_heap;
        
        for(auto x: nums){
            m[x]++;
        }
        
        for(auto x: m){
            min_heap.push({x.second,x.first});
            if(min_heap.size()>k){
                min_heap.pop();
            }
        }
        
        while(k--){
            ans.push_back(min_heap.top().second);
            min_heap.pop();
        }
        return ans;
    }
};